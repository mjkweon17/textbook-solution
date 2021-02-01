#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int width;
	int height;

	printf("가로의 길이? ");
	scanf("%d", &width);
	prtinf("세로의 길이? ");
	scanf("%d", &height);
	printf("직사각형의 넓이: %d\n", width * height);
	printf("직사각형의 둘레: %d", 2 * (width + height));

	return 0;
}