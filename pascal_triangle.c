#include<stdio.h>
long double factorial(int x){

    long double  factorial=1;
    

    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int ncr(int n, int r){
    
     long double nfactorial=factorial(n);
    long double rfactorial=factorial(r);
    long double nrfactorail=factorial(n-r);

    long double ncr=nfactorial/(rfactorial*nrfactorail);
    return ncr;
}
int main(){
    int n;
    printf("enter n\t");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=i;j++){
            int icj= ncr(i,j);
            printf("%d ",icj);

        }
        printf("\n");
    }

    }
   