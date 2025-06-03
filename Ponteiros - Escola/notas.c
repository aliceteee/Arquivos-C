#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"


void CadastrarNota(Nota *nota, int *conta){
    printf ("---- Cadastrar Nota! ----\n");
    printf ("Informe a matrícula do aluno:\n");
    scanf ("%d",&nota -> matricula);
    printf ("Informe a nota:\n");
    scanf ("%f",&nota -> nota);
    *conta = *conta + 1;
}