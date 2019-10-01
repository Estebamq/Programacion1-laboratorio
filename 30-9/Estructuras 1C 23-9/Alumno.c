#include "Alumno.h"

int buscarLibre(eAlumno listadoDeAlumnos[], int tam)
{

    int indice = -1;
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado!=OCUPADO)
        {
            indice = i;
            break;
        }
    }
    return indice;

}


void hardCodearAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int legajo[]= {101,102,105};
    float promedio[]= {6.66, 4,7.66};
    char nombre[][25]= {"Juan","Maria josefina","Maria"};
    int localidad[]= {1,1,3};
    for(i=0; i<3; i++)
    {
        listadoDeAlumnos[i].legajo = legajo[i];
        listadoDeAlumnos[i].promedio = promedio[i];
        strcpy(listadoDeAlumnos[i].nombre, nombre[i]);
        listadoDeAlumnos[i].estado = OCUPADO;
        listadoDeAlumnos[i].idLocalidad=localidad[i];

    }
}

void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
        }

    }
}

void cargarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int indice;

    indice = buscarLibre(listadoDeAlumnos, tam);
    printf("Indice: %d\n", indice);
    if(indice!=-1)
    {
        //hay lugar
        listadoDeAlumnos[indice] = cargarAlumno();
    }
    else
    {
        printf("No hay espacio disponible");
    }

}

eAlumno cargarAlumno(void)
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", miAlumno.nombre);
    printf("Ingrese promedio: ");
    scanf("%f", &miAlumno.promedio);
    printf("En que localidad vive?");
    scanf("%d", &miAlumno.idLocalidad);


    miAlumno.estado = OCUPADO;

    return miAlumno;
}
void mostrarUnAlumno(eAlumno miAlumno)
{
    printf("%4d %25s %8.2f %4d\n",miAlumno.legajo,miAlumno.nombre, miAlumno.promedio, miAlumno.idLocalidad);
}

void sortStudentsByNameAndAverage(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)>0)
            {
                auxAlumno = listadoDeAlumnos[i];
                listadoDeAlumnos[i] = listadoDeAlumnos[j];
                listadoDeAlumnos[j] = auxAlumno;
            }

            else
            {
                if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)==0)
                {
                    if(listadoDeAlumnos[i].promedio>listadoDeAlumnos[j].promedio)
                    {
                        auxAlumno = listadoDeAlumnos[i];
                        listadoDeAlumnos[i] = listadoDeAlumnos[j];
                        listadoDeAlumnos[j] = auxAlumno;
                    }
                }
            }
        }

    }
}


int buscarAlumnoPorLegajo(eAlumno* listaDeAlumnos, int cant, int legajo)
{
    int i;
    int retorno = -1;


    if(listaDeAlumnos!=NULL && cant>0)
    {

        for(i=0; i<cant; i++)
        {
            if(listaDeAlumnos[i].legajo==legajo && listaDeAlumnos[i].estado==OCUPADO)
            {
                retorno = i;
                break;
            }
        }
    }


    return retorno;
}

int modificarAlumno(eAlumno listaDeAlumnos[], int cant, int legajo)
{
    int index;
    char nombre[30];
    int quePaso = -1;
    char respuesta;
    eAlumno aux;

    index = buscarAlumnoPorLegajo(listaDeAlumnos,cant, legajo);
    if(index!=-1)
    {
        aux = listaDeAlumnos[index];
        mostrarUnAlumno(aux);
        printf("Ingrese el nuevo nombre: ");
        fflush(stdin);
        gets(aux.nombre);
        printf("Esta seguro que desea modificar este alumno? :");
        respuesta = getche();
        if(respuesta=='s')
        {
            listaDeAlumnos[index] = aux;
            quePaso = 1;
        }
        else
        {
            quePaso = 0;
        }

    }
    return quePaso;
}
int eliminarAlumno(eAlumno listadoDeAlumnos[], int tam)
{
    int legajo;
    int i;
    int flag = 0 ;
    char respuesta;

    int quePaso = -1;

    mostrarListadoAlumnos(listadoDeAlumnos,tam);

    printf("Ingrese el legajo: ");
    scanf("%d", &legajo);

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].legajo==legajo && listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
            printf("Esta seguro que desea eliminar este alumno? :");
            respuesta = getche();
            if(respuesta=='s')
            {
                listadoDeAlumnos[i].estado = LIBRE;
                quePaso = 1;
            }
            else
            {
                quePaso = 0;
            }
            break;
        }

    }

    return quePaso;

}

