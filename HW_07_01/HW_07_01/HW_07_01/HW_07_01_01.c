#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//입력받을 변수를 선언한다.
	float number1, number2, number3, number4, number5;
	//평균값을 저장할 변수를 선언한다.
	float avg;
	//최댓값, 최솟값을 저장할 변수를 선언한다.
	float max, min;

	//5개의 실수를 입력받는다.
	printf("1 번째 실수를 입력하시오.");
	scanf("%f", &number1);
	printf("2 번째 실수를 입력하시오.");
	scanf("%f", &number2);
	printf("3 번째 실수를 입력하시오.");
	scanf("%f", &number3);
	printf("4 번째 실수를 입력하시오.");
	scanf("%f", &number4);
	printf("5 번째 실수를 입력하시오.");
	scanf("%f", &number5);

	printf("----결과----\n");
	//평균값을 구한다.
	avg = (number1 + number2 + number3 + number4 + number5) / 5;
	//최댓값을 구한다.
	max = number1;

	if (number2 > max)
	{
		max = number2;
	}
	if (number3 > max)
	{
		max = number3;
	}
	if (number4 > max)
	{
		max = number4;
	}
	if (number5 > max)
	{
		max = number5;
	}

	//최솟값을 구한다.
	min = number1;

	if (number2 < min)
	{
		min = number2;
	}
	if (number3 < min)
	{
		min = number3;
	}
	if (number4 < min)
	{
		min = number4;
	}
	if (number5 < min)
	{
		min = number5;
	}

	//결과를 출력한다.
	printf("평균은 %f 입니다.\n", avg);
	printf("최댓값은 %f 입니다.\n", max);
	printf("최솟값은 %f 입니다.\n", min);
}