#include <stdio.h>
#include <string.h>

struct student
{
    int rollNo;
    char name[20];
};

int main() {
    int i; 
    struct student stud[5];
    printf("Enter the records of 5 students: ");
    
    for (i = 0; i < 5; i++) {
        printf("\nEnter roll no: ");
        scanf("%d", &stud[i].rollNo);
        printf("Enter name: ");
        scanf("%s", stud[i].name);
    }
    
    printf("\nStudent Information List: ");
    for (i = 0; i < 5; i++) {
        printf("\nRoll no: %d Name: %s ", stud[i].rollNo, stud[i].name);
    }

    return 0;
}