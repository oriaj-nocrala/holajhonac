#include <stddef.h>

// tarea pal jhona
// implementar una lista enlazada simple
// con las siguientes funciones
// agregar un nodo al final
// agregar un nodo al inicio
// eliminar un nodo al final
// eliminar un nodo al inicio
// imprimir la lista
// buscar un nodo
// modificar un nodo
// liberar la memoria
// agregar un nodo en una posición específica
// eliminar un nodo en una posición específica
// modificar un nodo en una posición específica
// imprimir la lista en orden inverso
// imprimir la lista en orden inverso con recursión
struct Nodo{
    int dato;
    struct Nodo *siguiente;
};

int main() {
    struct Nodo *nodo = (struct Nodo *)malloc(sizeof(struct Nodo));
    nodo->dato = 10;
    nodo->siguiente = NULL;
    free(nodo);
    return 0;
}