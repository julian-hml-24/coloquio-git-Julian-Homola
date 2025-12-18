#include <stdio.h>
// Calculadora Simple
// Version 1.0
int suma(int a, int b) {
	return a + b;
}
	int main() {
	int num1 = 10;
	int num2 = 5;
	printf("Suma: %d + %d = %d\n", num1, num2, suma(num1, num2));
	return 0;
}