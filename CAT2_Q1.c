#include <stdio.h>
#include <string.h>

struct employee {
    char name[25];
    int id;
    char department[20];
    float salary;
    char email[50];
};

int main() {
    struct employee emp;

    
    printf("Enter employee name: ");
    fgets(emp.name, 25, stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0'; 

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee department: ");
    fgets(emp.department, 20, stdin);
    emp.department[strcspn(emp.department, "\n")] = '\0'; 

    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    printf("Enter employee email: ");
    fgets(emp.email, 50, stdin);
    emp.email[strcspn(emp.email, "\n")] = '\0';

    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
