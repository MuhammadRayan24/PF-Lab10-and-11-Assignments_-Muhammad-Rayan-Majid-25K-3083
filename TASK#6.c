#include <stdio.h>
#include <string.h>
#define max 100
// Salary Structure
typedef struct {
    float basicPay;
    float bonus;
    float deduction;
} Salary;

// Employee Structure
typedef struct {
    int id;
    char name[50];
    Salary salary;
} Employee;

// Function to calculate net salary
float calculateNetSalary(Salary s) {
    return s.basicPay + s.bonus - s.deduction;
}

// Display employee details
void displayEmployee(Employee e) {
    printf("\n=== Employee Salary Details ===\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Basic Pay: %.2f\n", e.salary.basicPay);
    printf("Bonus: %.2f\n", e.salary.bonus);
    printf("Deductions: %.2f\n", e.salary.deduction);
    printf("Net Salary: %.2f\n", calculateNetSalary(e.salary));
}

int main() {
    Employee employees[max];
    int count, i;

    printf("How many employees do you want to enter? ");
    scanf("%d", &count);
    getchar(); 

    for (i = 0; i < count; i++) {
        printf("\n=== Enter Details of Employee %d ===\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &employees[i].id);
        getchar();

        printf("Enter Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0';

        printf("Enter Basic Pay: ");
        scanf("%f", &employees[i].salary.basicPay);

        printf("Enter Bonus: ");
        scanf("%f", &employees[i].salary.bonus);

        printf("Enter Deduction: ");
        scanf("%f", &employees[i].salary.deduction);

        getchar();
    }

    printf("\n\n===== DISPLAYING EMPLOYEE DETAILS =====\n");
    for (i = 0; i < count; i++) {
        displayEmployee(employees[i]);
    }
    return 0;
}
