#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE* fp;
	char a[] = "Cats and dogs.", s[50];
	char b[] = "They are our friends.";

	fp = fopen("abc.txt", "w");
	if(fp == NULL) {
		exit(1);
	}
	fprintf(fp, "%s\n", a);
	fclose(fp);

	fp = fopen("abc.txt", "a");
	if(fp == NULL) {
		exit(1);
	}
	fprintf(fp, "%s", b);
	fclose(fp);

	

	fp = fopen("abc.txt", "r");
	if(fp == NULL) {
		exit(1);
	}

	while (!feof(fp)) {
		fgets(s, 50, fp);
		printf("%s\n", s);
	}
	fclose(fp);

	return 0;
}