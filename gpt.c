#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 10

int main() {
    printf("Hola mundo\n");
    char nombre[MAX_NAME]; // Aumentamos el tamaño para permitir 4 caracteres más el carácter nulo
    printf("El tamaño del nombre es: %d\n", (int)sizeof(nombre) - 1); // Restamos 1 para no contar el carácter nulo
    fgets(nombre, sizeof(nombre), stdin);

    // Verificamos si se introdujeron más caracteres de los que caben en nombre
    if (nombre[MAX_NAME-1] != '\n') {
        printf("Se introdujeron más caracteres de los que caben en nombre\n");
        // Limpiamos el buffer de entrada
        while (fgetc(stdin) != '\n');
    }


    printf("Hola %s\n", nombre);

    return 0;
}
