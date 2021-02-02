#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_phone_str(char* num);

int main(void) {

	char phone[100];

	while (1) {
		printf("��ȭ��ȣ(.�Է� �� ����)? ");
		gets_s(phone, sizeof(phone));

		if (strcmp(phone, ".") == 0) {
			return 0;
		}

		if (check_phone_str(phone)) {
			printf("%s�� ��ȿ�� ��ȭ��ȣ�Դϴ�.\n", phone);
		}
		else {
			printf("�߸� �Է��߽��ϴ�. 01012345678 �������� �Է��ϼ���.\n");
		}
	}

	return 0;
}

int check_phone_str(char* num) {

	//��ȭ��ȣ�� 11���� ���ڷ� �̷���� �ִ��� Ȯ��
	if (strlen(num) != 11) {
		return 0;
	}

	//��ȭ��ȣ�� ���� ���ڷ� �̷���� �ִ��� Ȯ��
	for (int i = 0; i < 11; i++) {
		if (isdigit(num[i]) == 0)
			return 0;
	}

	//��ȭ��ȣ�� ù ���ڰ� 010���� Ȯ��
	if (num[0] != '0' || num[1] != '1' || num[2] != '0') {
		return 0;
	}

	return 1;
}