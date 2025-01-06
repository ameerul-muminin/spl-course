#include <stdio.h>
int main() {
   const float BASE_SALARY = 1500.00;
   const float BONUS_RATE = 200.00;
   const float COMMISSION = 0.02;

   float bonus, commission, gross_salary, price;

   int quantity;

   printf("Input number sold and price\n");
   scanf("%d %f", &quantity, &price);

   bonus = BONUS_RATE * quantity;
   commission = COMMISSION * quantity * price;
   gross_salary = BASE_SALARY + bonus + commission;

   printf("Bonus   \t= %.2f\n", bonus);
   printf("Commission\t= %.2f\n", commission);
   printf("Gross salary\t= %.2f\n", gross_salary);

   return 0;
}
