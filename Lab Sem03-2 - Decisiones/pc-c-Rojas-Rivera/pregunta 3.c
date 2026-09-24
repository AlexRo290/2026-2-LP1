#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int c = 0;
    int longitud_total = 0,longitud_actual = 0,longitud_maxima = 0;

    int vocales = 0;
    int consonantes = 0;
    int digitos = 0;
    int espacios = 0;
    int otros = 0;

    int palabras = 0;

    int en_palabra = 0; 

    while ((c = getchar()) != '\n' && c != EOF) {
        longitud_total++;

       
        unsigned char uc = (unsigned char)c;

        if (isalpha(uc)) {
            char minuscula = (char)tolower(uc);
            if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' || 
                minuscula == 'o' || minuscula == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        } else if (isdigit(uc)) {
            digitos++;
        } else if (uc == ' ' || uc == '\t') {
            espacios++;/
        } else if (uc != '\r') { 
            otros++;
        }

        
        if (isalnum(uc)) { 
            if (!en_palabra) {
                en_palabra = 1;
                palabras++;
            }
            longitud_actual++;
            if (longitud_actual > longitud_maxima) {
                longitud_maxima = longitud_actual;
            }
        } else {
            if (en_palabra) {
                en_palabra = 0;
                longitud_actual = 0;
            }
        }
    }

   
    if (longitud_total == 0) {
        printf("texto vacio\n");
        return 0;
    }

   
    printf("=== REPORTE LEXICO ===\n");
    printf("Longitud total   : %d\n", longitud_total);
    printf("Vocales          : %d\n", vocales);
    printf("Consonantes      : %d\n", consonantes);
    printf("Digitos          : %d\n", digitos);
    printf("Espacios         : %d\n", espacios);
    printf("Otros            : %d\n", otros);
    printf("Palabras         : %d\n", palabras);
    printf("Palabra mas larga: %d\n", longitud_maxima);

    return 0;
}