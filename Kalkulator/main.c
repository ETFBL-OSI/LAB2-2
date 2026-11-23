#include <stdio.h>
#include "operacije.h"
int main()
{
    double a,b;
    int opcija=-1;
    while(opcija!=0)
    {
        printf("Kalkulator\n");
        printf("----------\n");
        printf("1) Sabiranje\n");
        printf("2) Oduzimanje\n");
        printf("3) Mnozenje\n");
        printf("4) Dijeljenje\n");
        printf("----------\n");
        printf("Odabir opcije: ");
        scanf("%d",&opcija);
        switch(opcija)
        {
            case 0:
                break;
            case 1:
                printf("Vrijednosti operanada a i b: ");
                scanf("%lf",&a);
                scanf("%lf",&b);
                printf("Rezultat je: %lf",saberi(a,b));
            case 2:
                printf("Vrijednosti operanada a i b: ");
                scanf("%lf",&a);
                scanf("%lf",&b);
                printf("Rezultat je: %lf",oduzmi(a,b));
            case 3:
                printf("Vrijednosti operanada a i b: ");
                scanf("%lf",&a);
                scanf("%lf",&b);
                printf("Rezultat je: %lf",pomnozi(a,b));
            case 4:
                printf("Vrijednosti operanada a i b: ");
                scanf("%lf",&a);
                scanf("%lf",&b);
                printf("Rezultat je: %lf",podijeli(a,b));
            default:
                printf("Pogresna opcija.\n");
        }
    }
    return 0;
}
