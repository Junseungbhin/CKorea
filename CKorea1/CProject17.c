#include <stdio.h>
void main17() {
	//int num = 15;
	//if (num < 10) {
	//	printf("�� �ڸ� �� \n");
	//}
	//else if (num < 100) {
	//	printf("�� �ڸ� �� \n");
	//}
	//else if (num < 1000) {
	//	printf("�� �ڸ� �� \n");
	//}
	//else {
	//	printf("�� �� \n");
	//}

	int age;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("���� \n");
	}
	else if (age >= 14) {
		printf("û�ҳ� \n");
	}
	else {
		printf("��� \n");
	}
}

//	int year;
//	scanf_s("%d", & year);
//	if (year % 400 == 0) {
//		printf("%d���� �����Դϴ�.\n", year);
//	}
//	else if (year % 4 == 0 && year % 100 != 0) {
//		printf("%d���� �����Դϴ�.\n", year);
//	} 
//	else {
//		printf("%d���� ������ �ƴմϴ�. \n", year);
//	}
//}