#include <stdio.h>

void main() {
	// 1.
	// ����, ����, ����: �Է��� �޾Ƽ� 
	// ������ ���
	/*
	<��� ����>
	����: 300
	���: 100.0
	*/

	// 2.
	// ����1, ����2 : �Է¹޾Ƽ�
	// ���ϱ�, ����, ���ϱ�, ������
	/*
	<��� ����>
	// n1 + n2 =5
	// n1 - n2 = -2
	// n1 * n2 = 30
	// n1 / n2 = 3.3333
	// n1 % n2 = 1
	*/
	int ���� = 100, ���� = 100, ���� = 100;
	int ���� = ���� + ���� + ����;
	int �հ� = ���� / 3;
	
	printf("����: %d\n���: %d", ����, �հ�);

	int n1 = 3, n2 = 2;

	int a = n1 + n2;
	int b = n1 - n2;
	int c = n1 * n2;
	float d = n1 / n2;
	int e = n1 * n2;
	printf("\nn1 + n2 = %d",a);
	
}