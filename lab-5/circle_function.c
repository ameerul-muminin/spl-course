#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

// Function to calculate diameter
float calculateDiameter(float r) {
	// Fill this function to calculate the diameter
	float dia;
	dia = 2 * r;
	return dia;
}

// Function to calculate circumference
float calculateCircumference(float r) {
	// Fill this function to calculate the circumference
	float circum;
	circum = 2 * PI * r;
	return circum;
}

// Function to calculate area
float calculateArea(float r) {
	// Fill this function to calculate the area
	float a;
	a = PI * r * r;
	return a;
}

int main() {
	double radius;
	float diameter, circumference, area;
	// declare while loop for continuous input
	while(1)
	{
		// Prompt user to enter radius
		printf("\nEnter the radius of the circle (or enter a negative value to exit): ");
		scanf("%lf", &radius);
		// Check if the user wants to exit
		if (radius < 0) {
			printf("Exiting the program.");
			break;
		}
		// Check if radius is non-negative
		if (radius >= 0) {
			diameter = calculateDiameter(radius);
			circumference = calculateCircumference(radius);
			area = calculateArea(radius);
		}

	// Display results
	printf("Diameter of the circle: %.2f\n",diameter);
	printf("Circumference of the circle: %.2f\n",circumference);
	printf("Area of the circle: %.2f\n",area);
	}
	return 0;
}

