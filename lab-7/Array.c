// Write a code for a simple array to calculate the AVG of a Quiz of ten students?

#include<stdio.h>
int main( ) {
	int avg, sum = 0 ;
	int i ;
	int marks[10] ;
	for ( i = 0 ; i <10 ; i++ ) {
		printf ( "\nEnter marks " ) ;
		scanf( "%d", &marks[i] ) ;
	}

	for ( i = 0 ; i <10 ; i++ ) {
		sum = sum + marks[i] ;
	}
	printf("\nThe sum is %d", sum);
	avg = sum / 10 ;
	printf ( "\nAverage marks = %d", avg ) ;
}
