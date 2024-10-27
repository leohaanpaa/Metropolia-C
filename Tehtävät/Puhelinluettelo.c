#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *luettelo;
    char etunimi[15], sukunimi[20], puhelinnumero[20];
    int maara = 0;

    luettelo = fopen("luettelo.txt", "r");
    if (luettelo == NULL) {
        printf("Tiedoston avaaminen epäonnistui.\n");
        return 1;
    }

    fscanf(luettelo, "%d", &maara);

    for (int i = 0; i < maara; i++) {
        fscanf(luettelo, "%20s %20s %14s", etunimi, sukunimi, puhelinnumero);
        printf("%s %s %s\n", etunimi, sukunimi, puhelinnumero);
    }

    fclose(luettelo);

    return 0;
}
