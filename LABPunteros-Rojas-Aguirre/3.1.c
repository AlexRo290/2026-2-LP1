#include <stdio.h>


void hexdump(const void *ptr, size_t nbytes) {
    const unsigned char *p = (const unsigned char *)ptr;
    
    for (size_t i = 0; i < nbytes; i += 8) {
        
        printf("  %p: ", (void *)(p + i));
        
        
        for (size_t j = 0; j < 8; j++) {
            if (i + j < nbytes) {
                printf("%02x ", p[i + j]);
            } else {
                printf("   "); 
            }
        
            printf(" |");
        
       
            if (i + j < nbytes) {
                unsigned char c = p[i + j];
                
                    putchar(c);
            } else {
                    putchar('.');
            }
            
        }
        printf("|\n");
    }
}

int main(void) {
    
    int v[5] = {1, 2, 3, 4, 5};
    
   
    
    for (int i = 0; i < 5; i++) {
       
        printf("v[%d] = %d (0x%08x) @ %p\n", i, v[i], v[i], (void *)&v[i]);
        
        
        unsigned char *p_byte = (unsigned char *)&v[i];
        printf("  bytes: ");
        for (size_t j = 0; j < sizeof(int); j++) {
            printf("%02x ", p_byte[j]);
        }
        printf("\n");
    }

    double d = 3.14;
    printf("double d = %.2f @ %p\n", d, (void *)&d);
   
    
    unsigned char *p_double = (unsigned char *)&d;
    printf("  bytes: ");
    for (size_t j = 0; j < sizeof(double); j++) {
        printf("%02x ", p_double[j]);
    }
    printf("\n\n");

    
    printf("=== Bonus: Hexdump del Arreglo v ===\n");
    hexdump(v, sizeof(v));

    printf("\n=== Bonus: Hexdump de la variable d ===\n");
    hexdump(&d, sizeof(d));

    printf("\n=== Visualizador de Memoria para double ===\n");
    hexdump(&d, sizeof(d));


    return 0;
}