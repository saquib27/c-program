#include <stdio.h>
void main()
{

    int b;
    printf("Enter your number:\n");
    scanf("%d",&b);
    printf("All the even number till %d\n\n",b);
    for (int i = 2; i <= b; i=i+2)
    {
        printf("%d\n\n",i);
    }
}