#include <stdio.h>

void main12() {
	// ���ǿ�����(���⿬����)
	//(3 > 1) ? printf("�³�") : printf("�ƴϳ�");

	//1. ���̸� �Է��� �޾Ƽ� 20�̻��̸� ����, 20�̸��̸� �̼�����
	int age, height;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	(age >= 20) ? printf("���̴� %d,����� %d", age, 1250) : printf("���̴� %d", "����� % d", age, 800);
	printf("\nŰ�� �Է��ϼ��� : ");
	scanf_s("%d", &height);
	(age >= 12 && height >= 120) ? printf("ž�� ����") : printf("ž�� �Ұ�");

}
