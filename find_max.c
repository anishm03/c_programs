//find Max
#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int max = arr[0];
    int i;
    
     for(i = 1; i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Maximum number = %d", max);
    
    
   
    
    return 0;
}

