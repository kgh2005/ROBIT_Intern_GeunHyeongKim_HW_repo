#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //부호를 입력받을 변수를 선언한다.
    char i;
    //숫자를 입력받을 변수와 거듭제곱한 값을 입력받을 변수를 선언한다.
    float number1, number2, num = 1;

    printf("Input Arithmetic Operation\n");
    printf("ex)   3.4 + 8.5\n");
    printf("      2.9 - 8.0\n");
    printf("      3.9 * 8.0\n");
    printf("      3.9 / 8.0\n");
    printf("      3.9 ^ 8\n");

    //식을 입력받는다.
    printf("\ninput : ");
    scanf("%f %c %f", &number1, &i, &number2);

    //부호에 따라 결과를 얻도록 조건문을 사용한다.
    if (i == '+')
    {
        printf("%.2f + %.2f = %.2f", number1, number2, number1 + number2);
    }
    else if (i == '-')
    {
        printf("%.2f - %f = %f", number1, number2, number1 - number2);
    }
    else if (i == '*')
    {
        printf("%.2f * %.2f = %.2f", number1, number2, number1 * number2);
    }
    else if (i == '/')
    {
        //분모가 0일 경우 무한이므로 조건을 추가했다.
        if (number2 == 0)
        {
            printf("%.2f / %.2f = 무한입니다.", number1, number2);
        }
        else
        {
            printf("%.2f / %.2f = %.2f", number1, number2, number1 / number2);
        }
    }
    else if (i == '^')
    {
        //거듭제곱은 for 문을 통해 값을 얻도록 하였다.
        for (int i = 1; i <= number2; i++)
        {
            num *= number1;
        }
        printf("%.2f ^ %.2f = %.2f", number1, number2, num);
    }
    //부호를 잘못 입력했을 경우 프로그램을 종료하도록 하였다.
    else printf("\n잘못입력하셨습니다.");
}