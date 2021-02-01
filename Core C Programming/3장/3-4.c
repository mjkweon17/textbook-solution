#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double force; //물체에 작용한 힘의 크기
	double displacement; //물체가 힘의 방향으로 이동한 거리
	double work; //일의 양

	printf("힘(N)? ");
	scanf("%lf", &force);
	printf("이동거리(m)? ");
	scanf("%lf", &displacement);

	work = force * displacement;
	printf("일의 양: %f", work);

	return 0;
}
