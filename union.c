#include <stdio.h>

union data{
    int i;
    float f;
    char c;
    
};

int main() 
{
   union data d;
   d.i = 10;
   printf("Integer = %d\n",d.i);
   d.f = 42.20;
   printf("Float = %.2f\n",d.f);
   d.c = 'A';
   printf("char = %c\n",d.c);
   
   
    return 0;
}

