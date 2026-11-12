#include <stdio.h> 

enum Estado {
    REGISTRADO,
    PAGADO,
    COMPLETADO,
    ENTREGADO,
    CANCELADO
};

struct Pedido {
    int numero;
    float precio;
    enum Estado estado;
};

int main() {
    struct Pedido p = {
        1001,
        250.50f,
        COMPLETADO
    };

    printf("pedido : %d\n", p.numero);
    switch (p.estado) {
        case REGISTRADO:
            printf("estado : REGISTRADO\n");
            break;

        case PAGADO:
            printf("estado : PAGADO\n");
            break;

        case COMPLETADO:
            printf("estado : COMPLETADO\n");
            break;

        case ENTREGADO:
            printf("estado : ENTREGADO\n");
            break;

        case CANCELADO:
            printf("estado : CANCELADO\n");
            break;

        default:
            printf("estado : DESCONOCIDO\n");
            break;
    } 

    return 0;
}