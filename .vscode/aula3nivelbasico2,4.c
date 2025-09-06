#include <stdio.h> 

int main (){

int numero = 5;
int resultado;

resultado = numero % 2;

printf("A variavel resultado é: %d\n", resultado);

if (resultado == 0){
    printf("O numero é par\n");

}else{
    printf("O numero é impar\n");
}



}