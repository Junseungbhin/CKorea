#include <stdio.h>
void main6() {
	int bhin1;
	float bhin2;
	char bhin3;
	char bhin4[128] = "�ȳ��ϼ��� C���";

	bhin1 = 1;
	bhin2 = 3.14;
	bhin3 = 'a';

	printf("������ %d \n", bhin1);
	printf("�Ǽ��� %f \n", bhin2);
	printf("���ڴ� %c \n", bhin3);
	printf("���ڿ��� %s \n", bhin4);

	printf("%d, %f, %c %s\n", bhin1, bhin2, bhin3, bhin4);
}