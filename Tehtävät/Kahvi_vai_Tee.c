#include <stdio.h>

int main()
{
    char juoma;
    int kupit;
    

    printf("Juotko kahvia vai teetä (k/t)? ");
    scanf(" %c", &juoma);
    

    printf("Montako kuppia juot päivässä: ");
    scanf("%d", &kupit);
    
    if (juoma == 'k' || juoma == 'K') {
        if (kupit >= 0 && kupit <= 2) {
            printf("Et taida juoda paljoa kahvia.\n");
        } else if (kupit >= 3 && kupit <= 20) {
            printf("Juotpa paljon kahvia!\n");
        } else {
            printf("Ohjelmassa tapahtunut virhe!\n");
        }
    } else if (juoma == 't' || juoma == 'T') {
        if (kupit >= 0 && kupit <= 2) {
            printf("Et taida juoda paljoa teetä.\n");
        } else if (kupit >= 3 && kupit <= 20) {
            printf("Juotpa paljon teetä!\n");
        } else {
            printf("Ohjelmassa tapahtunut virhe!\n");
        }
    } else {
        printf("Ohjelmassa tapahtunut virhe!\n");
    }
    
    return 0;
}