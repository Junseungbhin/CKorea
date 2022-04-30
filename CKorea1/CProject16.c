#include <stdio.h>
void main16() {
	//int age = -1;
	//scanf_s("%d", &age);
	//if (age >= 20) {
		// 조건이 맞으면 수행
	//	printf("성인입니다/ \n");
	//}else{
		// 조건이 틀리면 수행
		//printf("미성년자입니다.\n");
	//}

	//int value = 15;
	//if (value > 10) {
		//printf("value는 10보다 큰 수 입니다. \n");
	//}
	//else {
		//printf("value는 15보다 작은 수 입니다. \n");
	//}
	//printf("프로그램 종료");
	//int age = 21;
	//if(age >= 20) {
	//	printf("성인입니다.\n");
	//}
	//else {
	//	printf("미성년자입니다. \n");
	//}
	//printf("프로그램 종료\n");

	//int num;
	//printf("4자리 비밀번호를 입력하세요");
	//scanf_s("%d", &num);
	//if (num == 1579){
	//	printf("통과 \n");
	//}
	//else {
	//	printf("불통 \n");
	//}
	//int res;
	//printf("성적을 입력하세요>>");
	//scanf_s("%d", &res);
	//if (res >= 90) {
	//	printf("A \n");
	//}
	//if (80 <= res && res < 90) {
	//	printf("B \n");
	//}
	//if (70 <= res && res< 80) {
	//	printf("C \n");
	//}
	//if (60 <= res && res <70) {
	//	printf("D \n");
	//}
	//if (60 > res) {
	//	printf("F \n");
	//}
	int score = 0;
	char grade = 'F';
	scanf_s("%d", &score);

	if (score >= 90) {
		grade = 'A';
	}
	else if (score >= 80) {
		grade = 'B';
	}
	else if (score >= 70) {
		grade = 'C';
	}
	else if (score >= 60) {
		grade = 'D';
	}
	else{
		grade = 'F';
	}

	printf("등급은 %c입니다.", grade);
}
	
    
