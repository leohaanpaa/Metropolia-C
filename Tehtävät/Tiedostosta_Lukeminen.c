#include <stdio.h>

int main(void) {
    FILE *tied_kahv;
    int luku1, luku2, luku3, luku4, sum;

    // Open the file for reading
    if ((tied_kahv = fopen("luvut.s", "r")) == NULL) {
        printf("Tiedostoa ei löydetty!\n");
        return 0;
    } else {
        // Read the four integers separated by spaces
        if (fscanf(tied_kahv, "%d %d %d %d", &luku1, &luku2, &luku3, &luku4) != 4) {
            printf("Virhe lukuja luettaessa!\n");
            fclose(tied_kahv);
            return 1;
        }
        fclose(tied_kahv);

        // Output the values and their sum
        printf("Tiedostosta luvut.s löytyneet luvut: \n%d, %d, %d ja %d\n", luku1, luku2, luku3, luku4);
        sum = luku1 + luku2 + luku3 + luku4;
        printf("\nLukujen summa: %d\n", sum);
    }
    return 0;
}
