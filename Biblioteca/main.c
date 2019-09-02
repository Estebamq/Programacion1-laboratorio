#include <stdio.h>
#include <stdlib.h>
#include "INPUTS.h"


int main()
{
    int edad=7;
    int numero;
    int nota;


    getInt(&edad, "Ingrese su edad:", 10, 50);//puede poner el mensaje adentro de getInt("mensaje")
    printf("Ud tiene: %d años", edad);

    getInt(&nota, "Ingrese una nota:",1,10);
    printf("Ud saco: %d ", nota);


    return 0;
}


