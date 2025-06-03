#ifndef NOTAS_H
#define NOTAS_H


typedef struct{
    int matricula;
    float nota;
} Nota;

void CadastrarNota(Nota *nota, int *conta);

#endif