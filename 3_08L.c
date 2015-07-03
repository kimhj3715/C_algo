#include <stdio.h>
#include <string.h>

int main() {
	FILE* fp;
	int i = 1;
	char s[256];

	fp = fopen("abc.txt", "r");
	if(fp == NULL) {
		fprintf(stderr, "[error] opening a file.\n" );
		exit(1);
	}
	while(!feof(fp)) {
		fgets(s, 255, fp);
		printf("%04d:%s\n", i, s);
		i++;
	}

	return 0;
}
