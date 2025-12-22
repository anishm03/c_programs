//Ficntion without Parameter and without return
#include<stdio.h>
void msg(){
	printf("Hello welcome to c programming\n");
}

void printstar(){
	printf("***************\n");
}
void todaymenu(){
    printf("1.Pizza\n");
    printf("2.Sandwich\n");
    printf("3.Burger\n");
}
void tomomenu(){
    printf("1.slaad\n");
    printf("2.fish\n");
    printf("3.curry\n");
}

int main()
{
	msg();
	printstar();
	todaymenu();
	msg();
	printf("-------------Hi--------------\n");
	msg();
	printstar();
	tomomenu();
	msg();
	
	
	return 0;
}


