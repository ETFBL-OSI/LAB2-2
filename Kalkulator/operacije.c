#include <stdio.h>
#include "operacije.h"
double saberi(double a, double b)
{
    return a+b;
}


double oduzmi(double a, double b)
{
    return a-b;
}


double pomnozi(double a, double b)
{
    return a*b;
}


double podijeli(double a, double b)
{
    if (b==0)
    {
        printf("Nemoguce dijeljenje sa nulom!!11!!\n");
        return 0;
    }
    else
        return a/b;
}
