#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check_time_str(char* time);

int main(void) {

	char time[100];

	while (1) {
		printf("�ð�(.�Է� �� ����)?");
		gets_s(time, sizeof(time));
		if (strcmp(time, ".") == 0) {
			break;
		}
		if (check_time_str(time)) {
			printf("%s�� ��ȿ�� �ð��Դϴ�.\n", time);
		}
		else {
			printf("�߸� �Է��߽��ϴ�. hhmmss�������� �Է��ϼ���.\n");
		}
	}

	return 0;
}

int check_time_str(char* time) {

	//�Է¹��� ���ڿ��� 6���ڷ� �̷���� �ִ��� Ȯ��
	if (strlen(time) != 6) {
		return 0;
	}

	//�Է¹��� ���ڿ��� ��� ���ڷ� �̷���� �ִ��� Ȯ��
	for (int i = 0; i < 6; i++) {
		if (isdigit(time[i]) == 0) {
			return 0;
		}
	}

	//�ð� �κ��� �´��� Ȯ��
	if (time[0] > '2') {
		return 0;
	}
	if (time[0] == '2') {
		if (time[1] > '3') {
			return 0;
		}
	}

	//��, �� �κ��� �´��� Ȯ��
	if (time[2] > '5' || time[4] > '5') {
		return 0;
	}

	return 1;
}