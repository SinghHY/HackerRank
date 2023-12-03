#include <stdio.h>

void plusMinus(int, int*);

int main()
{
    int n = 6, arr[] = {-4, 3, -9, 0, 4, 1};

    plusMinus(n, arr);
    printf("\nHello World");

    return 0;
}

void plusMinus(int arr_count, int* arr)
{
    float positive=0;
    float negative=0;
    float zero=0;
    
    for(int i=0;i<arr_count;i++){
        if(arr[i]>0)
            positive++;

        else if(arr[i]<0)
            negative++;
            
        else 
            zero++;
    }
    printf("%.6f\n",positive/arr_count);
    printf("%.6f\n",negative/arr_count);
    printf("%.6f",zero/arr_count);
}