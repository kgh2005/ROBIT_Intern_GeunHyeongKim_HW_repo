#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//���ڸ� �Է¹��� ������ �����Ѵ�.
	int n, r;
	//num_s�� ����, num_r�� num_rr�� �и� �ش��Ѵ�.
	int num_s = 1, num_r = 1, num_rr = 1;

	scanf("%d %d", &n, &r);

	//������ ���ڸ� ���ϴ� �ݺ����̴�.
	for (int i = n; i >= 1; i--)
	{
		num_s *= i;
	}
	//������ �и� ���ϴ� �ݺ����̴�.
	for (int i = n - r; i >= 1; i--)
	{
		num_r *= i;
	}

	printf("���� : %d\n", num_s / num_r);

	//����, �и� �ʱ�ȭ ��Ų��.
	num_r = 1;
	num_s = 1;

	//�ߺ������� ���ϴ� �ݺ����̴�.
	for (int i = r; i >= 1; i--)
	{
		num_r *= n;
	}

	printf("�ߺ����� : %d\n", num_r);

	num_r = 1;
	num_s = 1;

	//������ ���ڸ� ���ϴ� �ݺ����̴�.
	for (int i = n; i >= 1; i--)
	{
		num_s *= i;
	}

	//������ �и� ���ϴ� �ݺ����̴�.
	for (int i = n - r; i >= 1; i--)
	{
		num_r *= i;
	}
	for (int i = r; i >= 1; i--)
	{
		num_rr *= i;
	}

	printf("���� : %d\n", num_s / (num_r * num_rr));

	num_rr = 1;
	num_r = 1;
	num_s = 1;

	//�ߺ������� ���ڸ� ���ϴ� �ݺ����̴�.
	for (int i = n + r - 1; i >= 1; i--)
	{
		num_s *= i;
	}

	//�ߺ������� �и� ���ϴ� �ݺ����̴�.
	for (int i = n - 1; i >= 1; i--)
	{
		num_r *= i;
	}
	for (int i = r; i >= 1; i--)
	{
		num_rr *= i;
	}

	printf("�ߺ����� : %d\n", num_s / (num_r * num_rr));
}