#include <stdio.h>

int main()
{
    int kokonaisluku;
    
    printf("Anna kokonaisluku: ");
    scanf("%d", &kokonaisluku);
    
    if (kokonaisluku % 2 == 0) {
        printf("Luku %d on parillinen.\n", kokonaisluku);
    } else {
        printf("Luku %d on pariton.\n", kokonaisluku);
    }
    
    return 0;
}
