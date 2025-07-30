#include <stdio.h>
int ways(int sr, int sc, int er, int ec)
{
    if (sr == er && sc == ec)
        return 1;
    int down = 0;
    int right = 0;

    if (sr <= er)
    {
        down = ways(sr + 1, sc, er, ec);
    }
    if (sc <= ec)
    {
        right = ways(sr, sc + 1, er, ec);
    }
    int totalways = down + right;
    return totalways;
}

int main()
{
    int rows, column;
    printf("Enter number of rows:\n");
    scanf("%d", &rows);
    printf("Enter number of columns:\n");
    scanf("%d", &column);

    int no_of_ways = ways(1, 1, rows, column);
    printf("Number of ways: %d\n", no_of_ways);
    return 0;
}
