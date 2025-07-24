#include <stdio.h>
#include <string.h>

struct Pokemon
{
    int hp, speed, attack;
    char tier;
};

int main()
{
    struct Pokemon pokemons[3] = {
        {80, 88, 100, 's'},
        {100, 60, 140, 'l'},
        {110, 200, 180, 'g'}};

    printf("We have three Pokémon details:\n");
    printf("1. Pikachu\n2. Charizard\n3. Mewtwo\n");

    int input;
    scanf("%d", &input);

    if (input >= 1 && input <= 3)
    {
        struct Pokemon p = pokemons[input - 1];
        printf("attack: %d\nhp: %d\nspeed: %d\ntier: %c\n",
               p.attack, p.hp, p.speed, p.tier);
    }
    else
    {
        printf("Enter valid response\n");
    }
}
