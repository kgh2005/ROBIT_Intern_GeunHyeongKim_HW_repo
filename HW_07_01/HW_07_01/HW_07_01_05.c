#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;
    printf("���� �Է��ϼ���. ");
    scanf("%d", &num);

    //���δ� ���� ��� ���� �������� ���Ʒ��� ����� �ݺ����� �ۼ��Ѵ�.

    //���ؼ��� ������ ���� �ݺ����̴�.
    for (int i = 0; i < num; i++)
    {
        //���η� ����� �ݺ����� �ۼ��Ͽ���.
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (int k = 1; k < num - i; k++)
        {
            printf(" ");
        }
        for (int l = 1; l < num - i; l++)
        {
            printf(" ");
        }
        for (int m = 0; m <= i; m++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf(" ");
        }
        for (int m = 0; m < num - i; m++)
        {
            printf("*");
        }
        printf("\n");
    }

}