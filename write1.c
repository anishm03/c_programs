//Writing to file

#include<stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("C:\\file\\anish_write101.txt","w");
	if(fp == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	fprintf(fp,"Hello its Anish and these my file handling\n");
	fprintf(fp,"Hello its Anish and these my file handling 2nf file\n");
	fclose(fp);
	printf("Data written successfully");
	return 0;
}
