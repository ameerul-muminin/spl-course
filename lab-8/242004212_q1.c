#include <stdio.h>
#include <string.h>

struct employee {
    int id;
    char name[50];
    float salary;
} e1, e2; // declaring e1 and e2 as variables for structure 

void main() {
    // store first employee information
    e1.id = 101;
    strcpy(e1.name, "Alif");
    e1.salary = 100000;
    
    // store second employee information
    e2.id = 102;
    strcpy(e2.name, "Ameer");
    e2.salary = 120000;
    
    // print first employee information
    printf("Employee Id : %d\n", e1.id);
    printf("Employee Name : %s\n", e1.name);
    printf("Employee Salary : %.2f\n", e1.salary);
    
    printf("\n");
    
    // print second employee information
    printf("Employee Id : %d\n", e2.id);
    printf("Employee Name : %s\n", e2.name);
    printf("Employee Salary : %.2f\n", e2.salary);
}