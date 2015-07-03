#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int checkResult(int rsp, int user);


int main() {
	int rsp = 0;
	int user = 0;
	int result = 0;
	
	int draw = 0;
	int comp = 0;
	int usr = 0;


	for (int i=0; i<5; i++) {
		srand(time(NULL));	// to make a random number each time
		rsp = rand()%3+1;

		printf("%s", "Scissors 1, Rock 2, Paper 3:");
		scanf("%d", &user);

		result = checkResult(rsp, user);

		if (result == 0) {
			printf("%s\n", "draw");
			draw++;
		} else if (result == 1) {
			printf("%s\n", "computer");
			comp++;
		} else {
			printf("%s\n", "user");
			usr++;
		}
	}

	printf("computer: %d user: %d draw: %d\n", comp, usr, draw );

	return 0;
}

int checkResult(int rsp, int user) {
	int winner = 0;

	if (rsp == user) {
		return winner;
	}
	if (rsp == 3 && user == 1) {
		winner = 2;
		return winner;
	}
	if (user == 3 && rsp == 1) {
		winner = 1;
		return winner;
	}

	if (user > rsp) {
		winner = 2;
	} else if (user < rsp) {
		winner = 1;
	}



	return winner; // draw 0, computer win 1, user win 2
}