void mostrarAlumnoPorLocalidad(eAlumno ListAlumnos[],int ta,eLocalidad ListaDeLocalidades[],int tl)
{
    int i;
    int index;
    char auxLocalidad[30];

    for(i=0; i<ta; i++)
    {
        if(ListAlumnos[i].estado==OCUPADO)
        {
            index= buscarAlumnoPorLocalidad(ListaDeLocalidades,tl,ListAlumnos[i].idLocalidad);
            strcpy(auxLocalidad,ListaDeLocalidades[index].localidad);
            printf("%3d %3s %8.2f %15s\n",ListAlumnos[i].legajo,ListAlumnos[i].nombre,ListAlumnos[i].promedio,auxLocalidad);

        }
    }


}

int buscarAlumnoPorLocalidad(eLocalidad ListaDeLocalidades[],int tl, int id)
{
    int i;
    int index = -1;

    for (i=0; i<tl; i++)
    {
        if(ListaDeLocalidades[i].idLocalidad == id)
        {
            index=i;
        }
    }

    return index;
}

void mostrarLocalidades(eLocalidad listaDeLocalidades[],int tl)
{
    int i;

    printf("las localidades son: \n");
    for(i=0; i<tl; i++)
    {
        printf("%d %4s\n",listaDeLocalidades[i].idLocalidad,listaDeLocalidades[i].localidad);
    }
}
void mostrarLocalidadesConAlumnos(eAlumno listaDeAlumnos[],int ta,eLocalidad listaDeLocalidades[],int tl)
{
    int i,j,index;
    char auxLocalidad[30];

    for(i=0; i<tl; i++)
    {

        printf("\nla localidad %s tiene los siguientes alumnos\n",listaDeLocalidades[i].localidad);
        for(j=0; j<ta; j++)
        {

            if(listaDeAlumnos[j].idLocalidad==listaDeLocalidades[i].idLocalidad&&listaDeAlumnos[j].estado==OCUPADO)
            {
                printf("%3d %3s %25.2f \n",listaDeAlumnos[j].legajo,listaDeAlumnos[j].nombre,listaDeAlumnos[j].promedio);

            }
        }
    }

}

void mostrarAlumnosDeAvellaneda(eAlumno listaDeAlumnos[],int ta,eLocalidad listaDeLocalidades[],int tl)
{
    int i,j,idAux=0;
    char auxAvellaneda[30]={"Avellaneda"};
    //busco la localidad:
    for(i=0;i<tl;i++)
        {
            if(strcmp(listaDeLocalidades[i].localidad,auxAvellaneda)==0)
                {
                    idAux=listaDeLocalidades[i].idLocalidad;
                }
        }

    //Muestro la localidad con los alumnos de avellaneda
    printf("\nEn la localidad de %s, se encuentran los siguentes alumnos:\n",auxAvellaneda);

    for(j=0;j<ta;j++)
        {
            if(listaDeAlumnos[j].idLocalidad==idAux && listaDeAlumnos[j].estado==OCUPADO)
            {
                printf("\n%d %s %.2f ",listaDeAlumnos[j].legajo,listaDeAlumnos[j].nombre,listaDeAlumnos[j].promedio);
            }
        }

}

void mostrarLocalidadConMenosAlumnos(eAlumno listaDeAlumno[],int ta,eLocalidad listaDeLocalidad[],int tl)
{
  int i,j,flag=0,min;

  eLocalidadAux auxiliar[3];

  for(i=0;i<tl;i++)
    {
        auxiliar[i].contador = 0;
        auxiliar[i].idLocalidad=listaDeLocalidad[i].idLocalidad;
    }

    for(i=0;i<tl;i++)
    {
        for(j=0;j<ta;j++)
        {
            if(listaDeAlumno[j].idLocalidad==auxiliar[i].idLocalidad)
            {
                auxiliar[i].contador++;
            }
        }
    }
    for(i=0;i<tl;i++)
    {
        if(auxiliar[i].contador<min||flag==0)
        {
            min=auxiliar[i].contador;
            flag=1;
        }
    }
    for(i=0;i<tl;i++)
    {
      if(auxiliar[i].contador==min)
      { for(j=0;j<tl;j++)
        {
            if(auxiliar[i].idLocalidad==listaDeLocalidad[j].idLocalidad)
            {
                printf("%d-->%s\n",auxiliar[i].contador,listaDeLocalidad[j].localidad);
            }

        }
      }
    }
}


