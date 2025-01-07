#include <stdio.h>
struct address {
    char city[20];
    int pin;
    char phone[14];
};
struct employee {
    char name[20];
    struct address add;
} emp;

void main() {
    
    printf("Enter employee information? \n");
    scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    printf("\nPrinting the employee information... \n");
    printf("Name: %s\nCity: %s\nPin: %d\nPhone: %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
}