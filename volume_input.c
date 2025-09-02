#include<stdio.h>

int main()
{
    float r;
    printf("donner le rayon de la sphère:\t");
    scanf("%f",&r);
    if (r < 0) {
        printf("le rayon ne peut pas être négatif.\n");
    }
    else {
        printf("le volume du sphère est:\t%f ",(4.0f/3.0f)*3.14*r*r*r);
    }
    return 0;
}