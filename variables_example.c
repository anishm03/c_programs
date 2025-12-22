#include<stdio.h>
#include<conio.h>
int main()
{
	//Integer Types
	int i = 10;
	short int si = 5;
	long int li = 1245678;
	unsigned int ui = 20;
	
	
	//Character type
	char c = 'A';
	
	//Floating-points Types
	float f = 12.34;
	
	//Double- point Types
	double d = 3.1241542;
	
	//Long Double
	long double ld = 3.12452155655;
	
	
	printf("--------Integer Types----------- \n");
	printf("int : value = %d , size = %zu byte \n",i,sizeof(i));
	printf("short int : value = %d , size = %zu byte \n",si,sizeof(si));
	printf("long int : value = %d , size = %zu byte \n",li,sizeof(li));
	printf("unsigned int : value = %u , size = %zu byte \n",ui,sizeof(ui));
	
		printf("--------Character Types----------- \n");
		
		printf("char : value = %c , size = %zu byte \n",c,sizeof(c));
		
			printf("--------Floating point Types----------- \n");
			printf("float : value = %f , size = %zu byte \n",f,sizeof(f));
			printf("double : value = %lf , size = %zu byte \n",d,sizeof(d));
				printf("long double : value = %Lf, size = %zu byte \n",ld,sizeof(ld));
	
	return 0;
}
