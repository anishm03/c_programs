//Using input write data

#include<stdio.h>

int main()
{
	FILE *fp;
	char name[20];
	int age;
	float marks;
	
		fp = fopen("C:\\file\\anish_write102.txt","w");
		if(fp == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	printf("Enter student name :");
	scanf("%s",name);
	
	printf("Enter student age :");
	scanf("%d",&age);
	
	printf("Enter student marks :");
	scanf("%f",&marks);
	
	fprintf(fp,"Name : %s \n Age : %d \n Marks : %.2f \n",name,age,marks);
	
	fclose(fp);
	printf("Data written successfully");
	
	return 0;
}
