#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int valor;
    struct nodo *izq, *der;
} Nodo;

void insertar(Nodo **p, int valor) {
    if (*p == NULL) {
        *p = (Nodo *)malloc(sizeof(Nodo));
        (*p)->valor = valor;
        (*p)->izq = NULL;
        (*p)->der = NULL;
    }
    else if (valor < (*p)->valor) {
        insertar(&((*p)->izq), valor);
    }
    else {
        insertar(&((*p)->der), valor);
    }
}

int buscar(Nodo *p, int valor) {
    if (p == NULL) {
        return 0;
    }
    else if (valor == p->valor) {
        return 1;
    }
    else if (valor < p->valor) {
        return buscar(p->izq, valor);
    }
    else {
        return buscar(p->der, valor);
    }
}

void imprimir_arbol(Nodo *p) {
    if (p != NULL) {
        imprimir_arbol(p->izq);
        printf("valor : %d\n", p->valor);
        imprimir_arbol(p->der);
    }
}

void liberar_arbol(Nodo *p) {
    if (p != NULL) {
        liberar_arbol(p->izq);
        liberar_arbol(p->der);
        free(p);
    }
}

int main() {
    Nodo *ARBOL = NULL;

    insertar(&ARBOL, 10);
    insertar(&ARBOL, 12);
    insertar(&ARBOL, 7);

    imprimir_arbol(ARBOL);

    if (buscar(ARBOL, 10)) {
        printf("Se encontró el valor 10\n");
    }
    else {
        printf("No se pudo encontrar el valor 10\n");
    }

    liberar_arbol(ARBOL);
    ARBOL = NULL;

    return 0;
}