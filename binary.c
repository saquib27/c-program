#include <stdio.h>
void binary(int x)
{
    if (x == 1)
    {
        printf("1");
        return;
    }
    binary(x / 2);
    printf("%d", x % 2);
}
int main()
{
    int number;
    printf("enter your number\n");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("binary: ");
        binary(number);
        printf("\n");
    }
}