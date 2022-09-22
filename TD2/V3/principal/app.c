#include "suite.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n = argc > 1 ? atoi(argv[1]) : 0; //n va recevoir soit 0 soit atoi(argv[1]) qui représente l'élément 1 écrit après l'execution de ./app.exe car argv[0] est app donc en gros si y'a un élément après ./app n prend sa valeur sinon 0
    printf("la suite de %d symbole(s) : \n", n);
    while (n-- > 0)
    {
        suite_e_suite(n);
    }
    printf("\n");
    return EXIT_SUCCESS;
}