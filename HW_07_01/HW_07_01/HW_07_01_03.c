#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	//�Է¹��� ���� ������ �����Ѵ�.
	int y;

	printf("������ �Է��ϼ��� : ");
	scanf("%d", &y);

	//������ ���ϴ� ���ǹ�
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
	{
		printf("����");
	}
	else
	{
		//������ �ƴ� ��� �ƴϴ� ��� ���
		printf("������ �ƴϴ�");
	}
}