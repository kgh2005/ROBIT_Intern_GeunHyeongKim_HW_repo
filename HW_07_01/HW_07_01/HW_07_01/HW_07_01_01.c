#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�Է¹��� ������ �����Ѵ�.
	float number1, number2, number3, number4, number5;
	//��հ��� ������ ������ �����Ѵ�.
	float avg;
	//�ִ�, �ּڰ��� ������ ������ �����Ѵ�.
	float max, min;

	//5���� �Ǽ��� �Է¹޴´�.
	printf("1 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf("%f", &number1);
	printf("2 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf("%f", &number2);
	printf("3 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf("%f", &number3);
	printf("4 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf("%f", &number4);
	printf("5 ��° �Ǽ��� �Է��Ͻÿ�.");
	scanf("%f", &number5);

	printf("----���----\n");
	//��հ��� ���Ѵ�.
	avg = (number1 + number2 + number3 + number4 + number5) / 5;
	//�ִ��� ���Ѵ�.
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

	//�ּڰ��� ���Ѵ�.
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

	//����� ����Ѵ�.
	printf("����� %f �Դϴ�.\n", avg);
	printf("�ִ��� %f �Դϴ�.\n", max);
	printf("�ּڰ��� %f �Դϴ�.\n", min);
}