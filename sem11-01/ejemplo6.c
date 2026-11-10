#include<stdio.h>
#include<stdlib.h>

struct nodo{
    int valor;
    struct nodo *next;
};

int main()
{
    //Def de lista
    struct nodo *lista = NULL;
    struct nodo *head = NULL;

    // primer elemnto
    lista = malloc(sizeof(struct nodo));
    
    if(lista != NULL){ // si hay espacio de memoria, poner el 1er elemento
        lista -> valor = 10;
        lista -> next = NULL;
    }else{
        printf("No hay memoria\n");
        return 1;
    }

    //2do elemento
    head = lista; // head apunta al inicio de la lista
    head -> next = malloc(sizeof(struct nodo));
    if(head -> next != NULL){ // si hay espacio de memoria, poner el 2do elemento
        head = head -> next; // head apunta al 2do elemento
        head -> valor = 100;
        head -> next = NULL;
    }else{
        printf("No hay memoria\n");
        return 1;
    }

    //3er elemento 

    head -> next = malloc(sizeof(struct nodo));
    if(head -> next != NULL){ // si hay espacio de memoria, poner el 2do elemento
        head = head -> next; // head apunta al 2do elemento
        head -> valor = 1000;
        head -> next = NULL;
    }else{
        printf("No hay memoria\n");
        return 1;
    }

    //Recorrer la lista
    head = lista;
    while(head != NULL){
        printf("Valor : %d\n", head -> valor);
        head = head -> next;
    }





    return 0;
}