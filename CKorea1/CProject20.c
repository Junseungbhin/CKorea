#include <stdio.h>

void main20()
{
	// ���ǹ� if~else if~else
	int age = 20;
	if (age > 19) {
		printf("���̴� %d�̰� �����Դϴ�. \n", age);
	}
	else if (age > 13) {
		printf("���̴� %d�̰� û�ҳ��Դϴ�. \n", age);
	}
	else {
		printf("���̴� %d�̰� ����Դϴ�. \n", age);
	}
	
	// ���ǹ� switch~case~break
	switch (age / 10)
	{
	case 0:
		printf("");
		break;
	case 1:
		printf("10�� �Դϴ�. \n");
		break;
	case 2:
		printf("20�� �Դϴ�. \n");
		break;
	case 3:
		printf("30�� �Դϴ�. \n");
		break;
	default:
		printf("30�� �ʰ��Դϴ�.");
		break;
	}
	
}