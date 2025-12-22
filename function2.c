//function with parameter but with no return

#include<stdio.h>

int i;
void printTable(int num){
    for(i=1;i<=10;i++){
        printf("%d * %d = %d \n",num,i,num * i);
    }
}
void areaRectangle(int length, int breadth){
	printf("area = %d \n",length * breadth);
}

int main()
{
	
	int l,b;
	printf("Enter Length : \n");
	scanf("%d",&l);
	printf("Enter breadth : \n");
	scanf("%d",&b);
	areaRectangle(l,b);
    int number;
    printf("Enter Number");
    scanf("%d",&number);
    
    printf("\n Mutliplication Table of %d : \n");
    printTable(number);
    
    return 0;
}
