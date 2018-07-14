#include <stdio.h>


int main() {

    double n = 3.14159;
    double raio;
    double area;
    scanf("%lf", &raio); //leitura de caracteres double, float o valor deu diferente

    //funcao pow para elevar um numero, nesse caso a 2
    area = n * (pow (raio,2));


    printf("A=%.4f", area);
    printf("\n");

    return 0;
}
