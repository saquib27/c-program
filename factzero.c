#include<stdio.h>
int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long number;
        scanf("%lld",&number);

        long long count=0;
        for(long long i=5;number/i>0;i=i*5){
            count=count+number/i;
        }
        printf("%lld\n",count);


    }
    return 0;
}