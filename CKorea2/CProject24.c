#include <stdio.h>
// �Լ�: �ڵ带 �����ϴ� ���( ��ɴ����� ����)
// �Ѱ��ٶ� ()
// ����� ���� �� return
// �Լ��� �ڷ����� return ���� �����ϰ� (�����ؼ� ���ϰų� ���߿� �����ϰų�)

int Print(int var) {
	printf("����Ʈ �Լ��� ����Ǿ����ϴ�.");

	return var - 100;
}

//Sum2 �Լ� ���ڴ� 2��, ���ϰ��� �ΰ��� ���� ������ 

int Sum2(int var1, int var2) {
	printf("%d\n", var1 + var2);

	return var1 + var2;
}


int main24 () {
	int result1 = Sum2(10, 20);
	printf("%d\n", result1);

	return 0;
}

