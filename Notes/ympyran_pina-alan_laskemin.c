#include <stdio.h> 

static float pii = 3.14159; 
 
float laske_ala(float sade);  
 
int main()     
{ 
	float ympyran_ala, ympyran_sade; 

	printf("Anna ympyrän säde: ");  
	scanf("%f", &ympyran_sade);  

	ympyran_ala = laske_ala(ympyran_sade);  
	
	printf("Ympyrän pinta-ala on: %.2f", ympyran_ala);

	return 0;  
}  

float laske_ala(float sade)  
{ 
	float pinta_ala;  

	pinta_ala = pii * sade * sade; 

	return pinta_ala;  
}