#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_rect_info(int width, int height, int* perimeter, int* area);

int main(void) {

	int width;
	int height;
	int perimeter;
	int area;

	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &height);

	get_rect_info(width, height, &perimeter, &area);

	printf("넓이: %d, 둘레: %d", area, perimeter);

	return 0;
}

void get_rect_info(int width, int height, int* perimeter, int* area) {
	*perimeter = 2 * (width + height);
	*area = width * height;
}