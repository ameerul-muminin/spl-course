#include <stdio.h>
#include <stdlib.h>

int main()
{
    float time_in_hours;
    int litres;

    printf("time = ");
    scanf("%f",  &time_in_hours);

    litres = time_in_hours * 0.5;

    printf("litres = %d\n",litres);
    return 0;
}
