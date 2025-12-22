//Function with Parameter With Return Value

#include<stdio.h>

int square(int num){
    return num * num;
}
int max(int a ,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int main()
{
    int result = square(14);
    printf("Square = %d \n",result);
    
    
    int res = max(45,85);
    printf("Maximium No = %d",res);
   

    return 0;
}

