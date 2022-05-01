#include <stdio.h>

void main()
{
	//제어문 : 조건문, 반복문
	//반복횟수를 지정하기 위해선 플래그가 필요
	//int i = 0;
	//while (i < 5) {
	//	printf("안녕 \n");
	//	i++;		//i = i+1;
	//}
	//int i = 0;
	//while (i < 100) {
	//	printf("%d \n", i + 1);
	//	i++;
	//}
	//int i = 0;
	//while (i < 5) {
	//	printf("Hello World \n");
	//	i++;
	//}
	//int i = 1;
	//int num;
	//int sum = 0;
	//printf("합칠 숫자를 입력하세요>>");			//출력하기
	//scanf_s("%d", &num);					//입력하기

	///*while (i <= num) {
	//	sum = sum + i;
	//i++;
	//}*/
	//for (int j = 1; j <= num; j++) {
	//	sum = sum + j;
	//}
	//printf("1~%d의 합계는 %d \n", num, sum);

	//for문을 통해서 Hello World 5번하기
	// break: 반복문을 끝냄
	// continue: 1회성 취소, 밑에 있는 문장을 실행하지 않고 조건검사하는 곳으로 이동

	//for (int i = 0; i < 10; i++) {
	//	if (i % 2 == 0) {
	//		continue;
	//	}
	//	printf("%d번 Hello World \n", i);
	//}	
	//int num = 1234;
	//for (int i = 0; i < 3; i++) {
	//	scanf_s("%d", &num);
	//	if (i > 3) {
	//		printf("입력 횟수를 초과했습니다.");
	//		break;
	//	}
	//	else if (num == 1234) {
	//		printf("비밀번호가 일치합니다!");
	//		break;
	//	}
	//	else if (num != 1234) {
	//		printf("비밀번호가 맞지 않습니다. \n");
	//		continue;
	//	}
	//}

	//for (int i = 0; i < 101; i++) {
	//	if (i % 2 == 0) {
	//		continue;
	//	}
	//	printf("%d \n", i);
	//}
	for (int i = 0; i <= 100; i++) {
		if (i % 2 != 0) {
			printf("짝 \n", i);
			}
		else if (i % 2 == 0) {
			printf("%d \n", i);
		}
		}
	}

