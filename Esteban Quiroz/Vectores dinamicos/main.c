#include <stdio.h>
#include <stdlib.h>

/* el puntero pesa lo que pesa un entero 4 byte aritmetica de puntero, las direccione crecen de 4 en 4
*/
int main()
{
    int* pVec;
    int* aux;
    int i;
    //int vector[5]; // reserva de memoria en la pila stack, variable estatica, no tengo posibilidad que cresca en cantida de memoria
    /*pVec = (int*)malloc(sizeof(int)*5);//reserva de memoria en el heap, dinamico

    for(i=0; i<5; i++)
    {
        //*(pVec+i) = i+1;// *() me devuelve el valor

        printf("ingrese  un numero: ");
        scanf("%d",pVec+i);//cuando paso pVec+i voy pasando las direcciones de memoria
    }*/
    pVec = (int*) calloc(sizeof(int),5); // calloc inicializa en cero el vector.

    for(i=0; i<5; i++)
        {
            printf("%d\n",*(pVec+i));
        }
    /// EXPANDIR EL TAMAÑO EN MEMORIA, EL TAMAÑO DEL VECTOR CRECE 5 MAS
    printf("Agrego 5 mas\n");
    aux= (int*) realloc(pVec, sizeof(int)*10); // reubica un vector
    if(aux!=NULL)
        {
            pVec= aux;
            for(i=5; i<10; i++)
            {
                //*(pVec+i) = i+1;// *() me devuelve el valor

                printf("ingrese  un numero: ");
                scanf("%d",pVec+i);//cuando paso pVec+i voy pasando las direcciones de memoria
            }

        }

    for(i=0; i<10; i++)
    {
        printf("%d\n",*(pVec+i));
    }

    ///DISMINUYE EL TAMAÑO EN MEMORIA, DISMINUYE EN 4 EL VECTOR
    pVec= (int*) realloc(pVec, sizeof(int)*4);
    for(i=0; i<10; i++)
    {
        printf("%d\n",*(pVec+i));
    }


    return 0;
}
