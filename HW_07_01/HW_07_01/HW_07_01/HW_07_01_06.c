#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;

    printf("���� �Է��ϼ���. ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        //�� ĭ �ǳʶپ�� �ϴ��� �˷��ִ� for ���̴�.
        for (int j = num - 1; j > i; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            //������ ���� ��� ���� ���� �� ä���� ���ǹ��̴�.
            if (i == num - 1)
            {
                printf("*");
            }
            else
            {
                //������ ���� �ƴ� ��� ó�� j for ������ ó���� ���� ���� ��� �ǵ��� �ϴ� ���� ���̴�.
                if ((j == 0) || (j == 2 * i))
                {
                    printf("*");
                }
                //��� ������ ����� ���ǹ��̴�.
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

}