#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    int *ponteiro;
    ponteiro = (int*) calloc(5, sizeof(int)); // Aloca na memória 5 números inteiros, só que agora já vazios

    if (ponteiro != NULL){ // Verifica se o ponteiro é nulo
        int i;
        for (i = 0; i < 5; i++){
            printf("%d ", ponteiro[i]); // todos devem começar com zero
    }
        free (ponteiro); // libera memória

    } else {
        printf("Alocação de memória não está vazia.");
    }
return(0);
};