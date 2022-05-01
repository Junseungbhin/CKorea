#include <stdio.h>

void main20()
{
	// 조건문 if~else if~else
	int age = 20;
	if (age > 19) {
		printf("나이는 %d이고 성인입니다. \n", age);
	}
	else if (age > 13) {
		printf("나이는 %d이고 청소년입니다. \n", age);
	}
	else {
		printf("나이는 %d이고 어린이입니다. \n", age);
	}
	
	// 조건문 switch~case~break
	switch (age / 10)
	{
	case 0:
		printf("");
		break;
	case 1:
		printf("10대 입니다. \n");
		break;
	case 2:
		printf("20대 입니다. \n");
		break;
	case 3:
		printf("30대 입니다. \n");
		break;
	default:
		printf("30대 초과입니다.");
		break;
	}
	
}