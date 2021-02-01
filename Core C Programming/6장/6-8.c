#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int get_red(int);
int get_green(int);
int get_blue(int);

int main(void) {

	int rgb;

	printf("RGB »ö»ó? ");
	scanf("%i", &rgb);

	printf("RGB %xÀÇ red: %d, green: %d, blue: %d", rgb, get_red(rgb), get_green(rgb), get_blue(rgb));

	return 0;
}

int get_red(int rgb) {
	return rgb / (int)pow(16, 4);
}

int get_green(int rgb) {
	return rgb % (int)pow(16, 4) / (int)pow(16, 2);
}

int get_blue(int rgb) {
	return rgb % (int)pow(16, 2);
}