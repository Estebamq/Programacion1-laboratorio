#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Dinero;
    char tipo; // P,D,L,B
    int max;
    int Dolares;
    int flag=0;
    int i;
    float promediodepesos;
    int pesos=0;
    int contadordepesos=0;
    float porcentajepesos;


    for(i=0;i<5;i++){
     printf("ingrese cantidad de dinero: ");
     scanf("%d", &Dinero );

     printf("Ingrese el tipo de moneda:");
     fflush(stdin);
     scanf("%c", &tipo);
     while(tipo!= 'd'&& tipo!='p'&& tipo!='l'&& tipo!= 'b'){
       printf("Error, reingrese el tipo de moneda:");
       fflush(stdin); //se usa para limpiar el dato que queda en la memoria "/n"
       scanf("%c", &tipo);
     }

     if(tipo == 'd'){
        if(max<Dinero || flag == 0){
            max=Dinero;
            flag=1;

        }
      }

      if(tipo =='p'){
        pesos += Dinero;
        contadordepesos++;
      }

     }
   if(flag==1){
   printf(" El mayor importe en dolares es: %d ", max);
   }else{
    printf("No se a ingresado dolares");
   }

   if(contadordepesos!= 0){

   promediodepesos = (float)pesos/contadordepesos; //casteo explicito (float)pesos, porque estamos explicitando que una variable cambie, casteo implicito " int x=7; float y; y=x.
   printf("\n El promedio de pesos es: %f", promediodepesos);
   porcentajepesos = ((float)contadordepesos)/5*100;
   printf("\n El porcentaje total de la cantidad de pesos es: %f ",porcentajepesos);

   }else{
    printf("\n No se ingresaron pesos para el promedio y el porcentaje");
   }




}
/* realizar un programa que pida 5 ingresos de dinero, el mayor importe en dolares.

    Dinero    Valor
    Peso(P)     505
    Libras(L)    50
    Dolar (D)  -500
    Bitcoin (B)  88
    Peso(P)     100*

    windows fflush(stdin)
    linux    serbuff */
