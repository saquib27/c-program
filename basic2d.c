#include<stdio.h>
int main(){
    int array [2][2];
    array[0][0]=1;
    array[0][1]=1;
    array[1][0]=1;
    array[1][1]=1;

    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",array[i][j]);
        }
         printf("\n");
    }
    

   
return 0;
}