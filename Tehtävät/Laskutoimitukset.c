#include <stdio.h>

int main()
{
    int luku_1;
    int luku_2;

    printf("Anna eka luku: ");
    scanf("%d", &luku_1);

    printf("ANna toka luku: ");
    scanf("%d", &luku_2);

    printf("%d + %d = %d\n", luku_1, luku_2, luku_1 + luku_2);
    printf("%d - %d = %d\n", luku_1, luku_2, luku_1 - luku_2);
    printf("%d * %d = %d\n", luku_1, luku_2, luku_1 * luku_2);
    return 0;
}