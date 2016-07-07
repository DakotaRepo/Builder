#include <stdio.h>
#include <stdlib.h>
int currency;
int infantry;
int cavalry;
char purchase;
char difficulty;
int main()
{
    while (difficulty != 'e' || difficulty != 'E' || difficulty != 'n' || difficulty != 'N' || difficulty != 'h' || difficulty != 'H'){
    printf("Please Select Difficulty\n[E] = Easy\n[N] = Normal\n[H] = Hard\n");
    scanf(" %c", &difficulty);

    if (difficulty == 'e' || difficulty == 'E' || difficulty == 'n' || difficulty == 'N' || difficulty == 'h' || difficulty == 'H') break;
        else printf("\nInvalid difficulty selected, please try again\n");
       }

    switch(difficulty){

    case 'e': case 'E':
        currency = 3000;
        printf("\nEasy mode selected, you may spend %d on units\n\n", currency);
        break;

    case 'n': case 'N':
        currency = 2000;
        printf("\nNormal mode selected, you may spend %d on units\n\n", currency);
        break;

    case 'h': case 'H':
        currency = 1000;
        printf("\nHard mode selected, you may spend %d on units\n\n", currency);
        break;
    }
    printf("Please purchase your units. Your balance is %d\n\n[I]nfantry costs 500, [C]avalry costs 1000\n", currency);
    while (currency > 0){
    scanf(" %c", &purchase);

    if (purchase == 'i' || purchase == 'I'){
        (currency -= 500);
        (infantry ++);
        printf("\nInfantry purchased, your balance is %d. You control %d Infantry and %d Cavalry\n", currency, infantry, cavalry);
        continue;
    }
    else if (purchase == 'c' && currency >= 1000 || purchase == 'C' && currency >= 1000 ){
        (currency -= 1000);
        (cavalry ++);
        printf("\nCavalry purchased, your balance is %d. You control %d Infantry and %d Cavalry\n", currency, infantry, cavalry);
        continue;
    }
    else if (purchase != 'i' || purchase != 'I' || purchase != 'c' || purchase != 'C'){
        printf("\nInvalid purchase selected, please try again\n");
        continue;
    }
        if (currency <= 0) break;
    }
    printf("\n\nPurchase completed.");
    exit(0);
}
