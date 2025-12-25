
#include<stdio.h>

struct employee{
  int id_no;
  char name[20];
  char designation[20];
  int salary;
  
};
int main()
{
    struct employee emp;
    printf("Enter Employee Id :\n");
    scanf("%d",&emp.id_no);
    printf("Enter Name\n");
    scanf("%s ",&emp.name);
    printf("Enter Designation\n");
    scanf("%s ",&emp.designation);
    printf("Enter salary\n");
    scanf("%d",&emp.salary);
    
    
    printf("Details of Employee");
    printf("Employee Id : %d\n",emp.id_no);
    printf("Employee Name : %s\n",emp.name);
    printf("Employee Designamtion : %s\n",emp.designation);
    printf("Employee salary : %d\n",emp.salary);

    
    
    
    return 0;
}
