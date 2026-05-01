#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

float calcularDesconto(float preco, float percentual){
    return preco * ( percentual / 100);
};

void exibirTotal(float preco, float desconto){
    float Total = preco - desconto;
    printf("O valor final com desconto: %.2f\n", Total);
};

int main(void){
    SetConsoleOutputCP(65001);

    float preco, percentualdesconto, desconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &preco);
    printf("Digite o percentual do desconto: ");
    scanf("%f", &percentualdesconto);
    
    desconto = calcularDesconto(preco, percentualdesconto);

    exibirTotal(preco, desconto);

return(0);
};