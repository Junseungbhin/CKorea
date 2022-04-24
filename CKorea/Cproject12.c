#include <stdio.h>

void main() {
	// 조건연산자(삼향연산자)
	(3 > 1) ? printf("맞네") : printf("아니네");

	//1. 나이를 입력을 받아서 20이상이면 성인, 20미만이면 미성년자
	int age;
	printf("나이를 입력하세요>>");
	scanf_s("%d", &age);
	(age >= 20);
	printf("성인");
	(age > 20);
	printf("미성년자");
}