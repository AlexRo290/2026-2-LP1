#include <stdio.h>
int main() {
    FILE *archivo;
    char linea[100];
    archivo = fopen("datos.txt", "r");

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    char  *esNulo;
    do {
        printf("%s", linea);
        esNulo = fgets(linea, sizeof(linea), archivo);
       
    }while ( esNulo != NULL);
    
    fclose(archivo);
    return 0;
}
