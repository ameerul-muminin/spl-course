#include <stdio.h>
int main() {
   int a, b, c;
   float r1, r2, D;

   printf("Input values of a, b, c:\n");
   scanf("%d %d %d", &a, &b, &c);

   D = (b * b) - (4*a*c);

   r1 = (- b + sqrt(D)) / (2 * a);
   r2 = (- b - sqrt(D)) / (2 * a);

   if ( D >= 0 ) {
    printf("r1 = %.2f\n", r1);
    printf("r2 = %.2f\n", r2);
   } else {
    printf("Roots are imaginary.");
   }

   return 0;
}
