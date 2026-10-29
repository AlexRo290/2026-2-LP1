#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *clonar(const char *origen)
{
    if (origen == NULL) return NULL;

    size_t bytes = strlen(origen) + 1;  
    char *copia = (char *)malloc(bytes);
    if (copia == NULL) return NULL;

    strcpy(copia, origen);
    return copia;
}

int comparar(const char *a, const char *b)
{
    if (a == NULL || b == NULL) return 0;
   
    const unsigned char *x = (const unsigned char *)a;
    const unsigned char *y = (const unsigned char *)b;

    while (*x != '\0' && *x == *y) {
        x++;
        y++;
    }

    if (*x < *y) return -1;

    if (*x > *y) return  1;

    return 0;
}

int main(void)
{
    char buf1[128], buf2[128];

    printf("Cadena 1: ");
    
    if (fgets(buf1, sizeof(buf1), stdin) == NULL) return 1;
    buf1[strcspn(buf1, "\n")] = '\0';

    printf("Cadena 2: ");

    if (fgets(buf2, sizeof(buf2), stdin) == NULL) return 1;
    buf2[strcspn(buf2, "\n")] = '\0';

    char *clon1 = clonar(buf1);
    char *clon2 = clonar(buf2);

    if (clon1 == NULL || clon2 == NULL) {
        fprintf(stderr, "No se pudo reservar memoria\n");
        free(clon1);         
        free(clon2);
        return 1;
    }

    printf("clonar(cadena1) = \"%s\" (%zu bytes reservados)\n",clon1, strlen(clon1) + 1);
    printf("clonar(cadena2) = \"%s\" (%zu bytes reservados)\n",clon2, strlen(clon2) + 1);

    printf("comparar(\"%s\", \"%s\") = %d\n",
           clon1, clon2, comparar(clon1, clon2));

  
    char *nulo = clonar(NULL);
    printf("clonar(NULL) = %p\n", (void *)nulo);

    free(clon1);
    clon1 = NULL;
    free(clon2);
    clon2 = NULL;

    printf("Tras liberar:\nclon1 = %p, clon2 = %p\n",(void *)clon1, (void *)clon2);


    return 0;
}
