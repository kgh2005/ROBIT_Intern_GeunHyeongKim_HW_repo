#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //��ȣ�� �Է¹��� ������ �����Ѵ�.
    char i;
    //���ڸ� �Է¹��� ������ �ŵ������� ���� �Է¹��� ������ �����Ѵ�.
    float number1, number2, num = 1;

    printf("Input Arithmetic Operation\n");
    printf("ex)   3.4 + 8.5\n");
    printf("      2.9 - 8.0\n");
    printf("      3.9 * 8.0\n");
    printf("      3.9 / 8.0\n");
    printf("      3.9 ^ 8\n");

    //���� �Է¹޴´�.
    printf("\ninput : ");
    scanf("%f %c %f", &number1, &i, &number2);

    //��ȣ�� ���� ����� �򵵷� ���ǹ��� ����Ѵ�.
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
        //�и� 0�� ��� �����̹Ƿ� ������ �߰��ߴ�.
        if (number2 == 0)
        {
            printf("%.2f / %.2f = �����Դϴ�.", number1, number2);
        }
        else
        {
            printf("%.2f / %.2f = %.2f", number1, number2, number1 / number2);
        }
    }
    else if (i == '^')
    {
        //�ŵ������� for ���� ���� ���� �򵵷� �Ͽ���.
        for (int i = 1; i <= number2; i++)
        {
            num *= number1;
        }
        printf("%.2f ^ %.2f = %.2f", number1, number2, num);
    }
    //��ȣ�� �߸� �Է����� ��� ���α׷��� �����ϵ��� �Ͽ���.
    else printf("\n�߸��Է��ϼ̽��ϴ�.");
}