#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	char name[20];
	double grade;

	printf("이름? ");
	scanf("%s", name);
	printf("학점? ");
	scanf("%lf", &grade);

	printf("%s의 학점은 %f입니다.", name, grade);

	return 0;
}