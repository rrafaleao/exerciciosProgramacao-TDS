#include <iostream>

int main(){
    char nome[100];
    int idade;

    printf ("Digite seu nome: ");
    scanf ("%s", &nome);
    printf ("digite sua idade: ");
    scanf ("%d, &idade");
    printf ("Saudação %s, você tem %d anos.\n", nome, idade);
    return 0;
}
