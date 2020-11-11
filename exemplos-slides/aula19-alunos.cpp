#ifndef ALUNOS_CPP
#define ALUNOS_CPP

#include <iostream>

using namespace std;

enum Status {APROVADO, TRANCADO, REPROVADO_MEDIA, REPROVADO_FALTA, MATRICULADO, QUARTA_PROVA};

struct Aluno{
    string nome;
    double notas[4];
    int faltas;
    double media;
    Status status;
};

Aluno *criaAlunos(int numAlunos){
    Aluno *alunos = new Aluno[numAlunos];
    return alunos;
}

void apagaAlunos(Aluno *alunos){
    delete []alunos;
}

void calcMedia(Aluno *a){
    a->media = (4*a->notas[0] + 5*a->notas[1]+ 6*a->notas[2]) / 15;
}

#endif