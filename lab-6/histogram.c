#include <stdio.h>
#define N 5

int main() {

	int value[N];
	int i, j, n, x;

	for (n = 0; n < N; n++) {
		printf("Enter employees in group- %d ", n+1);  //here the value of n index is not affected but to correctly name the group 1 is added
		scanf("%d", &x);

		value[n] = x;
		printf("%d\n", value[n]);
	}

	printf("\n");
	printf("        |\n");

	//histogram
	for (n = 0;  n<N; n++) {

		for (i = 1; i <= 3; i++) {

			if (i ==2) {
				printf("Group-%d	|", n+1);  // There are eight spaces
			}
			else {
				printf("        |");
			}

			//printing star patterns
			for (j = 1; j <= value[n]; j++) {
				printf("*");
			}
			if(i==2) {
				printf("(%d)\n", value[n]);
			}
			else {
				printf("\n");
			}
		}
			printf("        |\n");  //Gap between the graphs
	}

	return 0;
}
