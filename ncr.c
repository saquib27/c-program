#include<stdio.h>
int factorial(int x){

    long double  factorial=1;
    

    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main(){
    int n;
    printf("enter n\t");
    scanf("%d",&n);
    int r;
    printf("enter r\t");
    scanf("%d",&r);

    int nfactorial=factorial(n);
    int rfactorial=factorial(r);
    int nrfactorail=factorial(n-r);

    int ncr=nfactorial/(rfactorial*nrfactorail);
    printf("nCr = %d \n",ncr);

}

