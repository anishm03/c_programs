//find Min
#include<stdio.h>

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int min = arr[0];
    int i;

    for(i = 1; i < 5; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    printf("Minimum number = %d", min);

    return 0;
}


