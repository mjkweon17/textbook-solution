#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int hamburger, fries, cola;
	int set;

	printf("[햄버거 4000원, 감자튀김 2000원, 콜라 1500원, 세트 6500원\n");
	printf("햄버거 개수? ");
	scanf("%d", &hamburger);
	printf("감자튀김 개수? ");
	scanf("%d", &fries);
	printf("콜라 개수? ");
	scanf("%d", &cola);

	if (hamburger > 0 && fries > 0 && cola > 0) {
		if (hamburger <= fries && hamburger <= cola) {
			set = hamburger;
			hamburger -= set;
			fries -= set;
			cola -= set;
		}
		else if (fries <= hamburger && fries <= cola) {
			set = fries;
			hamburger -= set;
			fries -= set;
			cola -= set;
		}
		else {
			set = cola;
			hamburger -= set;
			fries -= set;
			cola -= set;
		}
	}

	printf("상품명   단가  수량  금액\n");
	printf("세트     6500   %2d   %5d\n", set, set * 6500);
	printf("햄버거   4000   %2d   %5d\n", hamburger, hamburger * 4000);
	printf("감자튀김 2000   %2d   %5d\n", fries, fries * 2000);
	printf("콜라     1500   %2d   %5d\n", cola, cola * 1500);
	printf("---------------------------\n");
	printf("합계                  %5d", set * 6500 + hamburger * 4000 + fries * 2000 + cola * 1500);

	return 0;
}