#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[10], b[10];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }

        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                x = x+(a[i] - b[i]);
            else
                y = y+(b[i] - a[i]);
        }

        int iterations = (x > y) ? x : y;
        printf("%d\n", iterations);
    }
    return 0;
}
