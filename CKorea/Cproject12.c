#include <stdio.h>

void main12() {
	// 조건연산자(삼향연산자)
	//(3 > 1) ? printf("맞네") : printf("아니네");

	//1. 나이를 입력을 받아서 20이상이면 성인, 20미만이면 미성년자
	int age, height;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);
	(age >= 20) ? printf("나이는 %d,요금은 %d", age, 1250) : printf("나이는 %d", "요금은 % d", age, 800);
	printf("\n키를 입력하세요 : ");
	scanf_s("%d", &height);
	(age >= 12 && height >= 120) ? printf("탑승 가능") : printf("탑승 불가");

}
