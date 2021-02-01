#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <limits.h>

int get_red(int);
int get_green(int);
int get_blue(int);

int main(void) {
int make_rgb(int, int, int);

	int rgb;
	printf("RGB 색상? ");
	scanf("%i", &rgb);
	printf("RGB %X의 보색: %06X", rgb,
		make_rgb(UCHAR_MAX - get_red(rgb), UCHAR_MAX - get_green(rgb), UCHAR_MAX - get_blue(rgb)));

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

int make_rgb(int red, int green, int blue) {
	int rgb = 0;
	rgb += blue;
	rgb += green << 8;
	rgb += red << 16;
	return rgb;
}