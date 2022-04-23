#include <stdio.h>

void main3() {
	//메모리(RAM): 컴퓨터가 정보를 저장하는 공간
	/*
	bit < byte < KByte < MByte < GByte < TByte
	정보를 저장할 수 있는 최소 단위 : bit
	1bit : 0 또는 1 (한글자)
	2bit : 00, 01, 10, 11 중 하나를 저장할 수 있음

	== 자료형 ==
	char : 1byte (-128~127)						:한글자
	short : 2byte (~3만 2천 ~ 3만 2천)
	int : 4byte (~21억 ~ 21억)					:소수점 없는 숫자(정수)
	long long : 8byte
	float : 4byte (-21억~21억)						:소수점 있는 숫자(실수)
	double : 8byte

	C언어 : 옛날 컴퓨터가 아주 성능이 나쁘고 용량이 작을 때 만들어진 언어

	== 변수 ==
	변수란 : 데이터를 저장할 수 있는 저장공간(프로그래밍), 변하는 수(수학)

	*/

	// 자료형 저장공간의 이름 = 저장할값;
	char var1 = 'b';					//1byte 공간에 a라는 문자를 저장
	int var2 = 57;                         // 4byte 공간에 3이라는 숫자를 저장            
	double var3 = 3.14;                //8byte 공간에 3.14라는 소숫점이 있는 숫자를 저장
	char var4[100] = "안녕하세요 반갑습니다.";            //1byte공간을 256개 연결
	printf("숫자는 %d!\n", var2);    
	printf("문자는 %c!\n", var1);
	printf("소수점 있는 숫자는 %f!\n", var3);
	printf("문자열은 %s! \n", var4);
	// 변수  : 저장공간
	// 자료형 변수명; 
	int num;					// 변수 선언(생성)     
	num = 5;               // 대입 (집어넣음)
	num = 8;
	num = 1;
	printf("%d", num);

	int num2 = 31111;		// 변수 선언 + 대입 :  초기화(초기값 설정)
}
