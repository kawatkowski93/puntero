#include <stdio.h>
#include <stdlib.h>

void mostrarCadena(char* p);

int main (){

char *p;
char letra ='a';
char vec[10]="hola";

p=&letra;
p=vec;
mostrarCadena(vec);

return 0;
}



void mostrarCadena(char* p)
{
while(*p != '\0')
{

printf("%c",*p);
p++;
}
}

