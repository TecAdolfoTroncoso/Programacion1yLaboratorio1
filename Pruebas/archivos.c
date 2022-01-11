#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>


//#define FLENAME "holamundo.txt"

int escribir();

int main(void) {

    const char* FLENAME = "C:/tmp/holamundo.txt";

    FILE* input_file = fopen(FLENAME, "r");


    if (!input_file)
        exit(EXIT_FAILURE);

    struct stat sb;

    if (stat(FLENAME, &sb) == -1) {
        perror("stat");
        exit(EXIT_FAILURE);
    }

    char* file_contents = malloc(sb.st_size);

    // char [sb.st_size] sb.st_size
 
    //if(file_contents == 0 )
    //    eRROR

    fread(file_contents, sb.st_size, 1, input_file);

    printf("%s\n", file_contents);

    fclose(input_file);

    free(file_contents);

    ///exit(EXIT_SUCCESS);

    escribir();
}


int escribir() {


    //char *nombreArchivo = "holamundo.txt";
    char* nombreArchivo = "C:/tmp/holamundo.txt";

    //char *modo = "w";// w es para sobrescribir, a+ es para añadir al existente

    FILE *archivo = fopen(nombreArchivo, "w");

    //como es un pu

FILE *archivo = fopen(nombreArchivo, "w");

    //como es un puntero a un objet oen memoria se debe validar

    if (archivo == NULL) {
        printf("Error abriendo archivo %s", nombreArchivo);
        return 1;
    }

    fprintf(archivo, "Hola mundo, estamos escribiendo en un archivo\n");

    fprintf(archivo, "También podemos formatear números por ejemplo %d\n", 1);

    fprintf(archivo, "¿Saltos de línea? sí\n\n\n");

    fprintf(archivo, "Podemos escribir cualquier cosa como si usáramos p fprintf\n");


    // Al final, cerramos el archivo
    fclose(archivo);

    return 0;
}