#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x1, y1;
	int x2, y2;
	double slope;

	printf("한 점의 좌표 (x1, y1)? ");
	scanf("%d %d", &x1, &y1);
	printf("한 점의 좌표 (x2, y2)? ");
	scanf("%d %d", &x2, &y2);

	slope = (double)(y2 - y1) / (x2 - x1);
	printf("직선의 기울기: %f", slope);

	return 0;
}