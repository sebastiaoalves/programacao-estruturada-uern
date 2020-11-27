#include "aula20-ioalunos.h"
#include "aula20-alunosutils.h"

#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    Aluno *sala = criaAlunos(5);

    for(int i=0;i<5;i++)
        leAluno(sala+i);  // &sala[i]

    sort(sala, sala+5, ordenaAluno); // qsort

    //for(int i=0;i<5;i++)
    //    mostraAluno(sala[i]);  // &sala[i]

    double media, desvio;
    calcMediaDesvio(sala, 5, media, desvio);
    cout << "Média da sala: " << media << endl;
    cout << "Desvio padrão: " << desvio << endl;
    apagaAlunos(sala);

    Aluno a = {"João", {6, 6, 6}, 12, 6.1, MATRICULADO};
    Status s = verificaStatus(a);
    mostraAluno(a);
    mostraStatus(s);

    s = verificaStatus(a, 6.0);
    mostraAluno(a);
    mostraStatus(s);

    a.media = 4.2;
    s = verificaStatus(a, 6.0, 5.0);
    mostraAluno(a);
    mostraStatus(s);

    s = verificaStatus(a, 6.0, 5.0, 10);
    mostraAluno(a);
    mostraStatus(s);

    return 0;
}
