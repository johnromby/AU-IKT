#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void main() {

	srand(time(NULL));
	int myArray[SIZE];
	int sumNegNumbr = 0;

	for (int i = 0; i < SIZE; i++)
	{
		myArray[i] = rand() % 101-50;
		printf("%d | ", myArray[i]);
		if (myArray[i] < 0)
		{
			sumNegNumbr++;
		}
	}

	printf("\n\nFound %d negative numbers!", sumNegNumbr);

	printf("\n\n");
}
