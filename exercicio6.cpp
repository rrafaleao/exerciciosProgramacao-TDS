#include <iostream>

int main (){
   int c;

    printf("digite quantos graus celsius você quer converter: ");
    scanf("%d", &c);

    int Fahrenheit = (&c * 9 / 5) + 32;

    printf("(%d * 9 / 5) + 32", c, Fahrenheit);
return 0;
}