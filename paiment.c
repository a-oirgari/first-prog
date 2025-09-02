//Question 7
#include<stdio.h>

int calcul_vingts(float montant);
int calcul_dix(float montant);
int calcul_cinqs(float montant);
int calcul_pennies(float montant);

int main()
{
    float montant;
    printf("Entrez un montant en dollars :\t");
    scanf("%f",&montant);
    
    do{
        int nb_vingts = calcul_vingts(montant);
        montant = montant - nb_vingts * 20;
        printf("nombre de billets de 20$:\t%d\n", nb_vingts);

        int nb_dix = calcul_dix(montant);
        montant = montant - nb_dix * 10;
        printf("nombre de billets de 10$:\t%d\n", nb_dix);

        int nb_cinqs = calcul_cinqs(montant);
        montant = montant - nb_cinqs * 5;
        printf("nombre de billets de 5$:\t%d\n", nb_cinqs);

        int nb_pennies = calcul_pennies(montant);
        montant = montant - nb_pennies * 1;
        printf("nombre de billets de 1$:\t%d\n", nb_pennies);
    }while(montant >= 1);

    return 0;
}

int calcul_vingts(float montant)
{
    int nb_vingts = 0;
    while (montant >= 20)
    {
        nb_vingts++;
        montant = montant - 20;
    }
    return nb_vingts;
}
int calcul_dix(float montant)
{
    int nb_dix = 0;
    while (montant >= 10)
    {
        nb_dix++;
        montant = montant - 10;
    }
    return nb_dix;
}
int calcul_cinqs(float montant)
{
    int nb_cinqs = 0;
    while (montant >= 5)
    {
        nb_cinqs++;
        montant = montant - 5;
    }
    return nb_cinqs;
}
int calcul_pennies(float montant)
{
    int nb_pennies = 0;
    while (montant >= 1)
    {
        nb_pennies++;
        montant = montant - 1;
    }
    return nb_pennies;
}

    