#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int max_num;
	int count;
	int sum = 0;
	int num = 0;

	printf("%s", "Input: ");
	scanf("%d", &max_num);
	count = max_num / 2;
	if(max_num % 2 == 0) {
		sum = 2;
		for(int i=0; i<count; i++) {
			num+=sum;
			sum+=2;
		}
	} else {
		sum = 1;
		for(int i=0; i<count+1; i++) {
			num+=sum;
			sum+=2;
		}
	}
	printf("%d\n", num);


	return 0;
}