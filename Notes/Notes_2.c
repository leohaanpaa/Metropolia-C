#include <stdio.h>
/*
int main()
{
	int luku, luku2;

	printf("Syötä jokin kokonaisluku: ");
	scanf("%d", &luku);

	luku2 = luku;
	printf("Muuttujan \"luku\" arvo on %d ja muuttuja \"luku2\" arvo on %d\n", luku, luku2);
	
	//huomaa seuraavassa ++ -operaattorin käyttö 
	printf("Arvot nyt: \"luku\" == %d ja \"luku2\" == %d\n", ++luku, luku2++);

	printf("ja nyt \"luku\" == %d ja \"luku2\" == %d\n", luku, luku2);
	return 0;
}
*/
/*
Operaattori	Symboli	Toiminto	Esimerkki
Yhteenlasku	+	Laskee yhteen kaksi operandia	x + y
Vähennyslasku	-	Vähentää operandin toisesta	x - y
Kertolasku	*	Kertoo kaksi operandia keskenään	x * y
Jakolasku	/	Jakaa operandin toisella	x / y
Jakojäännös	%	Laskee kahden operandin jakolaskun jakojäännöksen	x % y



Operaattori	Prioriteetti
++, --	1
*, /, %	2
+, -	3

Operaattori	Symboli	Kysymys	Esimerkki
Suurempi kuin	>	Onko operandi1 suurempi kuin operandi2	x > y
Pienempi kuin	<	Onko operandi1 pienempi kuin operandi2	x < y
Suurempi tai yhtä suuri kuin	>=	Onko operandi1 suurempi tai yhtä suuri kuin operandi2	x >= y
Pienempi tai yhtä suuri kuin	<=	Onko operandi1 pienempi tai yhtä suuri kuin operandi2	x <= y
Erisuuri kuin	!=	Onko operandi1 erisuuri kuin operandi2	x != y
Yhtä suuri kuin	==	Onko operandi1 yhtä suuri kuin operandi2	x == y

Operaattori	Suhteelinen prioriteetti
<, <=, >, >=	1
!=, ==	2



Operaattori	Symboli	Esimerkki
AND	&&	vertailu1 && vertailu2
OR	||	vertailu1 || vertailu2
NOT	!	!vertailu1

peraattori	Prioriteettitaso suhteessa muihin loogisiin operaattoreihin	Prioriteettitaso suhteessa muihin operaattoreihin
!	1	Sama prioriteetti kuin operaattoreilla ++ ja --. Siis korkeampi kuin vertailuoperaattoreilla ja binäärisillä operaattoreilla.
&&	2 (korkeampi kuin OR)	Alempi kuin matemaattisilla operaattoreilla ja vertailuoperaattoreilla.
||	3	Alempi kuin matemaattisilla operaattoreilla ja vertailuoperaattoreilla.


*/

int main()
{
	printf("Seuraavissa 0 vastaa epätotta ja 1 totta.\n");
	
	printf("Väite \"412 < 6723\" on %d\n", 412 < 6723);
	printf("Väite \"412 > 6723\" on %d\n", 412 > 6723);
	
	printf("Väite \"(6 < 3) && (1 > 0)\" on %d\n", (6 < 3) && (1 > 0));
	printf("Väite \"(6 < 3) || (1 > 0)\" on %d\n", (6 < 3) || (1 > 0));
	
	return 0;
}