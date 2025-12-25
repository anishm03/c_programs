#include <stdio.h>

struct student {
    int roll;
    char name[20];
    int marks;
};

int main() 
{
    int n, i;
    struct student s[10];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
	{
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    
    for(i = 0; i < n; i++) 
	{
        printf("\nRoll No : %d", s[i].roll);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %d\n", s[i].marks);
    }

    return 0;
}

