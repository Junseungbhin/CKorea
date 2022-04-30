#include <stdio.h>
void main17() {
	//int num = 15;
	//if (num < 10) {
	//	printf("한 자리 수 \n");
	//}
	//else if (num < 100) {
	//	printf("두 자리 수 \n");
	//}
	//else if (num < 1000) {
	//	printf("세 자리 수 \n");
	//}
	//else {
	//	printf("그 외 \n");
	//}

	int age;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("성인 \n");
	}
	else if (age >= 14) {
		printf("청소년 \n");
	}
	else {
		printf("어린이 \n");
	}
}

//	int year;
//	scanf_s("%d", & year);
//	if (year % 400 == 0) {
//		printf("%d년은 윤년입니다.\n", year);
//	}
//	else if (year % 4 == 0 && year % 100 != 0) {
//		printf("%d년은 윤년입니다.\n", year);
//	} 
//	else {
//		printf("%d년은 윤년이 아닙니다. \n", year);
//	}
//}