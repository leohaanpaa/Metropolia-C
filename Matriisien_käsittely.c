#include <stdio.h> 

int main() 
{ 
	// Initialize the 5x5 matrix with predefined values
	int matriisi[5][5] = {
		{4, 6, 25, 88, 5},
		{34, 5, 300, 4, 65},
		{78, 43, 11, 90, 125},
		{98, 585, 12, 63, 21},
		{45, 35, 9, 5, 1}
	};  

	// Define a matrix to store the sum of each element (copy of the original matrix in this case)
	int summa_matriisi[5][5]; 
	int y, x;  // Loop control variables for rows and columns
	int sum = 0;  // Variable to store the total sum of all elements
	
	printf("Taulukon:\n");

	// Iterate through each row
	for(y = 0; y < 5; y++) { 
		// Iterate through each column within the current row
		for(x = 0; x < 5; x++) { 
			// Copy each element from matriisi to summa_matriisi
			summa_matriisi[y][x] = matriisi[y][x];

			// Add the element's value to the total sum
			sum += matriisi[y][x];
			
			// Print the element with a space or newline based on its position in the row
			if(x == 4) { 
				printf("%d", summa_matriisi[y][x]);  // Last element in the row: no space after it
			} else { 
				printf("%d ", summa_matriisi[y][x]);  // Print element with a trailing space
			}  
		} 
		printf("\n");  // Move to the next line after each row
	} 

	// Print the total sum of all elements in the matrix
	printf("\n\nalkioiden summa on %d\n", sum);

	return 0;
}
