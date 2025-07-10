#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        int from;
        scanf("%d", &from);
        int to;
        scanf("%d", &to);
        for (int i = from; i <= to; i++)
        {
            if (i >= 2)
            {

                int prime = 0;
                for (int j = 2; j <= i / 2; j++)
                {
                    if (i % j == 0)
                    {
                        prime = 1;
                        break;
                    }
                }

                if (prime == 0)
                    printf("%d\n", i);
            }
        }
    }
    return 0;
}