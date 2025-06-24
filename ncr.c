#include<stdio.h>
long double factorial(int x){

    long double  factorial=1;
    

    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main(){
    long double n;
    printf("enter n\t");
    scanf("%Lf",&n);
    long double r;
    printf("enter r\t");
    scanf("%Lf",&r);

    if (n < r || n < 0 || r < 0) {
        printf("invalid input \n");
    }
    else{
    long double nfactorial=factorial(n);
    long double rfactorial=factorial(r);
    long double nrfactorail=factorial(n-r);

    long double ncr=nfactorial/(rfactorial*nrfactorail);
    printf("nCr = %.0Lf \n",ncr);
    }

}

