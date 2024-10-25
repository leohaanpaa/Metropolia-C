#include <stdio.h>


void summa();
void erotus();
void tulo();

int main() {
    int valinta;

    do {

        printf("1: kahden luvun summa\n");
        printf("2: kahden luvun erotus\n");
        printf("3: kahden luvun tulo\n");
        printf("<0: ohjelman lopetus\n");
        

        printf("Valitse laskutoimitus: ");
        scanf("%d", &valinta);
        

        switch (valinta) {
            case 1:
                summa();
                break;
            case 2:
                erotus();
                break;
            case 3:
                tulo();
                break;
            case 0:
                printf("Ohjelma lopetetaan...\n");
                break;
            default:
                printf("Virheellinen valinta\n");
                break;
        }
    } while (valinta > 0);

    return 0;
}


void summa() {
    int luku1, luku2, tulos;
    

    printf("Syötä ensimmäinen luku: ");
    scanf("%d", &luku1);
    printf("Syötä toinen luku: ");
    scanf("%d", &luku2);
    

    tulos = luku1 + luku2;
    printf("%d + %d = %d\n\n", luku1, luku2, tulos);
}


void erotus() {
    int luku1, luku2, tulos;
    

    printf("Syötä ensimmäinen luku: ");
    scanf("%d", &luku1);
    printf("Syötä toinen luku: ");
    scanf("%d", &luku2);
    

    tulos = luku1 - luku2;
    printf("%d - %d = %d\n\n", luku1, luku2, tulos);
}


void tulo() {
    int luku1, luku2, tulos;
    

    printf("Syötä ensimmäinen luku: ");
    scanf("%d", &luku1);
    printf("Syötä toinen luku: ");
    scanf("%d", &luku2);
    

    tulos = luku1 * luku2;
    printf("%d * %d = %d\n\n", luku1, luku2, tulos);
}