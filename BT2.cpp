#include <stdio.h>
#include <math.h>

int isPerfectSquare(int number) {
	int squareRoot = sqrt(number);
	return (squareRoot * squareRoot == number);
}

void printPerfectSquares(int n) {
	printf("Cac so chinh phuong nho hon %d la:\n", n);

	for (int i = n - 1; i > 0; i--) {
		if (isPerfectSquare(i)) {
			printf("%d ", i);
		}
	}

	printf("\n");
}

int main() {
	int n;

	printf("Nhap mot so nguyen duong n: ");
	scanf("%d", &n);

	printPerfectSquares(n);

	return 0;
}