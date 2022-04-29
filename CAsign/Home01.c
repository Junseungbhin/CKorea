#include <stdio.h>

void main20()
{
	// TODO : 간단한 자기소개
	// 이름은 변수로
	// 나이도 변수로

	//printf 자기소개
	char 이름[7] = "전승빈";		// 6칸+1칸("/0)
	int 나이 = 22;

	printf("이름 : %s\n나이 : %d", 이름, 나이);
}