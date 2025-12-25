#include <stdio.h>

struct employee {
    int id;
    char name[20];
    char designation[20];
    int salary;
};

int main() {
    int n, i;
    struct employee e[n];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Designation: ");
        scanf("%s", e[i].designation);

        printf("Enter Salary: ");
        scanf("%d", &e[i].salary);
    }

    printf("\n--- Employee Details ---\n");

    for(i = 0; i < n; i++) {
        printf("\nID          : %d", e[i].id);
        printf("\nName        : %s", e[i].name);
        printf("\nDesignation : %s", e[i].designation);
        printf("\nSalary      : %d\n", e[i].salary);
    }

    return 0;
}

