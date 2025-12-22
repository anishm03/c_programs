//menu driven progarm + using switch case
#include<stdio.h>

int main()
{
	int a, b, choice;
	char cont;
	
	do{
		printf("=======Calculator Menu=======\n");
		printf("1.Addition (+)\n");
		printf("2.Substraction (-)\n");
		printf("3.Multipication (*)\n");
		printf("4.Division (/)\n");
		printf("0.Exit \n");
		
		printf("Enter Your Choice\n");
		scanf("%d",&choice);
		
		if(choice!=0 && choice<=4){
			printf("Enter First Number\n");
			scanf("%d",&a);
		    printf("Enter Second Number\n");
			scanf("%d",&b);
		}
		
		switch(choice){
			case 1 : printf("Sum = %d \n", a + b);
			break;
			case 2 : printf("Sub = %d \n", a - b);
			break;
			case 3 : printf("Mul = %d \n", a * b);
			break;
			case 4 : printf("Div = %d \n", a / b);
			break;
			case 0 : printf("calculator Exiting...bye bye");
			break;
			default : printf("Invalid Choice");
		}
		if(choice!=0){
			printf("Do you want to perform another operation (y/n)");
			scanf(" %c",&cont);
		}else{
			cont = 'n';
		}
	}while(cont=='y' || cont=='Y');
	
	
	return 0;
}
