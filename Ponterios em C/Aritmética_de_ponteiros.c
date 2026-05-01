#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(void){
    SetConsoleOutputCP(65001);

    int vetor[3] = {10, 20, 30};

    int *p = &vetor[0]; // p aponta para vetor[0]

    printf("%d\n", *p); // Imprime 10

    p++; // p agora aponta para vetor[1]

    printf("%d\n", *p); // Imprime 20

    printf("-------\n");

    int *p2 = &vetor[2]; // p aponta para vetor[0]

    printf("%d\n", *p2); // Imprime 30

    p2--; // p agora aponta para vetor[1]

    printf("%d\n", *p2); // Imprime 20

return(0);
};