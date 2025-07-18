#include <stdio.h>
#include <string.h>

int str(char s[])
{
    for (int i = 0; s[i]; i++)
        if (s[i] != '9')
            return 0;
    return 1;
}

void nextPalindrome(char s[])
{
    int n = strlen(s);
    if (str(s))
    {
        printf("1");
        for (int i = 1; i < n; i++)
            printf("0");
        printf("1\n");
        return;
    }

    char t[1000000];
    strcpy(t, s);
    for (int i = 0; i < n / 2; i++)
        t[n - i - 1] = t[i];

    if (strcmp(t, s) > 0)
    {
        printf("%s\n", t);
        return;
    }
    int mid = (n - 1) / 2, carry = 1;
    while (mid >= 0 && carry)
    {
        int d = t[mid] - '0' + carry;
        carry = d / 10;
        t[mid] = (d % 10) + '0';
        t[n - mid - 1] = t[mid];
        mid--;
    }

    printf("%s\n", t);
}

int main()
{
    int T;
    scanf("%d", &T);
    char s[1000000];
    while (T--)
    {
        scanf("%s", s);
        nextPalindrome(s);
    }
    return 0;
}
