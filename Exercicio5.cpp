#include <iostream>

int main (){
   int p, a;

    printf("digite sua altura: ");
    scanf("%d", &a);
    printf("digite seu peso: ");
    scanf("%d", &p);

int multiplicacao = a * a;
int divisao = a / p;

printf("Seu imc é: (%d * %d) / %d = %d\n", a, a, p, multiplicacao, divisao);

    return 0;
}