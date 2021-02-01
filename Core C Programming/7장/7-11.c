#include <stdio.h>

int main(void) {

	int grade[5][5] = 
	{ {28,28,26,9}, {30,27,30,10}, {25,26,24,8},{18,22,22,5},{24,25,30,10} };
	double avgGrade[4] = { 0 };
	int sum = 0;

	for (int i = 0; i < sizeof(grade) / sizeof(grade[0]); i++) {	//학생들의 총점
		for (int j = 0; j < sizeof(grade[0]) / sizeof(grade[0][0]) - 1; j++) {
			grade[i][4] += grade[i][j];
		}
	}
	
	for (int i = 0; i < sizeof(avgGrade) / sizeof(avgGrade[0]); i++) {	//항목별 평균 점수
		sum = 0;
		for (int j = 0; j < sizeof(grade) / sizeof(grade[0]); j++) {
			sum += grade[j][i];
		}
		avgGrade[i] = sum / 5.0;
	}


	for (int i = 0; i < sizeof(grade) / sizeof(grade[0]); i++) {
		printf("학생    %d번:  ", i + 1);
		for (int j = 0; j < sizeof(grade[0]) / sizeof(grade[0][0]) - 1; j++) {
			printf("%2d    ", grade[i][j]);
		}
		printf(" ==> %2d\n", grade[i][4]);
	}

	printf("항목별 평균:  ");
	for (int i = 0; i < sizeof(avgGrade) / sizeof(avgGrade[0]); i++) {
		printf("%5.2f ", avgGrade[i]);
	}

	return 0;
}