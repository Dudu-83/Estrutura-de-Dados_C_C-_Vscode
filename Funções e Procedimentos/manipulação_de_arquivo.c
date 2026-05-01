#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


int main(void){
    SetConsoleOutputCP(65001);

    // Abrindo o arquivo
    FILE *arquivo;
    char nome[21];
    int idade;

    arquivo = fopen("dados.txt", "w");
    if (arquivo == NULL){
        printf("Erro");
        return(1);
    };

    // Coleta de dados do usuário
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    fprintf(arquivo, "Nome: %s\nidade: %d\n\n", nome, idade); // Inserindo os dados coletados no arquivo

    // Fechando o arquivo
    fclose(arquivo);

    // Reabrindo o arquivo no modo leitura
    arquivo = fopen("dados.txt", "r");
     if (arquivo == NULL){
        printf("Erro");
        return(1);
    };

    fscanf(arquivo, "Nome: %s\nidade: %d\n", &nome, &idade);// Lendo os dados do arquivo

    printf("Dados Coletados do Arquivo:\n\n");
    printf("Nome: %s\nidade: %d\n", nome, idade);

    // Fechando o arquivo
    fclose(arquivo);

return(0);
};