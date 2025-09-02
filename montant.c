#include<stdio.h>

int main()
{
    float montant;
    printf("donner le montant en dollars et en cents:\t");
    scanf("%f",&montant);
    
    printf("le montant total avec la taxe ajoutée est:\t%.1f\n", montant * 1.05f);
    return 0;
}