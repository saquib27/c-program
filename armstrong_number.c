#include <stdio.h>

int ipow(int base, int exp)
{
    int res = 1;
    while (exp-- > 0)
        res *= base;
    return res;
}

int isArmstrong(int n)
{
    if (n < 0)
        return 0;
    int original = n;
    int digits = 0;
    int temp = n;

    if (temp == 0)
        digits = 1;
    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    int sum = 0;
    temp = n;
    while (temp > 0)
    {
        int d = temp % 10;
        sum += ipow(d, digits);
        temp /= 10;
    }

    return sum == original;
}

int main(void)
{
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1)
        return 0;

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is NOT an Armstrong number.\n", num);

    return 0;
}
