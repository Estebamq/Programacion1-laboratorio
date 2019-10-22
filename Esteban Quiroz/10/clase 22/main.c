
#include "persona.h"
/*  un puntero en principio guarda la direccion de memoria de una variable, reserva espacio en la memoria tambien
    Memoria dinamica tema de hoy

    **stack (pila) hasta el momento lo guardabamos aca, tiene poca capacidad,
    en la pila no deberia guardar datos, los datos esenciales de la persona

    **M estatica
    **S codigo
    **M dinamica (Heap/Monton)

    entorno desconectado, cuando tengo todo en memoria, entorno conectado es cuando tengo que ir a buscar a archivos y busco en memoria.
    el problema es cuando busco que pierdo tiempo.
    YO NO PRODRIA hacer un "realloc" sin hacer un "malloc"

    pensemos el main como interfase de usuario, un malloc no lo veria adentro de un main,
    en el main no van los malloc los calloc, o las flechitas
    vemos todos por funciones, lo que va en el main son solo funciones.
*/



int main()
{
    ePersona* puntero= new_Persona_Parametros(1000,'M',1.98);
    setLegajo(puntero,1001);
    int x;

    //verifico que no sea NULL
    if (puntero!=NULL)
    {
        printf("La persona es:\n");
        if(getLegajo(puntero)>1000){
            mostrarPersona(puntero);


        }

    }


    puntero = NULL;
    //los lenguajes de alto nivel tiene su propio free limpian los variables, pero en c lo tenemos que hacer nosotros.
    return 0;
}

ePersona* new_Persona()
{
    epuntero* puntero;
    //puntero= (ePersona*) calloc(sizeof(ePersona)); inicializa en cero la estructura.
    puntero= (ePersona*) malloc(sizeof(ePersona));

    /*--memory allocation reserva espacio en memoria, "sizeof" tiene el espacio del peso
      --void significa ningun tipo de dato, void* significa cualquier tipo de datos(lo definimos nosotros)
      --casteo malloc programar en un entorno seguro, no pasaria nada hasta que pase, al castear defino ePersona
       siempre que tengo malloc pregunto si no me devolvio NULL*/

    if(puntero!=NULL){
        puntero ->legajo = 1000;
        puntero ->sexo='M';
        puntero ->altura=1.79;
    }

    return puntero;
}



