#include <stdio.h>

void main9() {

	//출력 printf
	//입력 scanf_s

	int num1;
	float num2;

	printf("숫자를 입력하세요>>");
	scanf_s("%d", &num1);
	printf("num1에 들어간 값은 %d\n", num1);

	printf("실수를 입력하세요>>");
	scanf_s("%f", &num2);
	printf("num2에 들어간 값은 %f", num2);
    
}