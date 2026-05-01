#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define LEN 500 // Serve para definir o tamanho 

struct departamento {
    int cod;
    char nome[LEN];
};

struct cargo {
    int cod;
    char nome[LEN];
    float salario;
};

struct funcionario {
    char nome[LEN];
    int idade;
    char sexo[LEN];
    struct departamento Departamento;
    struct cargo Cargo;
};

int main(void){
    SetConsoleOutputCP(65001);
    int posicao;
    int i;
    int cod;

    printf("------ Bem-Vindo(a) a Nike ------\n");

    struct departamento Departamento;

    printf("Insira o CÓDIGO do seu Departamento: ");
    scanf("%d", &Departamento.cod);

    printf("Insira o NOME do seu Departamento: ");
    scanf("%s", &Departamento.nome);


    // ---------------------------------------------
    struct cargo Cargo[3];

    Cargo[0].cod = 100;
    strcpy(Cargo[0].nome, "Faxineiro");
    Cargo[0].salario = 2750.34;

    Cargo[1].cod = 200;
    strcpy(Cargo[1].nome, "Contador");
    Cargo[1].salario = 3678.90;

    Cargo[2].cod = 300;
    strcpy(Cargo[2].nome, "Gerente de Administração");
    Cargo[2].salario = 5789.63;


    // ---------------------------------------------
    struct funcionario Funcionario; {

    printf("Digite o seu nome completo: ");
    scanf("%s", &Funcionario.nome);

    printf("Digite sua idade: ");
    scanf("%d", &Funcionario.idade);

    printf("Digite o seu sexo (M/F): ");
    scanf("%s", &Funcionario.sexo);
    };

    printf("Digite o seu código de funcionário: ");
    scanf("%d", &cod);


    // ---------------------------------------------
    for (i=0; i<3; i++){
        if (cod == Cargo[i].cod) {
            printf("\n Registro encontrado! ");
            posicao = i;

            printf(" \n O Código do funcionario: %d \n", Cargo[posicao].cod);
            printf("O nome do Cargo: %s \n", Cargo[posicao].nome);
            printf("O salário: %.2f ", Cargo[posicao].salario);

        } else {
            posicao = -1;
        };
    
    };

return(0);
};