#include "aula23-alunos.h"
#include <iostream>

using namespace std;

Aluno::Aluno(){
    nome="";
    notas[0] = 10;
    notas[1] = 10;
    notas[2] = 10;
    notas[3] = 10;
    faltas=0;
}

double Aluno::calculaMedia(){
    return (4*notas[0]+5*notas[1]+6*notas[2])/15;
}

Aluno::Aluno(string n, double nota[4], int f){
            nome = n;
            for(int i=0;i<4;i++)
                notas[i] =  nota[i];
            faltas = f;
        }

        bool Aluno::operator < (const Aluno &outroAluno){
            return faltas < outroAluno.faltas;
        }




int main(){
    /*
    Aluno a2 = {"Alves", {5, 7, 9}, 10};

    cout << "Média de Sebastião: " << a1.calculaMedia() << endl; 

    cout << "Média de Alves: " << a2.calculaMedia() << endl;

    Aluno *a3 = new Aluno {"Emidio", {9, 10, 8}, 5};

    cout << "Média de Emidio: " << a3->calculaMedia() << endl;

    delete a3;
*/

    string nome="Sebastião";
    double notas[] = {4, 6, 7};
    int faltas = 20;

    Aluno a1(nome, notas, faltas);

    Aluno a4;
    a4.faltas=10;
    cout << "Média de a4: " << a4.calculaMedia() << endl;
    cout << "Fim do programa" << endl;

    if(a1 < a4)
        cout << "A1 é menor" << endl;
    else
        cout << "A4 é menor" << endl;

    if(a1 < 10)
        cout << "Tem menos de 10 faltas";
    return 0;
}