#include <stdio.h>

int main() {
    int valinta;
    float luku1, luku2, tulos;

    printf("1: vähennyslasku\n");
    printf("2: yhteenlasku\n");
    printf("3: kertolasku\n");

    printf("Valitse toiminto:");
    scanf("%d", &valinta);

    printf("Anna eka luku:");
    scanf("%f", &luku1);
    printf("Anna toka luku:");
    scanf("%f", &luku2);

    switch (valinta)
    {
        case 1:
            tulos = luku1 - luku2;
            printf("%.f - %.f = %.f\n", luku1, luku2, tulos);
            break;
        case 2:
            tulos = luku1 + luku2;
            printf("%.f + %.f = %.f\n", luku1, luku2, tulos);
            break;
        case 3:
            tulos = luku1 * luku2;
            printf("%.f * %.f = %.f\n", luku1, luku2, tulos);
            break;
        default:
            printf("Virheellinen valinta.\n");
            break;
    }
    return 0;
}