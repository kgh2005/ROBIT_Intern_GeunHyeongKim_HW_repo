#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//숫자를 입력받을 변수를 선언한다.
	int n, r;
	//num_s는 분자, num_r과 num_rr은 분모에 해당한다.
	int num_s = 1, num_r = 1, num_rr = 1;

	scanf("%d %d", &n, &r);

	//순열의 분자를 구하는 반복문이다.
	for (int i = n; i >= 1; i--)
	{
		num_s *= i;
	}
	//순열의 분모를 구하는 반복문이다.
	for (int i = n - r; i >= 1; i--)
	{
		num_r *= i;
	}

	printf("순열 : %d\n", num_s / num_r);

	//분자, 분모를 초기화 시킨다.
	num_r = 1;
	num_s = 1;

	//중복순열을 구하는 반복문이다.
	for (int i = r; i >= 1; i--)
	{
		num_r *= n;
	}

	printf("중복순열 : %d\n", num_r);

	num_r = 1;
	num_s = 1;

	//조합의 분자를 구하는 반복문이다.
	for (int i = n; i >= 1; i--)
	{
		num_s *= i;
	}

	//조합의 분모를 구하는 반복문이다.
	for (int i = n - r; i >= 1; i--)
	{
		num_r *= i;
	}
	for (int i = r; i >= 1; i--)
	{
		num_rr *= i;
	}

	printf("조합 : %d\n", num_s / (num_r * num_rr));

	num_rr = 1;
	num_r = 1;
	num_s = 1;

	//중복조합의 분자를 구하는 반복문이다.
	for (int i = n + r - 1; i >= 1; i--)
	{
		num_s *= i;
	}

	//중복조합의 분모를 구하는 반복문이다.
	for (int i = n - 1; i >= 1; i--)
	{
		num_r *= i;
	}
	for (int i = r; i >= 1; i--)
	{
		num_rr *= i;
	}

	printf("중복조합 : %d\n", num_s / (num_r * num_rr));
}