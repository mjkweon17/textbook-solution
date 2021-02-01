#include <stdio.h>

int main(void) {
	
	double arr[3] = { 0 };
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("x[%d]ÀÇ ÁÖ¼Ò: %p\n", i, arr + i);
	}

	return 0;
}