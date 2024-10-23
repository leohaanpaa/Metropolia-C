#include <stdio.h>

int main()
{
    int kokonaisluku;
    
    printf("Anna kokonaisluku: ");
    scanf("%d", &kokonaisluku);
    
    if (kokonaisluku % 2 == 0) {
        printf("Luku on 0\n");
    } else {
        printf("Luku on 1\n", kokonaisluku);
    }
    
    return 0;
}
