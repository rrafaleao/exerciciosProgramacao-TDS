#include <iostream>

int main (){
   int a;

//Solicita ao usuario digitar dois numeros
    printf("digite o primeiro numero: ");
    scanf("%d", &a);
    int b = 2;

int multiplicacao = a * b;
printf("Multiplicacao: %d * %d = %d\n", a, b, multiplicacao);

    return 0;
}