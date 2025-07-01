#include<stdio.h>
int main(){
int total_number_of_candy;
    printf("enter total number of candy\n");
    scanf("%d", &total_number_of_candy);
    if(total_number_of_candy<=0)
    {
        printf("enter valid value \n");
    }
    else{

    int sweetness[total_number_of_candy];
    printf("enter sweetness level \n");
    for (int i = 0; i < total_number_of_candy; i++)
    {
        scanf("%d", &sweetness[i]);
    }
    int max;
max=sweetness[0];
for(int i=1;i<total_number_of_candy;i++){

   { if(sweetness[i]>max) 
   max=sweetness[i];
   }
}


printf("max sweetness candy: %d\n",max);


int occur=0;
for (int i=0;i<total_number_of_candy;i++)

{
    if( sweetness[i]==max) {occur++;}
}
printf("occurrence= %d\n",occur);

    }

return 0;

}