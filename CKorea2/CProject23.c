// 함수 : 코드를 저장하는 기술 (c언어에서 주어지는 문법으로 할 수 없는 계산개발자가 직접 만들어서 사용한다.)
// 기능단위로 저장
#include <stdio.h>

//Sum이라는 이름의 함수
void Sum(int var1, int var2) {
	printf("%d\n", var1 + var2);
}

//Sub : 두 수를 뺀다(첫번째값 - 두번째값). 대신에, 음수는 양수로 바꿔서 뺀다.

//Div : 나누기 기능을 만들되 0으로 나누려면 0을 출력하게 만들기(인자는 2개): 소수점도 표현 가능하게
void Sub(int var1, int var2) {
	if (var1, var2 >= 0) {
		printf("%d\n", var1 - var2);
	}
	else if (var1 >= 0 && var2 < 0) {
		printf("%d\n", var1 - (-var2));
	}
	else if (var1 < 0 && var2 >= 0) {
		printf("%d\n", -var1 - var2);
	}
	else if (var1 < 0 && var2 < 0) {
		printf("%d\n", -var1 - (-var2));
	}

}

void Div(double var1, double var2) {
	if (var1, var2 > 0) {
		printf("%f\n", var1 / var2);
	}
	else if (var1 > 0 && var2 == 0) {
		printf("%lf\n", var2);
	}
	else {
		printf("%f\n", var1 / var2);
	} 
}





//main이라는 이름의 함수
void main23() {
	Sum(1, 2, 3);
	Sum(10, 20, 30);
	Sum(100, 200, 300);

	Sub(-10, -5);		//5
	Div(7, 0);		//2
}


