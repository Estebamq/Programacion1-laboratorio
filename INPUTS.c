/*  EJEMPLO DE DOCUMENTACION(QUE RECIBE Y QUE DEVUELVE):TAMBIEN SE USA PARA REALIZAR EL MANUAL DEL PROGRAMA
 * \brief Solicita un número al usuario y lo valida
 * \param input Se carga el numero ingresado
 * \param message Es el mensaje a ser mostrado
 * \param eMessage Es el mensaje a ser mostrado en caso de error
 * \param lowLimit Limite inferior a validar
 * \param hiLimit Limite superior a validar
 * \return Si obtuvo el numero [0] si no [-1]
 *
 */
 // EL ASTERISCO SIGNIFICA QUE ESTO PASANDO UNA DIRECCION DE MEMORIA EJEMPLO int getInt(int* input)

 /*cuando pasamos parametros a una funcion se puede hacer por valor o por referencia, por valor pasamos tipo entero, char, float
  cuando pasamos por referencia pasamos arrays y punteros




  */

#include "INPUTS.h"


int getInt(int* valor,char mensaje[],int min,int max)//%s me permite mostrar un mensaje un string, %c un char
{
    int retorno=0;

    printf("\n %s", mensaje);
    scanf("%d", valor);

    while(*valor<min || *valor>max)
    {
      printf("\nError,%s\a\a", mensaje);
      scanf("%d", valor);
    }

    return retorno;
}


