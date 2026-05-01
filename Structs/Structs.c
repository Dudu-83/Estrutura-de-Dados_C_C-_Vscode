#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Uma boa prática para criação de Structs é antes de uma função
struct endereco {
        char rua[500];
        int numero;
        char cep[10];
        char bairro[30];
};

struct aluno_especial {
    char matricula[70];
    char nome[50];
    int idade;
    char sexo[20];
};

int main(void){
    SetConsoleOutputCP(65001);


    struct endereco x = {"Av. das Américas", 4200 , "22640-109", "Barra da Tijuca"}; // Declara a Struct para a inserção dos valores 

    printf("---- Endereço do Aluno ----\n");
    printf("Rua:.......%s\n", x.rua);
    printf("Número:.......%d\n", x.numero);
    printf("CEP:.........%s\n", x.cep);
    printf("Bairro:........%s\n\n", x.bairro);

    printf("----------------------------------------\n\n");

    struct aluno_especial aluno; // Declara a Struct para a inserção dos valores 
    
    strcpy(aluno.matricula, "202503320659@alunos.estacio.br");
    strcpy(aluno.nome, "Eduardo Lima de Oliveira"); // Para o tipo char e strings é preciso usar o "strcpy"
    aluno.idade = 19; // Aqui é feito diretamente e não é necessário definir o tamanho, serve para Float também
    strcpy(aluno.sexo, "Masculino");

    printf("---- Informações do Aluno ----\n");
    printf("A matrícula:.....%s\n", aluno.matricula);
    printf("O nome:.......%s\n", aluno.nome); // Para tipos char e string usar "%s"
    printf("A idade:.......%d anos\n", aluno.idade); // Para tipos int e float, usar "%d" e "%f" 
    printf("O Sexo:.......%s\n", aluno.sexo);

return(0);
};