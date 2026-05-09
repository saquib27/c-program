#include <stdio.h>
#include <limits.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        long long sum = 0;
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
            sum = sum+ x;
            if (x < min)
                min = x;
        }

        if (n == 1)
        {
            printf("0");
        }
        else
        {
            printf("%lld", sum + min);
        }
    }
    return 0;
}
