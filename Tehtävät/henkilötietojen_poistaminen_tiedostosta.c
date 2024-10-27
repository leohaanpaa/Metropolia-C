#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct henkilo {
    char etunimi[15];
    char sukunimi[20];
    char puhelinnumero[20];
};

int poistaHenkilo(struct henkilo *lista, int maara, const char *etunimi, const char *sukunimi) {
    for (int i = 0; i < maara; i++) {
        if (strcmp(lista[i].etunimi, etunimi) == 0 && strcmp(lista[i].sukunimi, sukunimi) == 0) {
            for (int j = i; j < maara - 1; j++) {
                lista[j] = lista[j + 1];
            }
            return 1;
        }
    }
    return 0;
}

int main() {
    FILE *luettelo;
    struct henkilo henkilo_lista[100];
    int maara = 0;
    char etunimi[15], sukunimi[20];

    luettelo = fopen("luettelo.txt", "r");
    if (luettelo == NULL) {
        printf("Tiedoston avaaminen epäonnistui.\n");
        return 1;
    }

    fscanf(luettelo, "%d", &maara);

    for (int i = 0; i < maara; i++) {
        fscanf(luettelo, "%20s %20s %14s", henkilo_lista[i].etunimi, henkilo_lista[i].sukunimi, henkilo_lista[i].puhelinnumero);
    }

    fclose(luettelo);

    printf("Anna etunimi: ");
    scanf("%20s", etunimi);

    printf("Anna sukunimi: ");
    scanf("%20s", sukunimi);

    if (poistaHenkilo(henkilo_lista, maara, etunimi, sukunimi)) {
        maara--;

        luettelo = fopen("luettelo.txt", "w");
        if (luettelo == NULL) {
            printf("Tiedoston avaaminen epäonnistui.\n");
            return 1;
        }
		
        fprintf(luettelo, "%d\n", maara);
		
        for (int i = 0; i < maara; i++) {
            fprintf(luettelo, "%s %s %s\n", henkilo_lista[i].etunimi, henkilo_lista[i].sukunimi, henkilo_lista[i].puhelinnumero);
        }

        fclose(luettelo);

        printf("Tiedot poistettu luettelosta.\n");
    } else {
        printf("Etsimääsi henkilöä ei löytynyt luettelosta.\n");
    }

    return 0;
}