#include <stdio.h>
struct address {
    char city[20];
    int pin;
    char phone[14];
};
struct employee {
    char name[20];
    struct address add;
};
void display(struct employee e1)
{
    printf("\nPrinting the employee information... \n");
    printf("\nName: %s\nCity: %s\nPin: %d\nPhone: %s", e1.name, e1.add.city, e1.add.pin, e1.add.phone);
}

void main() {
    struct employee emp;
    printf("Enter employee information? \n");
    scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    display(emp);
}