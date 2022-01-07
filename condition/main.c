#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*int age = -2;

   if(age>=18) {
    printf("Vous etes majeur");
   } else if(age < 0) {
   printf("Vous n'etes pas encore né");
   }
   else {
       printf("Vous etes mineur");
   }
   */

   //Switch

   int note = 0;
   int menu;
   printf("1: riz sauce graine!\n");
   printf("2: riz sauce arachide!\n");
   printf("3: riz sauce aubergine!!\n");

   printf("choisissez un menu: ");
   scanf("%d", &menu);

    switch (menu) {
    case 1 :
    printf("Vous avez choisi le menu 1: riz sauce graine!\n");
    break;
    case 2 :
    printf("Vous avez choisi le menu 2: riz sauce arachide!\n");
    break;
    case 3 :
    printf("Vous avez choisi le menu 3: riz sauce aubergine!\n");
    break;
    default:
        printf("Ce menu n'existe pas dans notre restaurant!\n");
    }

}
