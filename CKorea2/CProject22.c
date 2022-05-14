#include <stdio.h>

void main22() {
	// 출력
	// 변수와 자료형
	// 입력
	// 연산자
	// 조건문
	// 반복문
	
	//출력
	printf("아무거나 막 입력 \n");
	printf("다음 문장 \n");

	//자료형 변수(저장공간);
	//변수 선언(공간 생성)
	int 소수점없는숫자정수;
	float 소수점있는숫자실수1;
	double 소수점있는숫자실수2;
	char 문자한개;
	char 문자여러개[64] = "아무거나 이렇게 입력해";			//%s

	//변수 대입(수학에서의 =과는 다르다!)
	소수점없는숫자정수 = 123123;			// %d
	소수점있는숫자실수1 = 3.14f;			// %f 
	소수점있는숫자실수2 = 3.14;			// %lf
	문자한개 = 'A';						//%c
	
	//변수 출력
	printf("%d", 소수점없는숫자정수);
	printf("\nfloat는 %f", 소수점있는숫자실수1);
	printf("\ndouble은 %lf", 소수점있는숫자실수2);
	printf("\nchar는 %c", 문자한개);
	printf("\nchar[64]는 %s", 문자여러개);
	
	//연산(+, -, x, ÷, %)
	double 결과1 = 소수점있는숫자실수1 + 소수점있는숫자실수2; 
	int 결과2 = 소수점없는숫자정수 - 소수점있는숫자실수1;
	long long 결과3 = 소수점없는숫자정수 * 소수점없는숫자정수;
	float 결과4 = 소수점없는숫자정수 / 소수점있는숫자실수1;
	int 결과5 = 소수점없는숫자정수 % 2;

	//변수 출력
	printf("더하기 결과: %f\n", 결과1);
	printf("빼기 결과 : % d\n", 결과2);
	printf("곱하기 결과: %d\n", 결과3);
	printf("나누기 결과: %f\n", 결과4);
	printf("2로 나눈 나머지: %d\n", 결과5);

	int num = 3;

	//조건문
	if (num < 10) {
		printf("num은 10보다 작다 \n");
	}
	else if (num == 10) {
		printf("num은 10이다 \n");
	}
	else {
		printf("num은 10보다 크거나 같다 \n");
	}

	// 퀴즈 : 변수하나 만들어서 양수인지 음수인지 판단하기
	// 퀴즈2 : 변수의 값이 홀수인지 짝수인지 판별하기(구글 검색: 2로 나눈 나머지가 1이면 홀수, 2로 나눈 나머지가 0이면 짝수이다.)

	int n1 = 5;

	if (n1 >= 0) {
		printf("n1은 양수이다.\n");
	}
	else if (n1 < 0) {
		printf("n1은 음수이다.\n");
	}


	int n2 = 8;

	if (n2 % 2 == 0) {
		printf("n2는 짝수이다.\n");
	}

	else if (n2 % 2 != 1) {
		printf("n2는 홀수이다.\n");
	}

	//조건문2
	//switch: 소괄호 안에 있는 값과 case 옆에 있는 값이 일치하면 해당 부분 실행
	switch ('B') {
	case 'A':
		printf("A 입니다");
	case 'B': 
		printf("B 입니다");
		break;
	case 'C':
		printf("C 입니다");
		break;
	default:
		printf("A도 B도 C도 아닙니다!");
	}

	//반복문 while, for
	// for(처음값; 조건; 증감량){반복할 문장; }
	for (int i = 1; i < 6; i++) {			//5번
		printf("\n%d번 Hello For", i);
	}
	//while(조건){ 조건이 맞으면 반복할 문장; }
	int flag = 0;
	while (flag < 5) {
		printf("\n %d번 Hello While", flag);
		flag++;
	}

	//반복문을 통해서 1~10 출력
	//1~10 출력 끝났으면 1~10 모두 더한 값도 출력(55)
	for (int i = 0; i < 10; i++) {
		printf("\n%d", i+1);
	}

	while (flag < 10) {
		printf("\n%d", flag + 1);
		flag++;
	}

	int i = 0, sum = 0;
	for (i = 1; i < 10; i++) {
		printf("%d\n", i + 1);
		sum = sum + i + 1;				// sum += i;
	}
	printf("%d \n", sum);
}

