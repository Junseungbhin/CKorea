#include <stdio.h>
void main6() {
	int bhin1;
	float bhin2;
	char bhin3;
	char bhin4[128] = "안녕하세요 C언어";

	bhin1 = 1;
	bhin2 = 3.14;
	bhin3 = 'a';

	printf("정수는 %d \n", bhin1);
	printf("실수는 %f \n", bhin2);
	printf("문자는 %c \n", bhin3);
	printf("문자열은 %s \n", bhin4);

	printf("%d, %f, %c %s\n", bhin1, bhin2, bhin3, bhin4);
}