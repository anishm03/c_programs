//Secondary Diagonal elements
#include<stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};

    int i;

   
    printf("Secondary diagonal elements:\n");
    for(i = 0; i < 3; i++){
        printf("%d ", arr[i][2 - i]);
    }
    
    return 0;
}

