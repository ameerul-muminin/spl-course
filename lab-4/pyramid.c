#include <stdio.h>

int main()
{
	int rows, i, j, space, num;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	for (i = 0; i < rows; i++) {
		for (space = 1; space <= rows -i -1; space++) {
			printf("  ");
		}

		num = i;
		for (j = 0; j <= i; j++) {
			printf("%d ", num--);
		}

		num = 1;
		for ( j = 1; j <= i; j++) {
			printf("%d ", num++);
		}

		printf("\n");
	}
	return 0;
}

