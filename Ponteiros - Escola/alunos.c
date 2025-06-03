#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"

    void CadastrarAluno(Aluno *aluno, int *conta){
    printf("---- Cadastrar Aluno! ----\n");
    printf("Informe a matricula: ");
    scanf("%d", &aluno->matricula);
    printf("Informe o nome: ");
    scanf(" %[^\n]", aluno->nome);
    *conta = *conta + 1;
}