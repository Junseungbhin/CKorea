//C언어 기본포맷
#include <stdio.h>

void main13() {
	// 출력
	printf("hello world\n");

	// 변수 (저장공간)
	//변수 선언
	int var1;			//숫자형태의 저장공간 만듦
	float var2;		//소수점있는 숫자형태의 저장공간 만듦
	char var3;		//문자형태의 저장공간 만듦(1칸, 1byte)

	//대입
	var1 = 33;
	var2 = 3.14;
	var3 = 'a';

	char var4[255] = "hello world";		//변수 초기화

	// 변수의 출력
	printf("%d, %f, %c, %s \n", var1, var2, var3, var4);

	// 입력
	scanf_s("%d", &var1);
	printf("%d \n", var1);

	scanf_s("%s", &var4, 255);		//문자열은 총 길이까지 적어주기!
	printf("%s \n", var4);
}