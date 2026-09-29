#include<stdio.h>

int main()
{
    unsigned char byte = 115;
    // Averiguar si el 5to bit esta prendido o apagado
    if((byte >> 5) & 1)
    {
        printf("El 5to bit esta prendido\n");
    }
    else
    {
        printf("El 5to bit esta apagado\n");
    }
}
