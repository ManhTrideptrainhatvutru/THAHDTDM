#include <stdio.h>

void printMultiplesOfSeven() {
	int number;

	printf("Cac so nguyen co 2 chu so va la boi cua 7 la:\n");

	for (number = 14; number < 100; number += 7) {
		printf("%d ", number);
	}

	printf("\n");
}

int main() {
	printMultiplesOfSeven();

	return 0;
}