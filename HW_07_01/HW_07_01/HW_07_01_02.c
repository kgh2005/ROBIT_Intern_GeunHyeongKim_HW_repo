#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//입력받을 변수를 선언한다.
	int number;
	//앞에 두수의 합을 저장할 변수를 선언한다.
	int num;
	//1, 2번째 피보나치 수를 선언한다.
	int number1 = 0, number2 = 1;

	printf("n 입력 : ");
	scanf("%d", &number);

	if (number == 1)
	{
		printf("%d 번째 피보나치 값 : %d", number, number1);
	}
	else if (number == 2)
	{
		printf("%d 번째 피보나치 값 : %d", number, number2);
	}
	else if (number == 0)
	{
		//만약 0을 입력했을 경우 아무것도 아니므로 프로그램이 종료된다.
		/**/
	}
	else
	{
		//n 번째 피보나치 수를 구한다.
		for (int i = 0; i < number - 2; i++)
		{
			num = number1 + number2;
			number1 = number2;
			number2 = num;
		}
		printf("%d 번째 피보나치 값 : %d ", number, num);
	}

}