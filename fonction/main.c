#include <stdio.h>
#include <stdlib.h>

/*
1.
int moncalc(int number) {

return 3*number;
}
*/

/*
2.
int nombres(number) {
    int result = number + 100;
    return result;
}
*/
double airect(double longueur, double largueur);
int main()
{
    /*
    1.
    int calc = 10, result = 0;
    result = moncalc(calc);
    printf("Le produit = %d",result);
    */
    /*
    2.
    int num = 0;
    printf("Taper un nombre : \n");
    scanf("%d", &num);

    printf("Le resultat est : %d\n", nombres(num));
    */

    airect(10.5, 20.5);
}
double airect(double longueur, double largueur)
 {
    double aire = longueur * largueur;

    printf("Aire = %f \n", aire);

}

