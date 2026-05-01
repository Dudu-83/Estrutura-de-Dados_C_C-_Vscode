#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

struct Aluno {
    char nome[50];
    int idade;
    int matricula;
    char curso[30];
}; 

int main(void){
    SetConsoleOutputCP(65001);

    int i;
    struct Aluno alunos[3];

    strcpy(alunos[0].nome, "Sérgio da Silva");
    alunos[0].idade = 16;
    alunos[0].matricula = 1001;
    strcpy(alunos[0].curso, "Matemática");
    
    strcpy(alunos[1].nome, "Júlia Pereira");
    alunos[1].idade = 17;
    alunos[1].matricula = 1002;
    strcpy(alunos[1].curso, "Física");

    strcpy(alunos[2].nome, "João Souza");
    alunos[2].idade = 18;
    alunos[2].matricula = 1003;
    strcpy(alunos[2].curso, "Química");

    printf("=== Dados dos Alunos Cadastrados ===\n\n");

    for( i = 0; i < 3; i++ ){
        printf("==== %d° Aluno Cadastrado====\n\n", i + 1);
        printf("O nome do Aluno: %s\n", alunos[i].nome);
        printf("A idade do Aluno: %d\n", alunos[i].idade);
        printf("A matrícula do Aluno: %d\n", alunos[i].matricula);
        printf("O Curso do Aluno: %s\n\n", alunos[i].curso);
    };

return(0);
};