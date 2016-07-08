#include <stdio.h>
#include <stdlib.h>

int main()
{
    char purchase;
    int cavalry = 0;
    int infantry = 0;
    int currency = 0;
    char difficulty;

    //Continues to loop until the user enters a correct difficulty. Informs user of incorrect selection.
    //As it is impossible for currency = 1, the loop continues until it meets the requirements for the break.
    while (currency != 1){
    printf("Please Select Difficulty\n[E] = Easy\n[N] = Normal\n[H] = Hard\n");
    scanf(" %c", &difficulty);

    if (difficulty == 'e' || difficulty == 'E' || difficulty == 'n' || difficulty == 'N' || difficulty == 'h' || difficulty == 'H') break;
        else printf("\nInvalid difficulty selected, please try again\n");
       }

    //Selects the difficulty based on the previous input.
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

    //Loops purchasing options until the user runs out of currency.
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
    else printf("\nInvalid purchase selected, please try again\n");

    }
    printf("\n\nPurchase completed.");
    exit(0);
}
