#include <stdio.h>

//받은 정수를 제곱하는 함수
void myPow(int* num) {
	//num == main의 pNum;
	*num = (*num) * (*num);
	//num = 3*3 
}

int main32() {
	//정수형 변수1개를 만든 후
	int num = 3;
	//num = 3*3(num * num)
	//포인터 변수에 담아서 
	int *pNum = &num;
	//제곱하는 함수에 넘겨 사용
	myPow(pNum); //or &num
	//역참조해서 printf
	printf("%d",num);
}

// 선언할때 * : 포인터 변수 선언
// 사용할때 * : 역참조
// & : 주소의 값