#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int a[11];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int max_avg = 0;

        for (int j = 0; j < n; j++)
        {
            int sum = 0;
            for (int k = j; k < n; k++)
            {
                sum += a[k];
                int length = k - j + 1;
                int avg = sum / length;

                if (avg > max_avg)
                {
                    max_avg = avg;
                }
            }
        }

        printf("%d\n", max_avg);
    }

    return 0;
}