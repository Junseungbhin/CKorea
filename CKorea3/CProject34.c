#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 2

//�Լ� : �ڵ带 �����ϴ� ���(��ɴ����� ����)
int information(int num) {
	if (num == 1) {
		printf("1���� �����ϼ̽��ϴ�.\n");
		return 1;
		printf("�����ڵ�\n");
	}
	else if (num == 2) {
		printf("2���� �����ϼ̽��ϴ�.\n");
		return 2;
		printf("�����ڵ�\n");
	}
	else {
		printf("�߸��Է��ϼ̽��ϴ�.\n");
		return -1;
		printf("�����ڵ�\n");
	}
	return 0;
	printf("�����ڵ�\n");
	printf("�����ڵ�\n");
}

int main34() {
	int num = 0;
	scanf("%d", &num);
	num = information(num);
	printf("%d\n", num);

	return 0;
}