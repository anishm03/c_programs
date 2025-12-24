//string example full name
#include<stdio.h>

int main()
{
	char fullname[20];
	
	printf("Enter Your Full Name \n");
	fgets(fullname,sizeof(fullname),stdin);

	
	printf("your full name is = %s",fullname);
	
	return 0;
}
