#include <stdio.h>

void main() {
	// ���ǿ�����(���⿬����)
	(3 > 1) ? printf("�³�") : printf("�ƴϳ�");

	//1. ���̸� �Է��� �޾Ƽ� 20�̻��̸� ����, 20�̸��̸� �̼�����
	int age;
	printf("���̸� �Է��ϼ���>>");
	scanf_s("%d", &age);
	(age >= 20);
	printf("����");
	(age > 20);
	printf("�̼�����");
}