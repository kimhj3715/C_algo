#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int coin;
	int input;

	srand(time(NULL));	// to make a random number each time
	
	while(1) {
		coin = rand()%2+1;
		printf("Throw the coin 1 or 2 (quit: 0): ");
		scanf("%d", &input);

		if(input == 0) {
			printf("exiting...\n");
			break;
		} else if (input == 1 || input == 2) {
			printf("%s\n", (input == coin)? "Right!" : "Wrong!");
		} else {
			printf("try again...\n");
		}
	}
	return 0;
}