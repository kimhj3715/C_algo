#include <stdio.h>

int main(int argc, char* argv[]) {

	int score;

	while (1) {
		printf("Give me a score:" );
		scanf("%d", &score);
		if(score <= 100 && score >= 1) {
			break;
		}
		printf("Invalid score, please type again.\n");
	}
	
	if(score < 60) {
		printf("F\n");
	} else if(score < 70) {
		printf("D\n");
	} else if(score < 80) {
		printf("C\n");
	} else if(score < 90) {
		printf("B\n");
	} else {
		printf("A\n");
	}
	//printf("%d\n", score);

	return 0;
}