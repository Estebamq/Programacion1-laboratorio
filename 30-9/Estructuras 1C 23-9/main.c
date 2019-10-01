#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5

int main()
{
    eAlumno listaDeAlumnos[A];
    eLocalidad listaLocalidades[3]={{1,"Avellaneda",1870},{2,"Wilde",1872},{3,"Lomas de Zamora",1700}};
    int i;
    /*for(i=0;i<3;i++)
    {
        printf("%d - %s - %d\n", listaLocalidades[i].idLocalidad,listaLocalidades[i].localidad,listaLocalidades[i].codigoPostal);
    }*/


    int respuesta;
    int opcion;
    for(i=0; i<A; i++)
    {
        listaDeAlumnos[i].estado=LIBRE;
    }

    hardCodearAlumnos(listaDeAlumnos,A);

    do
    {
        printf("\n1.Cargar\n2.Mostrar\n3.Ordenar\n4.Eliminar\n5.Modificar\n6.Mostrar todas las localidades disponibles\n7.Mostrar alumnos por localidades\n8.Mostrar los Alumnos de Avellaneda\n9.Mostrar Localidades con menos Alumnos\n10.Salir");
        printf("\nElija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarListadoAlumnos(listaDeAlumnos,A);

            break;
        case 2:
            mostrarAlumnoPorLocalidad(listaDeAlumnos,A,listaLocalidades,3);
            break;
        case 3:
            sortStudentsByNameAndAverage(listaDeAlumnos,A);
            break;
        case 4:
            respuesta = eliminarAlumno(listaDeAlumnos,A);
            switch(respuesta)
            {
                case 0:
                    printf("Accion cancelada por el usuario\n");
                    break;
                case 1:
                    printf("Alumno eliminado\n");
                    break;
                case -1:
                    printf("Dato no encontrado\n");
                    break;
            }

            break;
        case 5:

            respuesta = modificarAlumno(listaDeAlumnos,A,102);
            switch(respuesta)
            {
                case 0:
                    printf("Accion cancelada por el usuario\n");
                    break;
                case 1:
                    printf("Alumno modificado\n");
                    break;
                case -1:
                    printf("Dato no encontrado\n");
                    break;
            }
            break;
        case 6:
                mostrarLocalidades(listaLocalidades,3);
                break;
        case 7:
            mostrarLocalidadesConAlumnos(listaDeAlumnos,A,listaLocalidades,3);
            break;

        case 8:
            mostrarAlumnosDeAvellaneda(listaDeAlumnos,A,listaLocalidades,3);
            break;

        case 9:
            mostrarLocalidadConMenosAlumnos(listaDeAlumnos,A,listaLocalidades,3);
            break;
        }
    }
    while(opcion!=10);
    return 0;
}


