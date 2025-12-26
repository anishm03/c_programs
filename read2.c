//Read file data

#include<stdio.h>
int main()
{
	FILE *fp;
	
	char name[20];
	int age;
	float marks;
	fp = fopen("C:\\file\\anish_write102.txt","r");
	
	if(fp == NULL)
	{
		printf("Error opening file\n");
		return 1;
	}
	
	fsacnf(fp,"Name : %s \n Age : %d \n Marks : %.2f \n",name,&age,&marks);
	printf("Student Information read from file");
	
	printf("Name = %s \n",name);
	printf("Age = %d \n",age);
	printf("Marks = %.2f \n",marks);
	
	
//	printf("File Content\n");
//	while(fgets(str,sizeof(str),fp)!=NULL){
//		printf("%s",str);
//	}
	fclose(fp);
	
	return 0;
	
}
