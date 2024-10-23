#include <stdio.h>

int main()
{
	int arvosana, summa = 0, count = 0;
    float keskiarvo;
	
	printf("Ohjelma laskee syötettyjen arvosanojen keskiarvon.\n");
    printf("Lopetus negatiivisella kokonaisluvulla.\n");
	
	do {
			printf("Anna arvosana (4-10):");
			scanf("%d", &arvosana);

			if (arvosana >= 4 && arvosana <= 10) {
				summa += arvosana;
				count++;
			} else if (arvosana >= 0) {
				printf("Ohjelma lopetetaan...\n");
			} 
		} 	while (arvosana >= 0);
		if (count > 0) {
			keskiarvo = (float)summa /count;
			printf("Ohjelmaan syötetty %d arvosanaa.\n", count);
			printf("Arvosanojen keskiarvo: %.2f\n", keskiarvo);
		}
		return 0;
}