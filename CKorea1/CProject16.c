#include <stdio.h>
void main16() {
	//int age = -1;
	//scanf_s("%d", &age);
	//if (age >= 20) {
		// ������ ������ ����
	//	printf("�����Դϴ�/ \n");
	//}else{
		// ������ Ʋ���� ����
		//printf("�̼������Դϴ�.\n");
	//}

	//int value = 15;
	//if (value > 10) {
		//printf("value�� 10���� ū �� �Դϴ�. \n");
	//}
	//else {
		//printf("value�� 15���� ���� �� �Դϴ�. \n");
	//}
	//printf("���α׷� ����");
	//int age = 21;
	//if(age >= 20) {
	//	printf("�����Դϴ�.\n");
	//}
	//else {
	//	printf("�̼������Դϴ�. \n");
	//}
	//printf("���α׷� ����\n");

	//int num;
	//printf("4�ڸ� ��й�ȣ�� �Է��ϼ���");
	//scanf_s("%d", &num);
	//if (num == 1579){
	//	printf("��� \n");
	//}
	//else {
	//	printf("���� \n");
	//}
	//int res;
	//printf("������ �Է��ϼ���>>");
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

	printf("����� %c�Դϴ�.", grade);
}
	
    
