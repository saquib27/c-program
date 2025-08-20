#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000

void multiply(char number1[], char number2[])
{
    int len1 = strlen(number1);
    int len2 = strlen(number2);
    int result[MAX * 2] = {0};

    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; j >= 0; j--)
        {
            int mul = (number1[i] - '0') * (number2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && result[i] == 0)
        i++;

    if (i == len1 + len2)
    {
        printf("0\n");
        return;
    }

    for (; i < len1 + len2; i++)
        printf("%d", result[i]);
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char a[MAX], b[MAX];
        scanf("%s %s", a, b);
        multiply(a, b);
    }
    return 0;
}
