#include <stdio.h>
void dhoni();
void virat();
void main(){
    char x;
printf("select d for dhoni or v for virat\n");

scanf("%c",&x);

if(x=='d'){
dhoni();
}
else if(x=='v'){
    virat();
}
else{
    printf("please select the correct option");

}

}

void dhoni() {
    printf("dhoni\n");
}

void virat(){
    printf("virat\n");
}