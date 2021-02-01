#include <stdio.h>

int main(void) {

	int count = 0;

	for (int i = 32; i <= 126; i++) {
		printf("%c ", i);
		count++;
		if (count == 24) {
			printf("\n");
			count = 0;
		}
	}

	return 0;
}