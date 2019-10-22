#include "persona.h"
ePersona* new_Persona()
{
    ePersona* puntero;

    puntero=(ePersona*) calloc(sizeof(ePersona),1);

    return puntero;
}

ePersona* new_Persona_Parametros(int legajo,char sexo,float altura)
{
    ePersona* p = new_Persona();

    if(p!= NULL)
    {
        p -> legajo = legajo;
        p -> sexo = sexo;
        p -> altura = altura;

    }


    return p;
}
void delete_Persona(ePersona* puntero)
{
    free(puntero);
    //libera el espacio tomado para puntero, no pone el puntero en null primero tengo que liberar con free y
    //despues lo pongo en NULL.
}

void mostrarPersona(ePersona* unaPersona)
{    ePersona* puntero;
     printf("%d--%c--%f", puntero->legajo,puntero->sexo,puntero->altura);
}

void setLegajo(ePersona* unaPersona,int legajo)
{
    if(unaPersona!=NULL)//valida que la persona no este null
    {

        if(legajo>0){ //validacion si legajo es mayor a cero
        unaPersona->legajo = legajo;

        }
    }
}
int getLegajo(ePersona* )
{
    return
}
