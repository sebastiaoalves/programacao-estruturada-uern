#ifndef ALUNOS_H
#define ALUNOS_H

#include <string>

using std::string;

enum Status {APROVADO, TRANCADO, REPROVADO_MEDIA, REPROVADO_FALTA, MATRICULADO, QUARTA_PROVA};

struct Aluno{
    string nome;
    double notas[4];
    int faltas;
    double media;
    Status status;
};

Aluno *criaAlunos(int);

void apagaAlunos(Aluno *);

void calcMedia(Aluno *);

#endif