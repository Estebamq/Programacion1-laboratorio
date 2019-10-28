#include <stdio.h>
#include <stdlib.h>

//TEMA BASE PUNTEROS PARA MEMORIA DINAMICA, ARCHIVOS.
// que es un archivo csv, "valores separados por coma".

//vamos a trabajar en memoria ram, hay funciones en las que me conecto directamente con  el archivo en el disco, y puedo trabajarlo directamente pero es ams costoso que traerlo a memoria ram



int main()
{

    FILE* pArchivo;  //DE ESTE ARCHIVO NO VAMOS A MODIFICAR NADA, SOLO VAMOS A CREAR UN PUNTERO A ESTRUCTURA.

    /* MODO TEXTO
    char miNombre[]="German";
    pArchivo = fopen("miArchivo.txt","w"); //fopen("D:\\miCarpeta\\miArchivo.txt",modo de apertura "w" archivo texto "wb" binario)tambien puedo usar un escritorio.
    if(pArchivo!=NULL)
    {
        fprintf(pArchivo, "Mi nombre es: %s\nel dia esta nublado",miNombre);// escribe sobre el arhcivo txt que se creo

        fclose(pArchivo); // el fclose tenemos que llamarlo adrentro de donde esta, porque tenemos que asegurarnos de que abrio el archivo, para que voy a cerrar algo que no abrio
    }*/


    /* MODO TEXTO
    char miNombre[50];
    pArchivo= fopen("miArchivo.txr","r");
    if(pArchivo!=NULL)
    {
        while(!feof(pArchivo))//feof va a seguir hasta que me muestra el final del archivo,
        {
        //fgets(dondeloguardo,cuanto puedo guardar dejo un espacio por el \n,el archivo) va a leer la primer linea
          fgets(miNombre,49,pArchivo);//recibe tres parametros
          printf("%s",miNombre);
         }
         fclose(pArchivo);
    }
    */

   /* //MODO BINARIO
    char miNombre[]="German";
    int k=9;
    pArchivo = fopen("miArchivo.bin","wb"); // la extension se usa para organizar el archivo, si utilizo "miArchivo.pepe" puedo estar seguro que lo va a reconocer mi programa, no el sistema operativo
    if(pArchivo!=NULL)
    {
        //fwrite(direccion del archivo en memoria ram, tipo de dato a recibir, cuantas veces vas a escribir,el archivo)
          fwrite(miNombre,sizeof(char), strlen(miNombre),pArchivo );
          fwrite(&k,sizeof(int), 1,pArchivo );


        fclose(pArchivo); // el fclose tenemos que llamarlo adrentro de donde esta, porque tenemos que asegurarnos de que abrio el archivo, para que voy a cerrar algo que no abrio
    }*/

    /*// MODO BINARIO lectura
    int x;
    pArchivo= fopen("miArchivo.bin","rb");
    if(pArchivo!=NULL)
    {
        fread(&x,sizeof(int),1,pArchivo);
        printf("%d",x);
        fclose(pArchivo);
    }
    */

    //

    return 0;
}
