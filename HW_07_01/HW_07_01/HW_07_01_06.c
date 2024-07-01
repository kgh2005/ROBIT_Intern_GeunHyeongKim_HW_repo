#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;

    printf("값을 입력하세요. ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        //몇 칸 건너뛰어야 하는지 알려주는 for 문이다.
        for (int j = num - 1; j > i; j--)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            //마지막 줄일 경우 공백 없이 다 채우라는 조건문이다.
            if (i == num - 1)
            {
                printf("*");
            }
            else
            {
                //마지막 줄이 아닌 경우 처음 j for 문에서 처음과 끝만 별이 출력 되도록 하는 조건 문이다.
                if ((j == 0) || (j == 2 * i))
                {
                    printf("*");
                }
                //가운데 공간은 비우라는 조건문이다.
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }

}