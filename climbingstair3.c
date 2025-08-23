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
    if (stair == 3)
    {
        return 4;
    }
    int a = 1, b = 2, c = 4, result;
    for (int i = 4; i <= stair; i++)
    {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }
    return c;
}
 
int main()
{
    int stair;
    printf("enter no of stair\n");
    scanf("%d", &stair);
    if (stair <= 0)
    {
        printf("enter valid no of stairs\n");
    }
    else
    {
        int ways = steps(stair);
        printf("no of ways  %d\n", ways);
    }
    return 0;
}