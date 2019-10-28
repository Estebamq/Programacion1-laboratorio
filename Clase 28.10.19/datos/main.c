#include <stdio.h>
#include <stdlib.h>

// hace un split, una mascara que me permita leer con fscanf
// que diferencia hay entre un parseo con un casteo, el parseo convierte con atoi una cadena a entero toma el binario y lo cambio
typedef struct
{
    int legajo;
    char nombre[50];
    char apellido[50];
    float sueldo;
}eEmpleado;

eEmpleado* new_empleado();

int main()
{
    eEmpleado* lista[50];
    eEmpleado* unEmpleado;
    FILE* pArchivo;
    int i;
    char legajo[20];
    char nombre[20];
    char apellido[20];
    char sueldo[20];

    pArchivo = fopen("datos.csv","r");



    fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);//pongo como se va a leer la linea,creo las mascaras %[^,], agrego la ultima coma para decirle que no la incluya

    while(!feof(pArchivo))
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^,],%[^\n]\n",legajo,nombre,apellido,sueldo);
        unEmpleado-> legajo = atoi(legajo);
        strcpy(unEmpleado->nombre,nombre);
        strcpy(unEmpleado->apellido,apellido);
        unEmpleado-> sueldo = atof(sueldo);
        unEmpleado = new_empleado();
        lista[i]=unEmpleado;
        i++;
    }

    fclose(pArchivo);
    for(i=0;i<50;i++)
    {
        printf("%d--%s--%s--%f\n",lista[i]->legajo,lista[i]->nombre,lista[i]->apellido,lista[i]->sueldo);
    }
    return 0;
}


eEmpleado* new_empleado()
{
    eEmpleado* p;

    p=(void*) malloc(sizeof(eEmpleado));

    return p;
}

