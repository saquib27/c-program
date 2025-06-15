#include <stdio.h>
void main()
{
    int x;
    printf("enter total number of number\n");
    scanf("%d", &x);
    int number[x];
    printf("enter your numbers \n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &number[i]);
    }
    for (int i = 1; i <= x; x++)
    {
        int isFound = 0;
        for (int y = 0; y < x; y++)
        {
            if (number[y] == i)
            {
                isFound = 1;
            }
        }
        if (isFound == 0)
        {
            printf("%d", i);
            break;
        }
    }
}
