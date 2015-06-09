#include <stdio.h>
#include <string.h>

int main() {
	char a[20] = "abcd";
	char b[] = "efghijk";

	// fine the end of array a
	int i = 0;
	int j = 0;
	while(a[i]!='\0') {
		i++;
	} 
	while(b[j]!='\0') {
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';
	printf("%s\n", a);

	return 0;
}