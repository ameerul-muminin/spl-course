#include <stdio.h>
#include <stdlib.h>

int main()
{
    char employee_id[10];
    float worked_hours, hourly_rate, salary;

    printf("Input the Employees ID (Max. 10 chars): ");
    scanf("%s", &employee_id);

    printf("Input the working hrs: ");
    scanf("%f", &worked_hours);

    printf("Salary amount/hr: ");
    scanf("%f", &hourly_rate);

    salary = worked_hours * hourly_rate;

    printf("Employees ID = %s\n", employee_id);
    printf("Salary = U$ %.2f\n", salary);

    return 0;
}
