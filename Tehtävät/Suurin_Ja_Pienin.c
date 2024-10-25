#include <stdio.h>

int suurin(int a, int b, int c) {
	if (a >= b && a >= c) {
		return a;
	} else if (b >= a && b >= c) {
		return b;
	} else {
		return c;
	}
}

int pienin (int a, int b, int c) {
	if(a <= b && a <= c) {
		return a;
	} else if (b <= a && b <= c) {
		return b;
	} else {
		return c;
	}
}
int main() {
	int luku1, luku2, luku3;
	
	printf("Anna 1. luku: ");
	scanf("%d", &luku1);
		  
	printf("Anna 2. luku: ");
	scanf("%d", &luku2);
		  
	printf("Anna 3. luku: ");
	scanf("%d", &luku3);
	
	int suurinLuku = suurin(luku1, luku2, luku3);
	int pieninLuku = pienin(luku1, luku2, luku3);
		  
	printf("Syöttämistäsi luvuista suurin oli %d ja pienin %d.\n", suurinLuku, pieninLuku);
	
	return 0;
}