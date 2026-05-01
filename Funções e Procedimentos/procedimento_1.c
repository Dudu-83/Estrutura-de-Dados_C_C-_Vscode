#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

void imprime (int numero){
    printf("O número é: %d\n", numero);
};

void exibirBoasVindas(){
    printf("Boas-Vindas meu Chapa kkkkkk.");
};

int main(void){
    SetConsoleOutputCP(65001);
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    imprime(numero);

    exibirBoasVindas();

return(0);
};