#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�Է¹��� ������ �����Ѵ�.
	int number;
	//�տ� �μ��� ���� ������ ������ �����Ѵ�.
	int num;
	//1, 2��° �Ǻ���ġ ���� �����Ѵ�.
	int number1 = 0, number2 = 1;

	printf("n �Է� : ");
	scanf("%d", &number);

	if (number == 1)
	{
		printf("%d ��° �Ǻ���ġ �� : %d", number, number1);
	}
	else if (number == 2)
	{
		printf("%d ��° �Ǻ���ġ �� : %d", number, number2);
	}
	else if (number == 0)
	{
		//���� 0�� �Է����� ��� �ƹ��͵� �ƴϹǷ� ���α׷��� ����ȴ�.
		/**/
	}
	else
	{
		//n ��° �Ǻ���ġ ���� ���Ѵ�.
		for (int i = 0; i < number - 2; i++)
		{
			num = number1 + number2;
			number1 = number2;
			number2 = num;
		}
		printf("%d ��° �Ǻ���ġ �� : %d ", number, num);
	}

}