#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//����ü
//ī���[], �޴���ȣ[], �޴�[], ����[]
typedef struct Starbucks {
	int menu_num[4];
	char* cafe_name;
	char menu_name[4][64];
	int menu_price[4];
} SB;

//�Լ� (�޴��ֹ�: ��ȣ�� �Է¹޾Ƽ�, �޴��̸��� ������ ���)
void MenuOrder(SB* cafe);
//�Լ� (�޴� ���� ����: ������ �ٲٰ����ϴ� �޴��� ��ȣ�� �Է¹޾� ������ �Է��Ͽ� ����)
void MenuModify(SB* cafe);

int main() {
	//ī��
	struct Starbucks ������ = { {1,2,3,4}, "��Ÿ���� ������",{"�Ƹ޸�ī��", "ī���", "����ٳ���", "�ɸ�����"}, {1500, 2000, 3000, 4000} };
	SB ��õ�� = { {1,2,3,4}, "��Ÿ���� ��õ��", {"�Ƹ޸�ī��", "ī���", "����ٳ���", "�ɸ�����"}, {2500, 3800, 4200, 5100} };
	struct Starbucks �־��� = { {1,2,3,4}, "��Ÿ���� �־���",{"�Ƹ޸�ī��", "ī���", "����ٳ���", "�ɸ�����"}, {3500, 3300, 4400, 5300} };
	
	//������
	//�޴��ֹ��Լ�
	MenuOrder(&������);
	//�񱳴� ==�� (1 == 1)
	//���࿹�� : ��Ÿ���� ���������� �Ƹ޸�ī�븦 1500�� �ֹ��߽��ϴ�.
	MenuOrder(&������);
	MenuModify(&�־���);
	MenuOrder(&�־���);

	return 0;
}

void MenuOrder(SB* cafe) 
{
	int num = 0;
	printf("�ֹ��� �޴��� ��ȣ�� �Է��ϼ���>>");
	scanf_s("%d", &num);
	printf("%s���� %s�� %d���� �ֹ��߽��ϴ�.", cafe->cafe_name, (*cafe).menu_name[num - 1], (*cafe).menu_price[num -1]);
}

void MenuModify(SB* cafe) 
{
	int num = 0;
	int price = 0;
	printf("������ �޴��� ��ȣ�� �Է��ϼ���>>");
	scanf_s("%d", &num);
	printf("������ �Է��ϼ���>>");
	scanf_s("%d", &price);

	(*cafe).menu_price[num-1] = price;
	//cafe -> menu_price[num-1] = price;

}