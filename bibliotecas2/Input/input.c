#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getInt(int* valor,char mensaje[],int minimo,int maximo)//%s me permite mostrar un mensaje un string, %c un char
{
    int retorno=0;

    printf("\n %s", mensaje);
    scanf("%d", valor);

    while(*valor<minimo || *valor>maximo)
    {
      printf("\nError,%s\a\a", mensaje);
      scanf("%d", valor);
    }

    return retorno;
}

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getFloat(float* valor,char mensaje[], float minimo, float maximo)
{
   int retorno=0;

    printf("\n %s", mensaje);
    scanf("%f", valor);

    while(!(*valor>=minimo&&*valor<=maximo))
    {
      printf("\nError,%s\a\a", mensaje);
      scanf("%f", valor);
    }


    return retorno;

}


/**
* \brief Solicita un caracter al usuario y lo valida
* \param input Se carga el caracter ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el caracter [0] si no [-1]
*
*/
/*int getChar(char* input,char message[], char a, char b, char c)
{



    return 0;
}*/


/**
* \brief Solicita una cadena de caracteres al usuario y la valida
* \param input Se carga el string ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Longitud mínima de la cadena
* \param hiLimit Longitud máxima de la cadena
* \return Si obtuvo la cadena [0] si no [-1]
*
*/
int getString(char* input,char message[], int minimo, int maximo)
{
    char producto[minimo][maximo];
    int retorno=-1;


            do {
                printf("%s: ",message);
                //fflush(stdin);
                gets(input);
            } while(!(strlen(input)>minimo && strlen(input)<maximo));
                retorno =0;
                strcpy(producto[minimo],input);
               // printf("Cadena Valida: %s",producto[minimo]);

    return retorno;
}
