#include <stdio.h>

void main14() {
	// 숫자를 2개 입력받아서 
	// 더하기, 빼기, 곱하기, 나누기, 나머지 구하기

	/*
	[입력 예시]5, 5
	더하기 : 10
	빼기 : 0
	곱하기 : 25
	나누기 : 1
	나머지 구하기 : 0
	*/
	int num1, num2;
	printf("첫번째 숫자를 입력하세요>>");
	scanf_s("%d",&num1);
	printf("두번째 숫자를 입력하세요>>");
	scanf_s("%d",&num2);

	printf("더하기: %d \n", num1+num2);
	printf("빼기: %d \n", num1 - num2);
	printf("곱하기: %d \n", num1 * num2);
	printf("나누기: %.1f \n", (float)num1 / num2);
	printf("나머지구하기: %d \n", num1 % num2);

	return 0;

}