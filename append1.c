//Appending to a file

#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("C:\\file\\anish_write101.txt","a");
	
    if(fp == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	
	fprintf(fp,"This line is appended at end \n");
	fprintf(fp,"This 2nd line is appended at end \n");	
	fclose(fp);
	printf("Data Appended Successfully");
	return 0;
}
