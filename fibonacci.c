#include<stdio.h>
void main(){
int total_number;
printf("enter no of term\n");
scanf("%d",&total_number);


if(total_number < 2)
{
    printf("enter no of term >1\n");
}


else{


int series[total_number];
series[0]=0;
series[1]=1;
printf("fibonacci series:\t %d %d",series[0],series[1]);

for(int i=2;i< total_number;i++) {
  series[i]=series[i-1]+series[i-2];
  printf(" %d",series[i]);
}
printf("\n");

}
}



