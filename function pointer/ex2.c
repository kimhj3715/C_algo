#include <stdio.h>
void add (int num1, int num2);
void sub (int num1, int num2);

int main() {
	int x, z;
	char c;
	void (*pointer) (int, int);

	printf("add function's memory address: %x\n", add);
	printf("sub function's memory address: %x\n", sub);
	printf("INPUT: ");

	scanf("%d %c %d", &x, &c, &z);

	if(c=='+') {
		pointer = add;
	} else if(c=='-') {
		pointer = sub;
	} else {
		printf("Put + or - !\n");
	}

	pointer(x, z);

	return 0;
}

void add(int num1, int num2) {
	int result;
	result = num1 + num2;
	
}