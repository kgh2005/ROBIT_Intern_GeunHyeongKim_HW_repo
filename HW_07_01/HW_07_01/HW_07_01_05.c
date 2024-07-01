#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;
    printf("값을 입력하세요. ");
    scanf("%d", &num);

    //전부다 별을 찍는 선을 기준으로 위아래를 나누어서 반복문을 작성한다.

    //기준선을 포함한 위쪽 반복문이다.
    for (int i = 0; i < num; i++)
    {
        //세로로 나누어서 반복문을 작성하였다.
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