#include <stdio.h>

int main()
{
	int kokonaisluku;
	float desimaaliluku;
	
	printf("Anna kokonaisluku: ");
	scanf("%d", &kokonaisluku);
	
	printf("Anna desimaaliluku: ");
	scanf("%f", &desimaaliluku);
	
	printf("Syottamasi kokonaisluku: %d\n Syottamasi desimaaliluku kahden desimaalin tarkkuudella: %.2f\n",
		   kokonaisluku, desimaaliluku);
	return 0;
}