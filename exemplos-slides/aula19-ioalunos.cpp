#ifndef IO_ALUNOS_CPP
#define IO_ALUNOS_CPP

#include "aula19-alunos.cpp"
#include <iostream>

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

#endif