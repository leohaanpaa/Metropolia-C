#include <stdio.h>

int main() 
{
	char kahvi;
	char vastaus;


	printf("Juotko kahvia (k / e): ");
	kahvi = getchar();
	getchar();


	if (kahvi == 'k' || kahvi == 'K') {	
		printf("Laitatko kahviin maitoa? (k / e): ");
		vastaus = getchar();
		getchar();
		if (vastaus == 'k' || vastaus == 'K')
			printf("Pidät siis maitokahvista.\n");
		else if (vastaus == 'e' || vastaus == 'E')
			printf("Juot kahvisi sellaisenaan.\n");
		else
			printf("vastaisitko kyllä tai ei?\n", vastaus);
	} else if (kahvi == 'e' || kahvi == 'E') {
		printf("Juotko mieluummin teetä? (k / e)");
		vastaus = getchar();
		getchar();
		if (vastaus == 'k' || vastaus == 'K')
			printf("Juot siis teetä!\n");
		else if (vastaus == 'e' || vastaus == 'E') {
			printf("Juotko sitten mehua? (k / e)");
			vastaus = getchar();
			getchar();
			if (vastaus == 'k' || vastaus == 'K')
				printf("Juot siis mehua!\n");
			else if (vastaus == 'e' || vastaus == 'E')
				printf("Juot varmaankin vettä.\n");
			else
				printf("Vastauksesi hämmentää minua.\n");

		} else {
			printf("Vastaisitko oikein.\n");
		}
	} else
		printf("Älä viitsi vastata väärin.");

	return 0;
}

/* 
Mikä on if-lause?
if(lauseke1)
    lause1
else if(lauseke2)
    lause2
else
    lause3
*/

/*
switch-lauseen muoto

switch (lauseke){
   case vakio1:
      lausejoukko1
      break;
   case vakio2:
      lausejoukko2
      break;
   .
   .
   .
   default:
      lausejoukkoN
      break;
}*/