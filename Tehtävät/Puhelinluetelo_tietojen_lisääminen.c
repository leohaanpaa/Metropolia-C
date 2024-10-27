#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *luettelo;
    char etunimi[15], sukunimi[20], puhelinnumero[20];
    int maara = 0;

    luettelo = fopen("luettelo.txt", "r+");
    if (luettelo == NULL) {
        printf("Tiedoston avaaminen epäonnistui.\n");
        return 1;
    }



    printf("Anna etunimi: ");
    scanf("%20s", etunimi);

    printf("Anna sukunimi: ");
    scanf("%20s", sukunimi);

    printf("Anna puhelinnumero: ");
    scanf("%14s", puhelinnumero);

    fseek(luettelo, 0, SEEK_END);
    fprintf(luettelo, "%s %s %s\n", etunimi, sukunimi, puhelinnumero);

    fseek(luettelo, 0, SEEK_SET);
    fprintf(luettelo, "%d\n", maara + 1);

    fclose(luettelo);

    printf("Tietojen tallennus onnistui.\n");
    return 0;
}
