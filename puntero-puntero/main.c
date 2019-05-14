#include <stdio.h>
#include <stdlib.h>

int main()
{   /**int a=100;
    int* punteroInt;
    int** punteroPuntero;
    punteroInt=&a;
    punteroPuntero=&punteroInt;
    printf("%d",**punteroPuntero);*/

    int i,vec[3]={4,5,6};
     int* vecPuntero;
    vecPuntero=vec;
/** printf("%d",vecPuntero[0]);*/
  for(i=0;i<3;i++){
    printf("%d",*(vecPuntero+i));

      }


    return 0;
}
