#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, century;

    printf("Year: ");
    scanf("%d", &year);

    century = year/100;

    printf("%d\n", century);

    return 0;
}
