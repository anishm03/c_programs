//Copy data from one arry to another
#include<stdio.h>

int main()
{
    int arr[8] = {1,2,3,4,5,6,7,8};
    int even = 0, odd = 0;
    int i;
    
    for(i = 0; i < 8; i++){
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d\n , Odd count  = %d\n", even , odd);
   
    
    return 0;
}

