#include <stdio.h>
int steps(int stair)
{
    if (stair == 1)
    {
        return 1;
    }
    if (stair == 2)
    {
        return 2;
    }
    int no_of_ways = steps(stair - 1) + steps(stair - 2);
    return no_of_ways;
}

int main()
{
    int stair;
    printf("enter no of stair\n");
    scanf("%d", &stair);
    int ways = steps(stair);
    printf("no of ways  %d\n", ways);
    return 0;
}