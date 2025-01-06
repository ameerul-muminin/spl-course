#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X1, X2, Y1, Y2;
    float distance;

    printf("Input X1: ");
    scanf("%d", &X1);

    printf("Input Y1: ");
    scanf("%d", &Y1);

    printf("Input X2: ");
    scanf("%d", &X2);

    printf("Input Y2: ");
    scanf("%d", &Y2);

    distance = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

    printf("Distance between the said points: %.4f\n", distance);

    return 0;
}
