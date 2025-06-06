#include<stdio.h>
void main(){
float bs,gs,da,hra;
printf("enter your basic salary\n");
scanf("%f", &bs);

if (bs<10000)
{
hra=0.1*bs;
da=0.9*bs;    /* code */
}
else
{
    hra=500;
    da=.98*bs;
}
gs=bs+da+hra;
printf("Gross salary=$ %f\n",gs);
}