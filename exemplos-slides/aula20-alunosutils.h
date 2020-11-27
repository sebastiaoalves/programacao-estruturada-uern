#ifndef ALUNOS_UTILS_H
#define ALUNOS_UTILS_H

#include "aula20-alunos.h"

bool ordenaAluno(Aluno a, Aluno b);

void calcMediaDesvio(Aluno sala[], size_t numAlunos, double &media, double &desvioPadrao);

// Atribui o status do aluno e deixa alguns parâmetros com valor default
Status verificaStatus(const Aluno &aluno, double notaMin=7.0, double notaQuartaMin=4.0, int faltasMax=15);

void mostraStatus(Status status);

#endif