#include  <stdio.h>

int main()
{
    float markkamaara;
    float kerroin;
    float euro;

    printf("Syötä jokin markkamäärä: ");
    scanf("%f", &markkamaara);   

    kerroin = 5.94573;
    euro = markkamaara / kerroin;

    printf("Markat euroina: %.2f", euro);
    return 0;
}