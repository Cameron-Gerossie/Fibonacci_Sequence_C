/*

	Name: Cameron Gerossie
	Date: 9/15/19

	Description: Create a program that outputs the first fifty numbers of the Fibinacci Sequance

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	long int num1 = 0;
	long int num2 = 1;
	long int temp;
	long int sum;
	int n = 1;

	printf("%2d.) %d\n", n, num1);
	n++;
	printf("%2d.) %d\n", n, num2);

	for (n; n < 50; n++) {

		sum = num1 + num2;

		temp = sum;
		num1 = num2;
		num2 = temp;

		printf("%2d.) %ld \n", (n+1), sum);

	}

	return 0;
}