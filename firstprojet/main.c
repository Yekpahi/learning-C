#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbrvie = 100;
    int niveau = 0;
    printf("Quel est votre niveau ?");
    scanf("%d", &niveau);
    printf("Il vous reste %d vies maintenant  et votre niveau des de %d\n", nbrvie, niveau);
    return 0;
}
