#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.bin (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.bin (modo binario).
    10. Salir
*****************************************************/


int main()
{
    //int option = 0;
    LinkedList* listaEmpleados = ll_newLinkedList();
    Employee* e1=employee_newParametros("3","Maria","10","5000");
    Employee* e2=employee_newParametros("2","Carlos","15","6500");
    Employee* e3=employee_newParametros("6","Jose","12","6000");
    Employee* e4=employee_newParametros("10","Juan","20","500");




    ll_add(listaEmpleados,e1);
    ll_add(listaEmpleados,e2);
    ll_add(listaEmpleados,e3);
    //ll_add(listaEmpleados,e4);
    ll_push(listaEmpleados,1,e4);
    ll_sort(listaEmpleados,compararPorLegajo,0);
    int len;
    Employee* aux;
    int x;
    len=ll_len(listaEmpleados);

    for(x=0;x<len;x++)
    {
        aux=(Employee*)ll_get(listaEmpleados,x);
        mostrarEmpleado(aux);
    }

    /*
    printf("\n\n");
    LinkedList* listaAux = ll_subList(listaEmpleados,0,2);
    for(x=0;x<len;x++)
    {
        aux=(Employee*)ll_get(listaAux,x);
        mostrarEmpleado(aux);
    }*/
    return 0;
}
