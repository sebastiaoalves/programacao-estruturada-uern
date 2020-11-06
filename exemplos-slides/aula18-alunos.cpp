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

void leNome(Aluno *a){
    cout << "Digite o nome do aluno: ";
    cin >> a->nome;
}

void leNotas(Aluno *a){
    for(int i=0;i<3;i++){
        cout << "Digite a " << (i+1) << "ª nota do aluno:";
        cin >> a->notas[i];
    }
}

void leFaltas(Aluno *a){
    cout << "Digite o número de faltas do aluno: ";
    cin >> a->faltas;
}

void calcMedia(Aluno *a){
    a->media = (4*a->notas[0] + 5*a->notas[1]+ 6*a->notas[2]) / 15;
}

void leAluno(Aluno *a){
    leNome(a);
    leNotas(a);
    calcMedia(a);
    leFaltas(a);
}

void mostraAluno(Aluno a){
    cout << "Nome: " << a.nome << endl;
    cout << "Notas: ";
    for(double n:a.notas)
        cout << n << " ";
    cout << endl;
    cout << "Média: " << a.media << endl;
    cout << "Faltas : " << a.faltas << endl;
    cout << "---------------------------------" << endl;
}