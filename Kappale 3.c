#include <stdio.h>

/*int main(){
    printf("Eka lause.\tToka lause.\nKolmas lause.\tNeljäs lause.c");
    return 0;
}*/

/* Muotoilumääre	Merkitys
%c	Tulostaa yksittäisen merkin
%d	Tulostaa etumerkillisen kokonaisluvun
%f	Tulostaa float- tai double-tyypin desimaalimuodossa
%s	Tulostaa merkkijonon.
%u	Tulostaa etumerkittömän kokonaisluvun
*/

/* Shortcut
Ei 
[printf("%d ", luku1);
printf("%d ", luku2);
printf("%d", luku3);]
Kyllä
[printf("%d %d %d", luku1, luku2, luku3);]
*/

/* Merkkiyhdistelmä	Merkitys
\"	Tulostaa lainausmerkin
\'	Tulostaa heittomerkin
\n	Tulostaa rivinvaihdon
\t	Tulostaa vaakasarkaimen
\\	Tulostaa kenoviivan
*/



int main()
{
	int kokonaisluku;
	float liukuluku;

	printf("Anna kokonaisluku: ");
	scanf("%d", &kokonaisluku);

	printf("Anna liukuluku: ");
	scanf("%f", &liukuluku);

	printf("Annoit kokonaisluvun %d ja liukuluvun %.3f\n",
	   kokonaisluku, liukuluku);
	return 0;
}