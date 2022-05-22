#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//구조체
//카페명[], 메뉴번호[], 메뉴[], 가격[]
typedef struct Starbucks {
	int menu_num[4];
	char* cafe_name;
	char menu_name[4][64];
	int menu_price[4];
} SB;

//함수 (메뉴주문: 번호를 입력받아서, 메뉴이름과 가격을 출력)
void MenuOrder(SB* cafe);
//함수 (메뉴 가격 변경: 가격을 바꾸고자하는 메뉴의 번호를 입력받아 가격을 입력하여 수정)
void MenuModify(SB* cafe);

int main() {
	//카페
	struct Starbucks 부평점 = { {1,2,3,4}, "스타벅스 부평점",{"아메리카노", "카페라떼", "딸기바나나", "케모마일차"}, {1500, 2000, 3000, 4000} };
	SB 인천점 = { {1,2,3,4}, "스타벅스 인천점", {"아메리카노", "카페라떼", "딸기바나나", "케모마일차"}, {2500, 3800, 4200, 5100} };
	struct Starbucks 주안점 = { {1,2,3,4}, "스타벅스 주안점",{"아메리카노", "카페라떼", "딸기바나나", "케모마일차"}, {3500, 3300, 4400, 5300} };
	
	//포인터
	//메뉴주문함수
	MenuOrder(&부평점);
	//비교는 ==로 (1 == 1)
	//실행예시 : 스타벅스 부평점에서 아메리카노를 1500에 주문했습니다.
	MenuOrder(&부평점);
	MenuModify(&주안점);
	MenuOrder(&주안점);

	return 0;
}

void MenuOrder(SB* cafe) 
{
	int num = 0;
	printf("주문할 메뉴의 번호를 입력하세요>>");
	scanf_s("%d", &num);
	printf("%s에서 %s를 %d원에 주문했습니다.", cafe->cafe_name, (*cafe).menu_name[num - 1], (*cafe).menu_price[num -1]);
}

void MenuModify(SB* cafe) 
{
	int num = 0;
	int price = 0;
	printf("수정할 메뉴의 번호를 입력하세요>>");
	scanf_s("%d", &num);
	printf("가격을 입력하세요>>");
	scanf_s("%d", &price);

	(*cafe).menu_price[num-1] = price;
	//cafe -> menu_price[num-1] = price;

}