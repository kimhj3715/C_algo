#include <stdio.h>
#include <string.h>

int main() {
	char a[] = "DOG";
	char b[4];
	int i = 0;
	int n = strlen(a);
	printf("%d\n", n);


	for (i=n-1; i>=0; i--) {
		b[n-1-i] = a[i];
	}
	b[i] = '\0';
	printf("%s\n", b);
	

	/*
	int i = sizeof(a) - 2;
	int j = 0;
	while(a[i]!='\0') {
		b[j] = a[i];
		i--;
		j++;
	}
	b[j] = '\0';
	printf("%s\n", b);
	*/
	return 0;
}