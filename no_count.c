#include <stdio.h>

int main() 
   {
    int n = 98765 , count = 0;
   do{
   	count++;
   	n = n / 10;
   }
   while(n>0);
   printf("Total Digit : %d",count);

 return 0;
}

