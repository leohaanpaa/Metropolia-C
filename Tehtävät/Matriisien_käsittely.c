#include <stdio.h> 

int main() 
{ 
	int matriisi[5][5] = {
		{4, 6, 25, 88, 5},
		{34, 5, 300, 4, 65},
		{78, 43, 11, 90, 125},
		{98, 585, 12, 63, 21},
		{45, 35, 9, 5, 1}
	};  

	int summa_matriisi[5][5];
	int y, x;
	int sum = 0;
	
	printf("Taulukon:\n");

	for(y = 0; y < 5; y++) { 
		for(x = 0; x < 5; x++) { 
			summa_matriisi[y][x] = matriisi[y][x];

			sum += matriisi[y][x];
			
			
			if(x == 4) { 
				printf("%d", summa_matriisi[y][x]);
			} else { 
				printf("%d ", summa_matriisi[y][x]);
			}  
		} 
		printf("\n");
	} 


	printf("\n\nalkioiden summa on %d\n", sum);

	return 0;
}
