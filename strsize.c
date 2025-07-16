#include<stdio.h>
#include<string.h>
int main(){
    char str[1000];
    puts("enter your input");
    scanf("%[^\n]s",str);

    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size=size+1;
        i++;
    }
    printf("size of input is  %d",size);
    printf("\n");

}