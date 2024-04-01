#include <iostream>

int main (){
    float a, p;
        printf("Digite seu peso: ");
        scanf("%f", &p);
         printf("Digite seu altura: ");
        scanf("%f", &a);
        printf("seu IMC é: %.2f\n", (a * a / p));
        return 0;
}