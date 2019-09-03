
#include "Vectores.h"

 void cargarVector(int vector[], int tam)
    {
        int i;
        printf("\t CARGAR DATOS:\n");
                     for(i=0; i<tam;i++){  //carga secuencial del dato, lo comento porque ya se que funciona, lo que hago es harcodear para no perder tiempo en la carga de datos
                        printf("ingrese un numero para el lugar %d:", i);
                        scanf("%d", &vector[i]);
                    }


    }

    void mostrarMaximo(int vector[], int tam)
    {

              int maximo;
              int i;
              maximo = calcularMaximo(vector,tam);
                printf("\n\n\tMUESTRO EL MAXIMO Y LA POSICION EN CUAL ESTA \n");


                        printf("\nEl numero maximo es %d y su posicion es:",maximo);
                        for(i=0; i<tam; i++){
                                if(maximo==vector[i]){
                                    printf("%d-",i);
                                }
                        }

    }

    int  calcularMaximo(int vector[],int tam)
    {
        int flag = 0;
              int maximo;
              int i;
                        for(i=0;i<tam;i++){

                            if(maximo<vector[i] || flag==0){
                                maximo = vector[i];

                            }
                        }
        return maximo;
    }

void ordenarVector(int vector[], int tam) //for anidado uno adentro de otro
{
    int i;
    int j;
    int aux;

    for(i=0; i<tam-1; i++)//mecanica para mover elementos del vector
    {
            for(j=i+1;j<tam;j++)
            {
                if(vector[i>vector[j]) //criterio de comparacion,
                    {
                        aux = vector[i];
                        vector[i]=vector[j];
                        vector[j]=aux;

                    }
            }
    }

}
