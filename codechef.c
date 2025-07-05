 #include <stdio.h>

int main() {
	// your code goes here
int testcases;
scanf("%d",&testcases);
if(testcases>=1 && testcases<=10){
for(int i=0;i<testcases;i++){
int number;
scanf("%d",&number);
if(number>=1 && number<=100000){
int array[number];
for(int i=0;i<number;i++){
    scanf("%d",&array[i]);}
int max;
max=array[0];
for(int i=1;i<number;i++){
    if(array[i]>max){
        max=array[i];
    }
}

printf("%d\n",max);
}
}
}
return 0;
}

