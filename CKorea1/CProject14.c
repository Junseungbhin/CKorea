#include <stdio.h>

void main14() {
	// ���ڸ� 2�� �Է¹޾Ƽ� 
	// ���ϱ�, ����, ���ϱ�, ������, ������ ���ϱ�

	/*
	[�Է� ����]5, 5
	���ϱ� : 10
	���� : 0
	���ϱ� : 25
	������ : 1
	������ ���ϱ� : 0
	*/
	int num1, num2;
	printf("ù��° ���ڸ� �Է��ϼ���>>");
	scanf_s("%d",&num1);
	printf("�ι�° ���ڸ� �Է��ϼ���>>");
	scanf_s("%d",&num2);

	printf("���ϱ�: %d \n", num1+num2);
	printf("����: %d \n", num1 - num2);
	printf("���ϱ�: %d \n", num1 * num2);
	printf("������: %.1f \n", (float)num1 / num2);
	printf("���������ϱ�: %d \n", num1 % num2);

	return 0;

}