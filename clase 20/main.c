#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main()
{

    int size = 10;
int index=0;
Persona** lista = (Persona** )malloc(sizeof(Persona * )*size);
do {
Persona persona;
(&persona->nombre)=ramiro;
persona.edad = 45;
lista[index] = &persona; // Ver explicacion sobre esta línea
index++;
if(index>=size)
{
// incrementamos el tamaño del array
size+=10;
lista = realloc(lista,sizeof(Persona*)*size);
}
}while(preguntarSalir()!='S');
    printf("Hello world!\n");
    return 0;
}
