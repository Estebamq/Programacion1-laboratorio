#include <stdio.h>
#include <stdlib.h>
//PROTOTIPO DE LA FUNCION
int sumarnumero(int num_a, int num_b);


int main()
{
    int numero1;
    int numero2;
    int total;
    //INGRESO DE DATOS
    printf("Ingrese el primer valor para la suma: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo valor para la suma: ");
    scanf("%d", &numero2);


    //LLAMADA DE LA FUNCION
    total = sumarnumero(numero1,numero2);

    //MOSTRAR RESULTADO
    printf("La suma es: %d", total);

    return 0;


}

// DESARROLLO

int sumarnumero(int num_a,int num_b){
    int resultado;

    resultado = num_a + num_b;

    return resultado;

}
