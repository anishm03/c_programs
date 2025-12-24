//finding length
#include<stdio.h>
#include<string.h>

int main()
{
	
	//strcat
    char x[10] = "Anish";
    char y[10] = "Mahaldar";
    char z[10] = "Kolhapur";

    strcat(x, y);
    strcat(x, z);
    printf("Name is = %s",x);
	
	return 0;
}
