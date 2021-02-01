#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int random(int start, int end);

int main(void) {

	int sum = 0;
	int start = 0;
	int end = 99;
	int num = 10; //개수
	int temp; //랜덤으로 생성한 수 보관

	srand((unsigned int)time(NULL));

	printf("%d~%d 사이의 임의의 정수를 %d개 생성해서 합계를 구합니다.", start, end, num);
	for (int i = 0; i < num; i++) {
		temp = random(start, end);
		printf("%d  ", temp);
		sum += temp;
	}
	printf("\n합계: %d", sum);

	return 0;
}

int random(int start, int end) {
	return rand() % 100;
}