#include <stdio.h>
void invertir(int a, int b);



int main(){

    printf("ingrese 2 numeros\n");
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    invertir(a,b);
    
}


void invertir(int a, int b){
    
    printf("valor de a = %d\n", a);
    printf("valor de b = %d\n", b);

    printf("invirtiendo...\n");
    int guardar = 0;
    guardar = a;
    a = b;
    b = guardar;

    printf("nuevo valor de a = %d\n", a);
    printf("nuevo valor de b = %d", b);

}