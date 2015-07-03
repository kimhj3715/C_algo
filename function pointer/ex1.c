#include <stdio.h>
void add(double num1, double num2);

int main() {
	double x = 3.1, y = 5.1;
	void (*pointer) (double, double);

	printf("add function's memory address: %x\n", add);
	printf("function pointer's memory address: %x\n", &pointer);

	pointer = add;
	pointer(x,y);

	return 0;
}

void add(double num1, double num2) {
	double result;
	result = num1 + num2;
	printf("%lf + %lf = %lf\n", num1, num2, result);
}