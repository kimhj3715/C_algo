#include <stdio.h>

int main() {
	
	int a[4];
	int n = a;

	a[0] = 1;
	a[2] = 2;
	a[3] = 3;
	a[4] = 4;

	printf("%d\n", a[n]);

	return 0;
}