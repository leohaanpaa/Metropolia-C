/*
Esimerkki 1.1: Kokonaislukutaulukon esittely
int taulukko[10];
taulukko[0] = 100;

printf("Taulukon ekan alkion arvo: %d", taulukko[0]);

Esimerkki 1.2: Alkioon viittaaminen muuttujan avulla

int taulukko[10];
int indeksi_muuttuja = 2;

taulukko[indeksi_muuttuja] = 100;

printf("Taulukon kolmannen alkion arvo: %d", taulukko[2]);

Esimerkki 1.3: Taulukon indeksointi

int taulukko[5];

taulukko[0] = 1;
taulukko[1] = 2;
taulukko[2] = 3;
taulukko[3] = 4;
taulukko[4] = 5;
*/
/*
//Tulostaa numerot syötetyssä järjestyksessä 5 -> 1
#include <stdio.h>

int main()
{
	int eka, toka, kolmas, neljas, viides;

	printf("Syötä eka numero: ");
	scanf("%d", &eka);

	printf("Syötä toka numero: ");
	scanf("%d", &toka);

	printf("Syötä kolmas numero: ");
	scanf("%d", &kolmas);

	printf("Syötä neljäs numero: ");
	scanf("%d", &neljas);

	printf("Syötä viides numero: ");
	scanf("%d", &viides);

	printf("Numerot käänteisenä: %d %d %d %d %d\n", viides, neljas, kolmas, toka, eka);

	return 0;
}
*/
/*
//Sama mutta jonossa on 100 lukua
#include <stdio.h>

int main()
{
	int luvut[100];
	int indeksi;

	for(indeksi=0; indeksi<100; indeksi++) {
		printf("Syötä %d. numero: ", indeksi+1);
		scanf("%d", &luvut[indeksi]);
	}

	printf("Numerot käänteisenä: ");
	
	for(indeksi=99; indeksi >= 0; indeksi--) {
		printf("%d ", luvut[indeksi]);
	}

	return 0;
*/

//Matriisien laskeminen
#include <stdio.h> 
     
int main() 
{ 
	int eka_matriisi[5][5] = { 	{2, 34, 23, 21, 58}, 
					{3, 6, 56, 2, 9}, 
					{76, 92, 2, 4, 77}, 
					{1, 45, 45, 8, 33}, 
					{99, 3, 34, 5, 78} }; 

	int toka_matriisi[5][5] = { 	{45, 3, 34, 6, 77}, 
					{2, 45, 67, 3, 2}, 
					{21, 23, 54, 67, 67}, 
					{43, 2, 45, 99, 0}, 
					{54, 76, 88, 63, 5} }; 

	int summa_matriisi[5][5]; 
	int y, x; 

	for(y = 0; y < 5; y++) { 
		for(x = 0; x < 5; x++) { 
			summa_matriisi[y][x] = eka_matriisi[y][x] + toka_matriisi[y][x]; 

			if(x == 4) { 
				printf("%d\n", summa_matriisi[y][x]); 
			} else { 
				printf("%d\t", summa_matriisi[y][x]); 
			} 
		} 
	} 
	
	return 0;
}
