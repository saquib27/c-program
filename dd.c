#include <stdio.h>
#define MOD 676767677
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[100];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        long long sum = 0;
        int last_big = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 1)
            {
                sum += a[i];
                last_big = i;
            }
        }
        if (last_big==  -1)
        {
            printf("1\n");
            continue;
        }
        int has_trail_one = 0;
        for (int i = last_big + 1; i < n; i++)
        {
            if (a[i] == 1)
            {
                has_trail_one = 1;
                break;
            }
        }
        if (has_trail_one)
        {
            sum += 1;
        }
        printf("%lld\n", sum % MOD);
    }
    return 0;
}