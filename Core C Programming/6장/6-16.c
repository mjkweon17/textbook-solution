#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_bit_set(int num, int pos);

int main(void) {

	int num;
	int count = 0;

	printf("Á¤¼ö? ");
	scanf("%i", &num);

	printf("%d: ", num);
	for (int i = 31; i >= 0; i--) {
		printf("%d", is_bit_set(num, i));
		count++;
		if (count == 4) {
			printf(" ");
			count = 0;
		}
	}

	return 0;
}

int is_bit_set(int num, int pos) {
	if (num & (1 << pos)) {
		return 1;
	}
	return 0;
}