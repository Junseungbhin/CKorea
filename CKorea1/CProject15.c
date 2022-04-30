#include <stdio.h>

void main15()
{
	int age = -1;
	scanf_s("%d", &age);
	if (age >= 20) {
		printf("성인입니다/ \n");
	}
	if (age >= 0 && age < 20) {
		printf("미성년자입니다.\n");
	}
	if (age < 0 || age > 200) {
		printf("? \n");
	}
}