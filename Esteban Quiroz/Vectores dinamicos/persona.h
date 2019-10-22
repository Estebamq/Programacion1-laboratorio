#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char sexo;
    float altura;
}ePersona;

ePersona* new_Persona();// Contructor por defecto
ePersona* new_Persona_Parametros(int,char,float);// Contructor parametrizados,parametros inicializados

//geter funcion que me devuelve el campo de una estructura
//seter funcion que escribe
void setLegajo(ePersona*,int);
int getLegajo(ePersona*);
void delete_Persona(ePersona*);
void mostrarPersona(ePersona*);

