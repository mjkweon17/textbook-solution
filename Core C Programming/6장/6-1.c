#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_perimeter(int, int);

int main(void) {

	int width, height;

	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &height);

	printf("직사각형의 둘레: %d", get_perimeter(width, height));

	return 0;
}

int get_perimeter(int width, int height) {
	return width * height;
}