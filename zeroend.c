#include<stdio.h>
int main(){
    int number_of_element;
    printf("enter number of element\t");
    scanf("%d",&number_of_element);
    if (number_of_element <= 0)
    {
        printf("enter valid value \n");
    }
    else{
        int number[number_of_element];
        printf("enter your number\n");
        for(int i=0;i<number_of_element;i++){
            scanf("%d",&number[i]);
        }
    
    int zero=0;
    for(int i=0;i<number_of_element;i++){
        if(number[i]!=0){
            number[zero]=number[i];
            zero++;
        }
    }
    while(zero<number_of_element){
        number[zero]=0;
        zero++;
    }
     printf("zero at end\n");
     for(int i=0;i<number_of_element;i++){
        printf("%d\n",number[i]);
     }
    }
}