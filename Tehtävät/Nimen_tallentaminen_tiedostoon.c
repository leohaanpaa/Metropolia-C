#include <stdio.h>
#include <string.h>

int main()
{
    FILE *tied_kahv;
    char etunimi[16];
    char sukunimi[21];
    char tiedostonimi[13];
    
    printf("Ohjelma tallentaa etunimesi ja sukunimesi tiedostoon.\n");
    
  
    printf("Syötä etunimesi: ");
    scanf("%15s", etunimi);
    

    printf("Syötä sukunimesi: ");
    scanf("%20s", sukunimi);
    

    printf("Tiedosto johon haluat tallentaa nimesi: ");
    scanf("%12s", tiedostonimi);
    

    char *pistekohta = strchr(tiedostonimi, '.');
    if (pistekohta == NULL || pistekohta - tiedostonimi > 8 || strlen(pistekohta + 1) > 3) {
        printf("Tiedoston nimen täytyy olla muodossa max 8 merkkiä etuosassa ja 3 merkkiä loppuosassa.\n");
        return 1;
    }
    

    tied_kahv = fopen(tiedostonimi, "w");
    if (tied_kahv == NULL) {
        printf("Tiedoston avaaminen epäonnistui!\n");
        return 1;
    }
    

    fprintf(tied_kahv, "%s %s\n", etunimi, sukunimi);
    

    fclose(tied_kahv);
    
    printf("\nTallennus onnistui!");
    
    return 0;
}
