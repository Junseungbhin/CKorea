//C��� �⺻����
#include <stdio.h>

void main() {
	// ���
	printf("hello world\n");

	// ���� (�������)
	//���� ����
	int var1;			//���������� ������� ����
	float var2;		//�Ҽ����ִ� ���������� ������� ����
	char var3;		//���������� ������� ����(1ĭ, 1byte)

	//����
	var1 = 33;
	var2 = 3.14;
	var3 = 'a';

	char var4[] = "hello world";		//���� �ʱ�ȭ

	// ������ ���
	printf("%d, %f, %c, %s", var1, var2, var3, var4);
}