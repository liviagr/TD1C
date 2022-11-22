#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // initialisation des varibles
    int somme = 0;
    int erreur = 0;

    int i = 1;

    // au moins 2 arguments sont donnés
    if (argc <= 2){
            printf("Il n'y a pas assez d'arguments");
            erreur = 1;
    }

    while(erreur == 0 && i < argc){
        // si le paramètre en cours est bien un caractère
        if (atoi(argv[i]) != 0){
            somme += atoi(argv[i]);

        // erreur si l'argument est une chaine de caractère
        }else{
            printf("L'argument %s n'est pas un entier.", argv[i]);
            erreur = 1;
        }
        i++;
    }

    //affichage de la somme si pas d'erreur
    if (!erreur){
        printf("%d", somme);

    }

    return 0;
}
