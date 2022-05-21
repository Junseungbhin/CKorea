#include <stdio.h>
#include "CProject29.h"

//복습: 함수, 배열, 포인터

//함수 
/*
// 함수 만드는 방법(함수 정의)
자료형 함수이름(변수1선언, 변수2선언){

	return 자료형에 맞는값;
}
*/


int main29() {
	//함수 사용
	
	num = Mul(3, 5);
	printf("곱하기 결과는: %d\n", num);

	Print();		//Print함수를 사용

	
	div_result = Div(10.0f, 5.0f);
	printf("나누기 1 결과는 :%.2f\n", div_result);
	div_result = Div(5,0);
	printf("나누기2 결과는 : %.2f\n", div_result);

	int cal_result = Calc(3);		//26
		printf("계산한 결과는 : %d\n", cal_result);

	return 0;
}

//숫자2개를 전달받아서 곱하기해주는 함수 정의(만든다)
int Mul(int num1, int num2) {
	int result = num1 * num2;

	return result;
}

void Print() {
	printf("print함수를 사용하셨습니다.\n");

	
}

//실수 2개를 전달을 받아서 첫번째숫자/두번째숫자를 계산하고 돌려줌(리턴)
float Div(float num1, float num2) 
{	
	float result = 0.0f;
	if (num2 != 0.0f) {
		result = num1 / num2;
	}
	else {
		printf("0으로는 나눌 수 없습니다. \n");
	}

	return result;
}

int Calc(int num)
{
	// x^2 + 2x + 11;
	int result = 0;
	result = num * num + 2 * num + 11;

	return result;
}