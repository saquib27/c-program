#include<stdio.h>
#include<string.h>
int main() 
{
    struct pokemon
    {
            int hp;
            int speed;
            int attack;
            char tier;
    } pikachu,charlizad,mewtow;

    pikachu.attack=100;
    pikachu.hp=80;
    pikachu.speed=88;
    pikachu.tier='s';

    charlizad.attack=140;
    charlizad.hp=100;
    charlizad.speed=60;
    charlizad.tier='l';

    mewtow.attack=180;
    mewtow.hp=110;
    mewtow.speed=200;
    mewtow.tier='g';

    printf("we have three pokemon details\n");
    printf("type 1 for pikachu\n");
    printf("type 2 for charlizard\n");
    printf("type 3 for mewtow\n");

    int input;
    scanf("%d",&input);

    if(input==1){
        printf("attack: %d\n",pikachu.attack);
        printf("hp: %d\n",pikachu.hp);
        printf("speed: %d\n",pikachu.speed);
        printf("tier: %c\n",pikachu.tier);
    }
    else if(input==2){
        printf("attack: %d\n",charlizad.attack);
        printf("hp: %d\n",charlizad.hp);
        printf("speed: %d\n",charlizad.speed);
        printf("tier: %c\n",charlizad.tier);
    }
    else if(input==3){
        printf("attack: %d\n",mewtow.attack);
        printf("hp: %d\n",mewtow.hp);
        printf("speed: %d\n",mewtow.speed);
        printf("tier: %c\n",mewtow.tier);
    }
    else{
        printf("enter valid responce");
    }
    
    
    
}