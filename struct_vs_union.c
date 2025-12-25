#include <stdio.h>

struct employeeS{
        int id_no;
        char name[10];
        char deesignation[10];
        int salary;
    };
    
    union employeeU{
        int id_no;
        char name[10];
        char deesignation[12];
        int salary;
    };
int main() 
{
    struct employeeS e1;
    printf("Size of struct : %d\n",sizeof(e1));
    union employeeU u1;
    printf("Size of Union : %d",sizeof(u1));
    
  
    return 0;
}

