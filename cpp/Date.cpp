#include <iostream>

class Date
{
    int year_;
    int month_; // 1 부터 12 까지.
    int day_;   // 1 부터 31 까지.
    long date_;
    const int date400 = 146097;
    const int date100[4] = {36525, 36524, 36524, 36524};
    const int dateYear[2] = {365,366};
    const int dateMonth[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};

public:
    int isLeap(int year)
    {
        if (((year % 4) == 0 && (year % 100) != 0) || (year % 400) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    long countDate(long num){
        int ymd[3] = {0,0,0};
        ymd[0] = 400*(num/date400);
        num %= date400;
        for(int i = 0; i<4; i++){
            if(num < date100[i]){
                break;
            }else{
                num -= date100[i];
                ymd[0] += 100;
            }
        }
        int dateNow;
        while(1){
            dateNow = dateYear[isLeap(ymd[0])];
            if(num > dateNow){
                ymd[0] ++;
                num-=dateNow;
            }
            else{
                break;
            }
        }
        ymd[1]=1;
        int leap = isLeap(ymd[0]);
        int monthNow;
        while(ymd[1]<13){
            monthNow = dateMonth[leap][ymd[1]-1];
            if(num > monthNow){
                ymd[1]++;
                num -= monthNow;
            }
            else{
                break;
            }
        }
        ymd[2] = num;
        return ymd[0]*10000+ymd[1]*100+ymd[2];
    }

    void setDate(long num){
        date_ = num;
        long count = countDate(num);
        year_ = count / 10000;
        count %= 10000;
        month_ = count / 100;
        day_ = count % 100;
    };

    long countDate(int year, int month, int day){
        long num = 365*year;
        if(year!=0){ 
            num = num + year/4 - year/100 + year/400 + 1;
        };
        int leap = isLeap(year);
        for(int i = 0 ; i < month - 1 ; i++){
            num += dateMonth[leap][i];
        }
        num += day;
        return num;
    }

    void setDate(int year, int month, int day){
        year_ = year;
        month_ = month;
        day_ = day;
        date_ = countDate(year,month,day);
    };
    void addDay(int num){
        date_+= num;
        setDate(date_);
    };
    void addMonth(int num){
        int leap = isLeap(year_);
        for(int i = 0; i<num;i++){
            date_+=dateMonth[leap][month_+i%12];
        }
        setDate(date_);
    };
    void addYear(int num){
        int leap;
        for(int i = 0; i<num;i++){
            leap = isLeap(year_);
            date_+=dateYear[leap];
            year_++;
        }
        setDate(date_);
    };

    void showDate(){

        std::cout<<"date "<< date_ <<std::endl<< year_<<"."<<month_<<"."<<day_<<std::endl;
    };
};

int main(void){
    Date date;
    // for(int i = 365*399;i<365*400;i++){
    //     date.setDate(i);
    //     date.showDate();
    // }
    date.setDate(5000);
    date.showDate();
    date.addDay(36);
    date.showDate();
    date.addMonth(3);
    date.showDate();
    date.addYear(2);
    date.showDate();
}