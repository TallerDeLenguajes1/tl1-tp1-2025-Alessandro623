#include <stdio.h>
void devolverCuadrado(int numero);


int main(){

    printf("ingrese un numero para calcular su cuadrado\n");
    int numero;
    scanf("%d", &numero);
    devolverCuadrado(numero);
    
}


void devolverCuadrado(int numero){

    int numeroD = 0;
    numeroD= numero * numero;

    printf("El cuadrado de %d es = %d", numero, numeroD);

}