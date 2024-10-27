#include <stdio.h>
#include <string.h>

int laskeVokaalit(const char *sana) {
    int vokaaliLaskuri = 0;

    // Käydään merkkijono läpi merkki kerrallaan
    for (int i = 0; sana[i] != '\0'; i++) {
        // Tarkistetaan, onko merkki yksi vokaaleista
        if (sana[i] == 'a' || sana[i] == 'e' || sana[i] == 'i' ||
            sana[i] == 'o' || sana[i] == 'u' || sana[i] == 'y') {
            vokaaliLaskuri++;
        }
    }

    return vokaaliLaskuri;
}

int main() {
    char sana[16]; // 15 merkkiä + 1 null-merkki

    printf("Ohjelma laskee vokaalien määriä.\n");
    printf("Anna sana: ");
    scanf("%15s", sana);

    // Lasketaan vokaalit ja tulostetaan tulos
    int vokaaliMaara = laskeVokaalit(sana);
    printf("Sanassa vokaaleja: %d\n", vokaaliMaara);

    return 0;
}