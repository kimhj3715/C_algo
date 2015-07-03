#include <stdio.h>
#include <string.h>

typedef struct _STUDENT {
	char name[20];
	int kor, eng, math;
} STUDENT;



int main() {
	
	STUDENT rec[50];

	int avg;

	// rec[0].name = "HyeonJae Kim";
	strcpy(rec[0].name, "HyeonJae Kim");
	rec[0].kor = 99;
	rec[0].eng = 100;
	rec[0].math = 100;

	avg = (rec[0].kor + rec[0].eng + rec[0].math) / 3;
	printf("%s\'s average score is %d. \n", rec[0].name, avg);


	return 0;
}