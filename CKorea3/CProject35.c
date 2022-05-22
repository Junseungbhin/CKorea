#include <stdio.h>

//구조체: 변수의 집합체(하나의 주체를 갖고 관련된 변수들을 담아놈)
//캐릭터 정보 구조체
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
	//게임(롤)의 캐릭정보
	char* name1, * name2;		//이름
	int health1, health2;		//체력		
	int damage1, damage2;		//공격력

	char* name[500];		//이름배열
	int health[500];		//체력배열			
	int damage[500];		//공격력 배열


	struct character 이즈리얼;
	struct character 마스터이;
	struct character 쉬바나 = { "쉬바나", 700, 65 };

	mon 협곡의전령 = { "협곡의전령", 5000, 100, "소환" };
	mon 화염드래곤 = { "화염드래곤", 5500, 150, NULL};

	이즈리얼.name = "이즈리얼";
	이즈리얼.health = 600;
	이즈리얼.damage = 60;

	마스터이.name = "마스터이";
	마스터이.health = 700;
	마스터이.damage = 70;


#define 캐릿갯수 2
	//캐릭 목록 출력
	printf("캐릭명: %s, 체력: %d, 공격력: %d\n", 이즈리얼.name, 이즈리얼.health, 이즈리얼.damage);
	printf("캐릭명: %s, 체력: %d, 공격력: %d\n, 아이템 %s\n", 협곡의전령.name, 협곡의전령.health, 협곡의전령.damage, 협곡의전령.item);
}