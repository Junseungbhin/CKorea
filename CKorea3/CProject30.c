#include <stdio.h>

int A(int num) {
	num++;			//num = num + 1;	num += 1;

	return 0;
}

int B(int *num) {		//������(�ּҸ� ����Ű��)
	(*num)++;
	return 0;
}

int main30() {
	int num = 3;
	A(num);
	printf("%d\n", num);
	B(&num);
	printf("%d\n", num);


	int *pNum;		//�����ͺ��� ����
	pNum = &num;	//�ּ�����(�ּ� ����)
	*pNum;		//������


	printf("������ �ּ�: %p\n", &num);
	printf("������ ��: %d\n", num);

	printf("������ ������ ��: %p\n", pNum);
	printf("������: %d\n", *pNum);

	return 0;
}

//1. ���� ����(������ �����)
//2. ������ ������ ����� ������ �ּҸ� ��´�
//3. ����� ���� �������� ����Ѵ�.
//������ ������ �����Ϸ��� ������ ���� ����ÿ� ���� �տ� *�� ���´�
//�������� �Ϸ��� �����տ� *�� ���´�. (���� ���ÿ� �տ� *����)
//������ �ּҴ� �����տ� &�� ������ �ȴ�.