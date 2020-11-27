#ifndef AULA_23_ALUNOS_H
#define AULA_23_ALUNOS_H
#include <string>

#include <iostream>
using namespace std;
using std::string;

enum Status {APROVADO, TRANCADO, REPROVADO_MEDIA, REPROVADO_FALTA, MATRICULADO, QUARTA_PROVA};

class Aluno {
    private:
        
    public:
        string nome;
        double notas[4];
        int faltas;

        Aluno(); 

        Aluno(string n, double nota[4], int f);

        /*void exibeNomeAluno( ) {
            cout << "O nome do aluno é " << nome;
        }*/

        double calculaMedia( );

        ~Aluno(){
            cout << "Aluno foi destruído!" << endl;
        }

        bool operator < (const Aluno &outroAluno);

        bool operator < (const int n){
            return faltas < n;
        }

};


#endif