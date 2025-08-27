#include <stdio.h>
int main()
{
    int row, colume;
    printf("enter number of rows: \t");
    scanf("%d", &row);
    printf("enter number of colume: \t");
    scanf("%d", &colume);
    int array[row][colume];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colume; j++)
        {
            printf("enter your number");
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colume; j++)
        {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}