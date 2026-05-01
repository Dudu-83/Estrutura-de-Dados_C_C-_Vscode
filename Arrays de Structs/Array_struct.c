#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct {
        char nome[200];
        char disciplina[100];
        float nota;
} Aluno;

Aluno aluno_nota[3];

int main(void){
    SetConsoleOutputCP(65001);
    int posicao;
    int i;
    char nome;

    for(i=0; i<3; i++) {
	strcpy(aluno_nota[i].nome, "NULL");
	strcpy(aluno_nota[i].disciplina, "NULL");
	aluno_nota[i].nota = 0.0;
    };
	
    for (i=0; i<3; i++) {
        printf(" Digite nome do aluno: ");
        scanf("%s%*c", & aluno_nota [i].nome);
        printf(" Digite a disciplina do aluno: ");
        scanf("%s%*c", & aluno_nota [i].disciplina);
        printf(" Digite o nota do aluno: ");
        scanf("%f%*c", & aluno_nota [i].nota);
    };

    for(i=0; i<3; i++) {
	printf(" \n O nome do aluno é: %s ", aluno_nota [i].nome);
	printf(" \n A disciplina do aluno é: %s ", aluno_nota [i].disciplina);
	printf(" \n A nota do aluno é: %.2f \n", aluno_nota [i].nota);
    };

    printf(" \n Digite um nome: ");
    scanf("%s%*c", nome);
    
    for(i=0; i<3; i++) {
        if(strcmp(nome, aluno_nota [i].nome)== 0) {
            printf("\n Registro encontrado! ");
            posicao = i;
        } else {
            posicao = -1;
        };
    };
    
    if(posicao = -1) {
        printf(" \n Registro não encontrado! ");
    } else {
        printf(" \n Registro Encontrado: ");
        printf(" \n O nome do aluno é: %s ", aluno_nota [posicao].nome);
        printf(" \n A disciplina do aluno é: %s ", aluno_nota [posicao].disciplina);
        printf(" \n A nota do aluno é: %.2f ", aluno_nota [posicao].nota);
    };	

return(0);
};