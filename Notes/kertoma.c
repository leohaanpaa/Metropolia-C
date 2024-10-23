#include <stdio.h>

int main() 
{
    int n, i;
    unsigned long long kertoma = 1;  // Käytetään suurempaa tietotyyppiä, jotta voidaan käsitellä suuria arvoja.

    // Kysytään käyttäjältä kokonaisluku
    printf("Anna kokonaisluku: ");
    scanf("%d", &n);

    // Tarkistetaan, että luku on suurempi kuin 0
    if (n > 0) {
        // Lasketaan kertoma käyttäen for-silmukkaa
        for (i = 1; i <= n; i++) {
            kertoma *= i; // kertoma = kertoma * i
        }

        // Tulostetaan luvun n kertoma
        printf("Luvun %d kertoma on %llu\n", n, kertoma);
    } else {
        printf("Luvun täytyy olla suurempi kuin 0.\n");
    }

    return 0;
}
