#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int soma (int a, int b){
    return( a + b );
};

int main(){
    SetConsoleOutputCP(65001);
    int a; // Declarei as variaveis
    int b;

    printf("Some dois números\n");
    printf("Coloque o valor de a: ");
    scanf("%d", &a); // Passei os valores

    printf("Coloque o valor de b: ");
    scanf("%d", &b);

    int variavel = soma(a, b); // Garanti que os valores vieram pra cá !!

    printf("Soma de A + B = %d\n", variavel); // Chamei a função soma pela variavel

return(0);    
};