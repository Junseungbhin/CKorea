#include <stdio.h>

void main()
{
	//��� : ���ǹ�, �ݺ���
	//�ݺ�Ƚ���� �����ϱ� ���ؼ� �÷��װ� �ʿ�
	//int i = 0;
	//while (i < 5) {
	//	printf("�ȳ� \n");
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
	//printf("��ĥ ���ڸ� �Է��ϼ���>>");			//����ϱ�
	//scanf_s("%d", &num);					//�Է��ϱ�

	///*while (i <= num) {
	//	sum = sum + i;
	//i++;
	//}*/
	//for (int j = 1; j <= num; j++) {
	//	sum = sum + j;
	//}
	//printf("1~%d�� �հ�� %d \n", num, sum);

	//for���� ���ؼ� Hello World 5���ϱ�
	// break: �ݺ����� ����
	// continue: 1ȸ�� ���, �ؿ� �ִ� ������ �������� �ʰ� ���ǰ˻��ϴ� ������ �̵�

	//for (int i = 0; i < 10; i++) {
	//	if (i % 2 == 0) {
	//		continue;
	//	}
	//	printf("%d�� Hello World \n", i);
	//}	
	//int num = 1234;
	//for (int i = 0; i < 3; i++) {
	//	scanf_s("%d", &num);
	//	if (i > 3) {
	//		printf("�Է� Ƚ���� �ʰ��߽��ϴ�.");
	//		break;
	//	}
	//	else if (num == 1234) {
	//		printf("��й�ȣ�� ��ġ�մϴ�!");
	//		break;
	//	}
	//	else if (num != 1234) {
	//		printf("��й�ȣ�� ���� �ʽ��ϴ�. \n");
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
			printf("¦ \n", i);
			}
		else if (i % 2 == 0) {
			printf("%d \n", i);
		}
		}
	}

