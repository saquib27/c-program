#include <stdio.h>
void main()
{
    int x, i;
    printf("enter a number\n");
    scanf("%d", &x);

    long double  factorial=1;
    if(x>=0){

    for (i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial of given number %Lf\n", factorial);
}
else 
    printf("invalid number\n");
}
