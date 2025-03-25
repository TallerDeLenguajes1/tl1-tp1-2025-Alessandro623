#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Hola mundo\n");

    int numero = 0;
    int *Pnumero;
    Pnumero = &numero;

    printf("contenido del puntero = %d\n", *Pnumero);
    printf("direccion de memoria del almacend del puntero = %p\n", Pnumero);
    printf("direccion de memoria del puntero = %p\n", &Pnumero);
    printf("direccion de memoria de variable = %p\n", &numero);
    printf("tamanio de memoria utlizado por la variable %zu", sizeof(numero));



    return 0;
}