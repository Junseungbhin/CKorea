// �Լ� : �ڵ带 �����ϴ� ��� (c���� �־����� �������� �� �� ���� ��갳���ڰ� ���� ���� ����Ѵ�.)
// ��ɴ����� ����
#include <stdio.h>

//Sum�̶�� �̸��� �Լ�
void Sum(int var1, int var2) {
	printf("%d\n", var1 + var2);
}

//Sub : �� ���� ����(ù��°�� - �ι�°��). ��ſ�, ������ ����� �ٲ㼭 ����.

//Div : ������ ����� ����� 0���� �������� 0�� ����ϰ� �����(���ڴ� 2��): �Ҽ����� ǥ�� �����ϰ�
void Sub(int var1, int var2) {
	if (var1, var2 >= 0) {
		printf("%d\n", var1 - var2);
	}
	else if (var1 >= 0 && var2 < 0) {
		printf("%d\n", var1 - (-var2));
	}
	else if (var1 < 0 && var2 >= 0) {
		printf("%d\n", -var1 - var2);
	}
	else if (var1 < 0 && var2 < 0) {
		printf("%d\n", -var1 - (-var2));
	}

}

void Div(double var1, double var2) {
	if (var1, var2 > 0) {
		printf("%f\n", var1 / var2);
	}
	else if (var1 > 0 && var2 == 0) {
		printf("%lf\n", var2);
	}
	else {
		printf("%f\n", var1 / var2);
	} 
}





//main�̶�� �̸��� �Լ�
void main23() {
	Sum(1, 2, 3);
	Sum(10, 20, 30);
	Sum(100, 200, 300);

	Sub(-10, -5);		//5
	Div(7, 0);		//2
}


