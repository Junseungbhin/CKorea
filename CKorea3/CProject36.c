#include <stdio.h>

//����ü Person(�̸�, ����, Ű, ������)

typedef struct Person {
	char name[64];
	int age;
	float height;
	float weight;
	} p;

int main36() {
	//����ü ���� 3��(��ö��, ��¯��, ȫ�浿)
	struct Person ��ö�� = { "��ö��", 20, 170.5, 65.6 };
	p ��¯�� = { "��¯��", 20, 174.2, 66.7 };
	p ȫ�浿 = { "ȫ�浿", 25, 180.2, 77.7 };
	p �����[30] = { {"��ö��1", 20, 170.5, 65.6}, {"��ö��2", 20, 170.5, 65.6} };

	//���� ���
	//��ö��,20��,170.5cm, 65.6kg,
	prinf("%s, %d��, %1fcm, %1fkg", ��ö��.name, ��ö��.age, ��ö��.height, ��ö��.weight);
	prinf("%s, %d��, %1fcm, %1fkg", ��¯��.name, ��¯��.age, ��¯��.height, ��¯��.weight);
	prinf("%s, %d��, %1fcm, %1fkg", ȫ�浿.name, ȫ�浿.age, ȫ�浿.height, ȫ�浿.weight);

	return 0;
}