#include <stdio.h>
#include <stdlib.h>
#define TAIILE_MAX 100
#define PHRASE() printf("SALUT LES FILLE")

int main()
{
    /*char lettre[6];
    lettre[0] = 'S';
    lettre[1] = 'A';
    lettre[2] = 'L';
    lettre[3] = 'U';
    lettre[4] = 'T';
    lettre[5] = '\0';
    char mot[] = "Rebecca";
    printf("%s %s\n", lettre, mot);
    */
/*
    char prenom[100];

    printf("Comment vous vous appelez ? ");
    scanf("%s", prenom);
    printf("Je me nomme %s.", prenom);

    */
    char phrase1[TAIILE_MAX] = "Salut monsieur ", phrase2[] = "Annick";

    strcat(phrase1, phrase2);

    printf("%s \n", phrase1);
    PHRASE();
    return 0;
}
