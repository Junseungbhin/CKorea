#include <stdio.h>

void main() {
	// 1.
	// 국어, 수학, 영어: 입력을 받아서 
	// 총점과 평균
	/*
	<결과 예시>
	총점: 300
	평균: 100.0
	*/
	int 국어, 수학, 영어, 총점;
	float 평균;
	printf("국어 점수 입력>>");
	scanf_s("%d", &국어);
	printf("수학 점수 입력>>");
	scanf_s("%d", &수학);
	printf("영어 점수 입력>>");
	scanf_s("%d", &영어);

	총점 = 국어 + 수학 + 영어;
	평균 = 총점 / 3.0;

	printf("총점: %d\n평균: %.1f\n\n", 총점, 평균);

	// 2.
	// 숫자1, 숫자2 : 입력받아서
	// 더하기, 빼기, 곱하기, 나누기
	/*
	<결과 예시>
	// n1 + n2 =5
	// n1 - n2 = -2
	// n1 * n2 = 30
	// n1 / n2 = 3.3333
	// n1 % n2 = 1
	*/


	int n1, n2;
	printf("첫번째 숫자 입력>>");
	scanf_s("%d", &n1);
	printf("두번째 숫자 입력>>");
	scanf_s("%d", &n2);
	printf("n1 + n2 = %d\n", n1+n2);
	printf("n1 - n2 = %d\n", n1 - n2);
	printf("n1 * n2 = %d\n", n1 * n2);
	printf("n1 / n2 = %d\n", n1 / n2);
	printf("%d\n", n1 % n2);
	
}