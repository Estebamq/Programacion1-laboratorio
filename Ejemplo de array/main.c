
#include <stdlib.h>
#include "Vectores.h"
#define T 10 // define lo uso para definir constantes globales, para no tener que modificar el tamaño del vector solo modifico T y cambio el Tamaño. no ocupa espacio en memoria

//int const T = 10; // ocupa lugar en la memoria, en cambio define lo que hace se carga en el precompilador, son constantes;




int main()
{
    //int vectordenumeros[10];//defino array(vector),[]los corchetes indican que lo que le estoy dando es una direccion,
    int vectordenumeros[T];//={8,7,1,3,9,-8,5,9,-1,11}; //los vectores se pueden inicializar por extension(estaria harcodeando, porque estoy ingresando el dato para probar)
    //int vectordenumeros[10]={}; //si esta {} vacio estamos inicializando en cero el vector,
    //numero = 0;//incializo en cero
    int i;
    int contadorneg=0;
    int numPos=0;
    float promedio;
    int minimo;
    int flag;
    int opcion;


    do{
            printf("1. Cargar numeros\n");
            printf("2. Mostrar todo\n");
            printf("3. Mostrar negativos\n");
            printf("4. Mostra promedio de positivos\n");
            printf("5. Mostrar maximo\n");
            printf("6. Mostrar Minino\n");
            printf("7. Salir\n");
            printf("Elija una opcion: ");
            scanf("%d", &opcion);

            switch(opcion){
                case 1:

                    cargarVector(vectordenumeros,T);// las variables de los vectores se pasan solo con el nombre, no llevan []
                    break;

                case 2:
                     printf("\n\tMUESTRO LOS NUMEROS CARGADOS\n");
                    for(i=0; i<T;i++){//muestro todos los numeros que cargue
                        printf(" %d\n",vectordenumeros[i]);
                    }
                    break;
                case 3:
                    printf("\n\tMUESTRO LOS NUMEROS NEGATIVOS\n");
                    for(i=0; i<T;i++){//muestra solo los negativos
                        if(vectordenumeros[i]<0){
                            printf("\n%d",vectordenumeros[i]);
                        }
                    }
                    break;
                case 4:
                     printf("\n\n\tMUESTRO EL PROMEDIO DE LOS NUMEROS POSITIVOS\n");
                     for(i=0;i<T;i++){
                        if(vectordenumeros[i]>=0){
                            numPos += vectordenumeros[i];
                            contadorneg++;
                        }

                    }
                    promedio = (float)numPos/contadorneg;
                    printf("\n\nEl promedio de numero positivo es: %.2f \n\n", promedio);

                    break;
                case 5:
                        mostrarMaximo(vectordenumeros,T);
                        break;

                case 6:

                    printf("\n\n\tMUESTRO EL MINIMO Y LA POSICION EN CUAL ESTA \n");
                    flag = 0;
                    for(i=0;i<T;i++){
                        if(minimo>vectordenumeros[i]|| flag==0){
                            minimo = vectordenumeros[i];
                            flag=1;
                        }
                    }

                     printf("\nEl numero minimo es %d y su posicion es %d\n",minimo);
                            for(i=0; i<T; i++){
                                if(minimo==vectordenumeros[i]){
                                    printf("%d-",i);
                                }

                            }
                        break;

                }

                system("pause");
                system("cls");

    }while(opcion!=7);


    return 0;
}




