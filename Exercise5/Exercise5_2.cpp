#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void main() {
	
	int myArray[SIZE];
	int tmp;				// variable to hold temporary values in the process for sorting the array.

	srand(time(NULL));		// function to give rand() a random seed.

	// fills the array with random numbers from 1 to 100 and then prints out the unsorted result.
	for (int i = 0; i < SIZE; i++) {
		myArray[i] = rand() % 100 + 1;
		printf("%d | ", myArray[i]);
	}

	// typical Bubble sort.
	for (int pass = 1; pass < SIZE; ++pass) {
		// loop to control number of comparisons per pass.
		for (int i = 0; i < SIZE - 1; ++i) {
			// compare adjacent elements and swap them if first element is greater than second element.
			if (myArray[i] > myArray[i + 1]) {
				tmp = myArray[i];
				myArray[i] = myArray[i + 1];
				myArray[i + 1] = tmp;
			}
		}
	}

	printf("\n\n");

	// prints out the sorted array.
	for (int i = 0; i < SIZE; i++) {
		printf("%d | ", myArray[i]);
	}

	printf("\n\n");
}
