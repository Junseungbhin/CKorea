#include <stdio.h>

int A(int num) {
	num++;			//num = num + 1;	num += 1;

	return 0;
}

int B(int *num) {		//포인터(주소를 가리키다)
	(*num)++;
	return 0;
}

int main30() {
	int num = 3;
	A(num);
	printf("%d\n", num);
	B(&num);
	printf("%d\n", num);


	int *pNum;		//포인터변수 선언
	pNum = &num;	//주소참조(주소 대입)
	*pNum;		//역참조


	printf("변수의 주소: %p\n", &num);
	printf("변수의 값: %d\n", num);

	printf("포인터 변수의 값: %p\n", pNum);
	printf("역참조: %d\n", *pNum);

	return 0;
}

//1. 변수 선언(변수를 만든다)
//2. 포인터 변수를 만들고 변수의 주소를 담는다
//3. 사용할 때는 역참조를 사용한다.
//포인터 변수를 선언하려면 포인터 변수 선언시에 변수 앞에 *을 적는다
//역참조를 하려면 변수앞에 *을 적는다. (변수 사용시에 앞에 *적용)
//변수의 주소는 변수앞에 &을 적으면 된다.