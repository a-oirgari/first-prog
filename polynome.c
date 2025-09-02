#include<stdio.h>


int main()
{
    float x, y;
    printf("donner la valeur de x:\t");
    scanf("%f",&x);
    y = 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6;
    printf("le polynome est:\t%.2f\n", y);
    return 0;
}