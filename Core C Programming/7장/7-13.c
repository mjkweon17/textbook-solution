#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 16

int main(void) {

	unsigned char img[2][SIZE];
	unsigned char img3[SIZE];

	srand((unsigned int)time(NULL));

	for (int i = 0; i < sizeof(img) / sizeof(img[0]); i++) {
		for (int j = 0; j < SIZE; j++) {
			img[i][j] = rand() % 256;
		}
	}

	for (int i = 0; i < SIZE; i++) {
		img3[i] = img[0][i] | img[1][i];
	}

	for (int i = 0; i < sizeof(img) / sizeof(img[0]); i++) {
		printf("image%d:  ", i + 1);
		for (int j = 0; j < SIZE; j++) {
			printf("%2X ", img[i][j]);
		}
		printf("\n");
	}

	printf("image3:  ");
	for (int i = 0; i < sizeof(img3) / sizeof(img3[0]); i++) {
		printf("%2X ", img3[i]);
	}
	printf("\n");

	return 0;
}