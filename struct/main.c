#include <stdio.h>
#include <stdlib.h>
#include "main.h" // Inclusion du .h qui contient les prototypes et structures

int main()
{
    Calculer moncalc;
    Calculer *pointeur = &moncalc;
    pointeur->x = 10;



    printf("%d %d\n", pointeur->x);
    return 0;
}

void calculer(Calculer *calc) {

   calc->x = 0;
    calc->y =0;
}
