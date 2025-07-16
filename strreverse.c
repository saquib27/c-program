#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    puts("enter your input");
    scanf("%[^\n]s", str);

    int size = 0;
    int k = 0;
    while (str[k] != '\0')
    {
        size = size + 1;
        k++;
    }
    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char swap = str[i];
        str[i] = str[j];
        str[j] = swap;
    }
    printf("string in reverse \n%s", str);
    printf("\n");
}