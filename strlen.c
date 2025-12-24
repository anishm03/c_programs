//finding length
#include<stdio.h>
#include<string.h>

int main()
{
	//strlen
	char name[]="Anish Mahaldar";
	printf("Length = %d",strlen(name));
	
	//strcpy
	char a[20]="hello its anish";
	char b[20];
	strcpy(b,a);
	printf("Copied string =%s",b);
	
	//strcat
    char x[10]="Anish";
    char y[10]="Mahaldar";
    strcat(x,y);
    printf("Name is = %s",x);
	
	return 0;
}
