/*Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime numbers between two given numbers!

Input
The input begins with the number t of test cases in a single line (t ≤ 10). In each of the next t lines there are two numbers m and n
(1 ≤ m ≤ n ≤ 1000000000, n-m ≤ 100000) separated by a space.

Output
For every test case print all prime numbers p such that m ≤ p ≤ n, one number per line, test cases separated by an empty line.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        int from;
        scanf("%d", &from);
        int to;
        scanf("%d", &to);
        for (int i = from; i <= to; i++)
        {
            if (i >= 2)
            {

                int prime = 0;

                for (int j = 2; j <= sqrt(i); j++)
                {
                    if (i % j == 0)
                    {
                        prime = 1;
                        break;
                    }
                }

                if (prime == 0)
                    printf("%d\n", i);
            }
        }
    }
    return 0;
}