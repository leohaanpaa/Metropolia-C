#include <stdio.h>

int main (void) {

	FILE *tied_kahv;
	int luku1, luku2, luku3, luku4, sum;

	if((tied_kahv = fopen("luvut.s", "r")) == NULL) {
		printf("Tiedostoa ei löydetty!\n");
		return 0;
	} else {
		fscanf(tied_kahv, "%d, %d, %d, %d ", &luku1, &luku2, &luku3, &luku4);
		fclose(tied_kahv);
		
		printf("Tiedostosta luvut.s löytyneet luvut: \n%d, %d , %d ja %d\n", luku1, luku2, luku3, luku4);
		sum = luku1 + luku2 + luku3 + luku4;
		printf("\nLukujen summa: %d\n", sum);
		
	}
	return 0;
}