//compare string
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[10]="hello";
    char s2[10]="Hello";
    if(strcasecmp(s1,s2) ==0){   //strcmp    strcasecmp
        printf("string are Equal");
}else{
     printf("string are not Equal");
}
	

	
	return 0;
}
