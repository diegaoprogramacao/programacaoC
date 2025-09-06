#include <stdio.h>

int main (){

    float umidade, temperatura;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("Temperatura esta alta\n");
    }else{
        printf("Temperatura esta dentro dos parametros\n");
    }

    if (umidade > 50){
        printf("Umidade elevada\n");
    } else {
        printf("Umidade dentro dos parametros\n");
    }

    if (estoque < estoqueminimo){
    printf ("Estoque abaixo do minimo\n");
} else {
    printf("Estoque normal\n");
}
}