#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int numero;//defino entero

    //int vectordenumeros[10];//defino array(vector),[]los corchetes indican que lo que le estoy dando es una direccion,
    int vectordenumeros[10]={8,7,1,3,9,-8,5,9,-1,11}; //los vectores se pueden inicializar por extension(estaria harcodeando, porque estoy ingresando el dato para probar)
    //int vectordenumeros[10]={}; //si esta {} vacio estamos inicializando en cero el vector,
    //numero = 0;//incializo en cero

    int i;
    int contadorneg=0;
    int numneg=0;
    float promedio;
    int maximo;
    int posmax;
    int minimo;
    int posmin;
    int flag=0;
    /*for(i=0; i<10;i++){
        vectordenumeros[i]=0;

    }*/

    /*for(i=0; i<10;i++){  //carga secuencial del dato, lo comento porque ya se que funciona, lo que hago es harcodear para no perder tiempo en la carga de datos
       printf("ingrese un numero para el lugar %d:", i);
       scanf("%d", &vectordenumeros[i]);
    }*/
     printf("\n\tMUESTRO LOS NUMEROS CARGADOS\n");
     for(i=0; i<10;i++){//muestro todos los numeros que cargue
        printf(" %d\n",vectordenumeros[i]);
     }

    printf("\n\tMUESTRO LOS NUMEROS NEGATIVOS\n");
     for(i=0; i<10;i++){//muestra solo los negativos
        if(vectordenumeros[i]<0){
        printf("\n%d",vectordenumeros[i]);
        }
     }

     for(i=0;i<10;i++){
        if(vectordenumeros[i]>=0){
            numneg += vectordenumeros[i];
            contadorneg++;
        }

     }

    printf("\n\n\tMUESTRO EL PROMEDIO DE LOS NUMEROS POSITIVOS\n");
    promedio = (float)numneg/contadorneg;
    printf("\n\nEl promedio de numero negativos es: %.2f \n\n", promedio);

    printf("\n\n\tMUESTRO EL MAXIMO Y MINIMO, Y LA POSICION EN CUAL ESTA \n");

    for(i=0;i<10;i++){

        if(maximo<vectordenumeros[i] || flag==0){
            maximo = vectordenumeros[i];
            posmax = i;
        }

        if(minimo>vectordenumeros[i]|| flag==0){
            minimo = vectordenumeros[i];
            posmin = i;
            flag=1;
        }
    }


    printf("\nEl numero maximo es %d y su posicion es %d\n",maximo,posmax);
    printf("\nEl numero minimo es %d y su posicion es %d\n",minimo,posmin);
    return 0;
}
