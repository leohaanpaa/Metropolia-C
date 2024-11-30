#include <stdio.h>

int main() {
	int days;
	float hours[30];
	float total_hours = 0.0, average_hours;
	
	printf("Ohjelma laskee yhteen haluamasi ajanjakson aikana\n");
	printf("tehdyt työtunnit sekä keskimääräisen työpäivän pituuden.\n\n");
	printf("Kuinka monta päivää: ");
	scanf("%d", &days);
	
	for (int i = 0; i < days; i++) {
		printf("Anna %d. päivän työtunnit: ", i + 1);
		scanf("%f", &hours[i]);
        total_hours += hours[i];
	}
	
	average_hours = total_hours / days;
	
	printf("\nTehdyt työtunnit yhteensä: %.1f\n", total_hours);
    printf("Keskimääräinen työpäivän pituus: %.1f\n", average_hours);
    printf("Syötetyt tunnit: ");
	
	for (int i = 0; i < days; i++) {
        printf("%.1f ", hours[i]);
	}
	printf("\n");
	
	return 0;
}