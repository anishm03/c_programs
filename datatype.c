#include<stdio.h>

int main()
{ 
    int age;
    float marks;
    char grade;
    char name[20];
    //Taking Inputs
    
    printf("Enter Your Age : ");
    scanf("%d",&age);
     printf("Enter Your Marks : ");
    scanf("%f",&marks);
     printf("Enter Your grade : ");
    scanf(" %c",&grade);              //space before c
     printf("Enter Your name : ");
    scanf("%s", name);
    
    //Display Output
    printf("Student Details \n");
    printf("Age is : %d \n",age);
     printf("Marks is : %f \n",marks);
      printf("Grade is : %c \n",grade);
       printf("Name is : %s \n",name);

    return 0;
}
