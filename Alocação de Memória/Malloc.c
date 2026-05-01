#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    SetConsoleOutputCP(65001);

    int *ponteiro; // Criação de um ponteiro para o vetor
    int i, Quantidade_Elementos; 

    printf("Digite a quantidade de Elementos do Vetor: ");
    scanf("%d", &Quantidade_Elementos);

    ponteiro = (int*) malloc(Quantidade_Elementos *sizeof(int)); // Aloca na memória 5 números inteiros

    if (ponteiro != NULL){ // Verifica se o ponteiro é nulo
        
        for (i = 0; i < Quantidade_Elementos; i++){
            ponteiro[i] = i + 1; // inicializa com zero manualmente
        }  
             
        for (i = 0; i < Quantidade_Elementos; i++){
            printf("%d ", ponteiro[i]);
        }

        free (ponteiro); // Liberando espaço do malloc
    } else {
        printf("Alocação de memória não está vazia.");
    }
return(0);
};