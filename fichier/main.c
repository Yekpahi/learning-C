#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* chiffre = NULL; // On cr�e un pointeur sur int

    chiffre = malloc(sizeof(int)); // La fonction malloc inscrit dans notre pointeur l'adresse qui a �t� reserv�e.
    if(chiffre == NULL) {
        exit(0);
    }
    printf("Quel est votre numero secret : ");
    scanf("%d",chiffre);
    printf("numero secret : %d\n", *chiffre);
     free(chiffre);
    return 0;
}
