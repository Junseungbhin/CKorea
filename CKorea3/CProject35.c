#include <stdio.h>

//����ü: ������ ����ü(�ϳ��� ��ü�� ���� ���õ� �������� ��Ƴ�)
//ĳ���� ���� ����ü
struct character {
	char* name;
	int health;
	int damage;
};

typedef struct monster {
	char name[30];
	int health;
	int damage;
	char item[64];
} mon;


int main35() {
	//����(��)�� ĳ������
	char* name1, * name2;		//�̸�
	int health1, health2;		//ü��		
	int damage1, damage2;		//���ݷ�

	char* name[500];		//�̸��迭
	int health[500];		//ü�¹迭			
	int damage[500];		//���ݷ� �迭


	struct character �����;
	struct character ��������;
	struct character ���ٳ� = { "���ٳ�", 700, 65 };

	mon ���������� = { "����������", 5000, 100, "��ȯ" };
	mon ȭ���巡�� = { "ȭ���巡��", 5500, 150, NULL};

	�����.name = "�����";
	�����.health = 600;
	�����.damage = 60;

	��������.name = "��������";
	��������.health = 700;
	��������.damage = 70;


#define ĳ������ 2
	//ĳ�� ��� ���
	printf("ĳ����: %s, ü��: %d, ���ݷ�: %d\n", �����.name, �����.health, �����.damage);
	printf("ĳ����: %s, ü��: %d, ���ݷ�: %d\n, ������ %s\n", ����������.name, ����������.health, ����������.damage, ����������.item);
}