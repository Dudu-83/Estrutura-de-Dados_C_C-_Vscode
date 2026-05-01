#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int *numeros;
    int *temp;
    int i;

    // Aloca memória para 5 inteiros
    numeros = malloc(5 * sizeof(int));

    if (numeros == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    // Preenche os primeiros valores
    for (i = 0; i < 5; i++) {
        numeros[i] = i + 1;
    }

    // Tenta redimensionar para 10 inteiros
    temp = realloc(numeros, 10 * sizeof(int));

    if (temp == NULL) {
        printf("Erro ao realocar memória\n");
        free(numeros); // libera memória original
        return 1;
    }

    // Atualiza o ponteiro somente se realloc deu certo
    numeros = temp;

    // Preenche os novos valores
    for (i = 5; i < 10; i++) {
        numeros[i] = i + 1;
    }

    // Imprime todos os valores
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    // Libera memória
    free(numeros);

    return 0;
}