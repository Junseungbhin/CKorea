#include <stdio.h>

//���� ������ �����ϴ� �Լ�
void myPow(int* num) {
	//num == main�� pNum;
	*num = (*num) * (*num);
	//num = 3*3 
}

int main32() {
	//������ ����1���� ���� ��
	int num = 3;
	//num = 3*3(num * num)
	//������ ������ ��Ƽ� 
	int *pNum = &num;
	//�����ϴ� �Լ��� �Ѱ� ���
	myPow(pNum); //or &num
	//�������ؼ� printf
	printf("%d",num);
}

// �����Ҷ� * : ������ ���� ����
// ����Ҷ� * : ������
// & : �ּ��� ��