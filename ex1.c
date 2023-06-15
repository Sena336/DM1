#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    int die1, die2, totalValue;
    
    char str[8];
    printf("Who are you?");
    scanf("%s", str);
    printf("Hello,%s\n", str);
    
    
    printf("Rolling dice...\n");
    srand(time(NULL));

    die1 = rollDice();
    die2 = rollDice();
    totalValue = die1 + die2;

    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", totalValue);

    return 0;
}
