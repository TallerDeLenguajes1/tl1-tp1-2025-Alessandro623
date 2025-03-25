#include <stdio.h>
void orden(int a, int b);



int main(){

    printf("ingrese 2 numeros\n");
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    orden(a,b);
    
}


void orden(int a, int b){
    int guardar = 0;
    printf("valor de a = %d\n", a);
    printf("valor de b = %d\n", b);

    if (a > b)
    {
        guardar = a;
        a = b;
        b = guardar;
        printf("nuevos valores de menor a mayor...\n");
        printf("valor de a = %d\n", a);
        printf("valor de b = %d\n", b);
    }
    

}