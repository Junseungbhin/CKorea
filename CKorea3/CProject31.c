#include <stdio.h>

void Swap(int *num1, int *num2) {		//선언할때 앞에 * 붙이기
	int num3 = *num2;		//포인터변수 사용하려면 앞에 * 붙이기
	*num2 = *num1;		//num2 = 10
	*num1 = num3;		//num1 = 20

}
void Swap(int num1)
{
	return num1;
}


int main31() {
	int num1 = 10;
	int num2 = 20;
	int num3 = Swap2(num1, num2);
	int num4 = Swap2(num2, num1);
	num1 = num4;
	num2 = num3;
	//변수의 주소 == &변수
	//Swap(&num1, &num2);

	printf("num1 : %d\n", num1);		//20
	printf("num2: %d\n", num2);		//10

	return 0;
}