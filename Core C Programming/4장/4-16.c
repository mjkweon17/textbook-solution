#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int red, green, blue;
	int RGB = 0;

	printf("red? ");
	scanf("%d", &red);
	printf("green? ");
	scanf("%d", &green);
	printf("blue? ");
	scanf("%d", &blue);

	RGB += (unsigned char)blue;
	RGB <<= 8;
	RGB += (unsigned char)green;
	RGB <<= 8;
	RGB += (unsigned char)red;

	printf("RGB 트루컬러: %06X", RGB);

	return 0;
}