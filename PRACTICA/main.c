#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <string.h>

int main()
{

    int aux;
    ArrayList *lista;
    lista=al_newArrayList();

    ePersona* e1;
    e1=(ePersona*)malloc(sizeof(ePersona));
    strcpy(e1->nombre,"Nicolas");
    e1->edad=20;

    ePersona* e2;
    e1=(ePersona*)malloc(sizeof(ePersona));
    strcpy(e1->nombre,"aaaas");
    e1->edad=20;

    ePersona* e3;
    e1=(ePersona*)malloc(sizeof(ePersona));
    strcpy(e1->nombre,"Nasdas");
    e1->edad=20;

    ePersona* e4;
    e1=(ePersona*)malloc(sizeof(ePersona));
    strcpy(e1->nombre,"asdas");
    e1->edad=20;

    al_add(lista,e1);
    al_add(lista,e2);
    al_add(lista,e3);
    al_add(lista,e4);

    al_remove(lista,2);

    aux=al_len(lista);
    printf("%d",aux);

    return 0;
}
