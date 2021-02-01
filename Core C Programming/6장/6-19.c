#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int num, int scale);

int main(void) {

	int num;
	int scale = 100;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 3; i++) {
		num = rand() % 10000;
		graph(num, scale);
	}

	return 0;
}

void graph(int num, int scale) {
	if (num == 0) {
		printf("0: \n");
		return;
	}

	printf("%d: ", num);
	for (int i = 1; i <= num; i++) {
		if (i % scale == 0)
			printf("*");
	}
	printf("\n");
}