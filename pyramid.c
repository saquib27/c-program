#include <stdio.h>
int main()
{
    int lines;
    printf("enter number of line \t");
    scanf("%d", &lines);
    for (int i = 0; i <= lines + 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j >= lines + (-i + 1) && j <= lines + (i - 1))
            {
                printf("*\t");
            }
            else
                printf(" \t");
        }
        printf("\n");
    }
}