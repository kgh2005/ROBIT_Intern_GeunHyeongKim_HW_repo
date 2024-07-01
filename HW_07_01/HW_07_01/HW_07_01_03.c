#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//입력받을 연도 변수를 선언한다.
	int y;

	printf("연도를 입력하세요 : ");
	scanf("%d", &y);

	//윤년을 구하는 조건문
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		printf("윤년");
	}
	else
	{
		//윤년이 아닐 경우 아니다 라고 출력
		printf("윤년이 아니다");
	}
}