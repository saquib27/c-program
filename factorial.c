// #include <stdio.h>
// void main()
// {
//     int x, i;
//     printf("enter a number\n");
//     scanf("%d", &x);

//     long double  factorial=1;
//     if(x>=0){

//     for (i = 1; i <= x; i++)
//     {
//         factorial = factorial * i;
//     }
//     printf("factorial of given number %Lf\n", factorial);
// }
// else 
//     printf("invalid number\n");
// }
// #include <stdio.h>
// int main()
// {
//     int t;
//     scanf("%d", &t);

//     while (t--){
//     int x;
//     scanf("%d", &x);

//  long double factorial=1;
//     if(x>=0){

//     for (int i = 1; i <= x; i++)
//     {
//         factorial = factorial * i;
//     }
//     printf("%.0Lf\n", factorial);
// }
// }
// return 0;
// }

#include <stdio.h>

#define MAX 200 

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x;
        scanf("%d", &x);

        
        int res[MAX];
        int res_size = 1;
        res[0] = 1; 

        if (x >= 0) {
            for (int i = 2; i <= x; i++) {
                int carry = 0;
                for (int j = 0; j < res_size; j++) {
                    int prod = res[j] * i + carry;
                    res[j] = prod % 10;
                    carry = prod / 10;
                }
                while (carry) {
                    res[res_size++] = carry % 10;
                    carry /= 10;
                }
            }

        
            for (int i = res_size - 1; i >= 0; i--)
                printf("%d", res[i]);
            printf("\n");
        }
    }
    return 0;
}

