#include <stdio.h>
#include "libreria.h"

#define MAX_NAME 50


int main() {
    printf("Hola mundo\n");
    char nombre[MAX_NAME];
    printf("El tamaño del nombre es: %d\n", (int)sizeof(nombre));
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s\n", nombre);
    fgetc(stdin);
    int s = suma(1, 2);
    if(s == 3)
        printf("La suma es correcta\n");
    else
        printf("La suma es incorrecta\n");
    switch(s) {
        case 1:
            printf("Es 1\n");
            break;
        case 2:
            printf("Es 2\n");
            break;
        default:
            printf("Es otro\n");
            break;
    }
    return 0;
}