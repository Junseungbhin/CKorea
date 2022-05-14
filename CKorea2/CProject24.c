#include <stdio.h>
// 함수: 코드를 저장하는 기술( 기능단위로 저장)
// 넘겨줄땐 ()
// 결과를 받을 땐 return
// 함수의 자료형은 return 값과 동일하게 (예측해서 정하거나 나중에 수정하거나)

int Print(int var) {
	printf("프린트 함수가 실행되었습니다.");

	return var - 100;
}

//Sum2 함수 인자는 2개, 리턴값은 두개를 더한 값으로 

int Sum2(int var1, int var2) {
	printf("%d\n", var1 + var2);

	return var1 + var2;
}


int main24 () {
	int result1 = Sum2(10, 20);
	printf("%d\n", result1);

	return 0;
}

