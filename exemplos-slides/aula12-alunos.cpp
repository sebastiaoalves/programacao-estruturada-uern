#include <iostream>

using namespace std;

enum Status {APROVADO, TRANCADO, REPROVADO_MEDIA, REPROVADO_FALTA, MATRICULADO};

struct Aluno{
    string nome;
    double notas[4];
    int faltas;
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
    for(int i=0;i<4;i++){
        cout << "Digite a " << (i+1) << "ª nota do aluno:";
        cin >> a->notas[i];
    }
}

void leFaltas(Aluno *a){
    cout << "Digite o número de faltas do aluno: ";
    cin >> a->faltas;
}

void leAluno(Aluno *a){
    leNome(a);
    leNotas(a);
    leFaltas(a);
}


int main(){
    Aluno *sala = criaAlunos(20);

    leAluno(sala);

    apagaAlunos(sala);


    return 0;
}
