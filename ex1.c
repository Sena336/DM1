#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice() {
    return rand() % 6 + 1;
}

int main() {
    int die1, die2, totalValue;
    
    printf("Rolling dice...\n");
    srand(time(NULL));

    die1 = rollDice();
    die2 = rollDice();
    totalValue = die1 + die2;

    printf("Die 1: %d\n", die1);
    printf("Die 2: %d\n", die2);
    printf("Total value: %d\n", totalValue);

    if (totalValue == 7 || totalValue == 11) {
        printf("You won!\n");
    } else {
        printf("You lost!\n");
    }
    return 0;
}
