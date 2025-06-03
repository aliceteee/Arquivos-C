#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"



void CalcularMedia(Aluno alunos[], Nota notas[]);

int main(){
    int opcao, contAluno = 0, contNota = 0;
    Aluno alunos[10];
    Nota notas[50];
    
    do{
    printf("\n---- Sistema escolar SENAI ----\n");
    printf("1- Cadastrar aluno\n");
    printf("2- Cadastrar nota\n");
    printf("3- Cadastrar média\n");
    printf("4- Sair\n");
    printf("Selecione uma opção: \n");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
        CadastrarAluno(&alunos[contAluno], &contAluno);
        break;
        
        case 2:
        CadastrarNota(&notas[contNota], &contNota);
        break;
        
        case 3:
        CalcularMedia(alunos, notas);
        break;
        
        case 4:
        printf("Saindo....");
        break;
        
        default:
        printf("Resposta inválida, tente novamente...\n\n");
        break;
    }
    } while (opcao != 4);

    return 0;
}


void CalcularMedia(Aluno alunos[], Nota notas[]) {
    int matricula, qntNotas = 0;
    float media = 0;
    printf("Informe uma matrícula: ");
    scanf ("%d", &matricula);
    for(int i = 0; i < 10; i++) {
        if(alunos[i].matricula == matricula) {
            printf ("Nome: %s\n", alunos[i].nome);
            break;
        }
    }
    for(int i = 0; i < 50; i++) {
        if(notas[i].matricula == matricula) {
            media += notas[i].nota;
            qntNotas++;
        }
    }
    printf("Média: %.2f\n", (media / qntNotas));
}

void FinalizaFuncao(){
    printf("Enter para continuar...");
    getchar();   
    getchar();
    system("clear");
}