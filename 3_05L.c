#include <stdio.h>
#include <string.h>

int main() {
	int a[] = {4, 5, 2, 3};
	int n = sizeof(a)/sizeof(a[0]);

	for(int i=0; i<n; i++) {
		printf("a[%d] = %d|", i, a[i]);
		for(int j=0; j<a[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}