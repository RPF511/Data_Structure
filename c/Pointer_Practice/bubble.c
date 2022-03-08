#include /*???*/

void bubblesort(int *arr, int num){
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

/*
void bubblesort(int arr[], int num){
    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}*/

int main(void){
    int a[10] = {3,0,2,7,9,8,4,1,5,6};
    int num = 10;
    printf("before sort : ");
    printarray(a,10);
    bubblesort(a,num);
    printf("after sort  : ");
    printarray(a,10);
    return 0;
}