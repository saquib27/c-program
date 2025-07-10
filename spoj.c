#include <stdio.h>
int main()
{

    int x;

    do
    {
        scanf("%d", &x);

        if (x == 42)
        {
            break;

            printf("%d\n", x);
        }

    } while (1);

    return 0;
}
