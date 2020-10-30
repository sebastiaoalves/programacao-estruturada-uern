#include <iostream>
#include <algorithm>
#include <cmath>

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

bool ordenaAluno(Aluno a, Aluno b){
    return (a.media>b.media) || 
            (a.media==b.media && a.faltas<b.faltas) || 
            (a.media==b.media && a.faltas==b.faltas && a.nome<b.nome);
}

void calcMediaDesvio(Aluno sala[], size_t numAlunos, double &media, double &desvioPadrao){
    media=0.0;
    for(size_t i=0;i<numAlunos;i++)
        media += sala[i].media;
    media /= numAlunos;

    double desvios=0.0;
    for(size_t i=0;i<numAlunos;i++)
        desvios += pow(sala[i].media-media,2);
    desvioPadrao = sqrt(desvios/numAlunos);

}

// Atribui o status do aluno e deixa alguns parâmetros com valor default
Status verificaStatus(const Aluno &aluno, double notaMin=7.0, double notaQuartaMin=4.0, int faltasMax=15){
    Status statusAluno;
    if(aluno.faltas>faltasMax)
        statusAluno = REPROVADO_FALTA;
    else if(aluno.media>notaMin)
        statusAluno = APROVADO;
    else if(aluno.media>notaQuartaMin)
        statusAluno = QUARTA_PROVA;
    else
        statusAluno = REPROVADO_MEDIA;
    return statusAluno;
}

void mostraStatus(Status status){
    switch (status){
        case REPROVADO_MEDIA:
            cout << "Aluno reprovado por média" << endl;
            break;
        case REPROVADO_FALTA:
            cout << "Aluno reprovado por falta" << endl;
            break;
        case QUARTA_PROVA:
            cout << "Aluno está em quarta prova" << endl;
            break;
        case APROVADO:
            cout << "Aluno está aprovado. Parabéns!" << endl;
            break;
        default:
            break;
    }
}


int main(){
    Aluno *sala = criaAlunos(5);

    for(int i=0;i<5;i++)
        leAluno(sala+i);  // &sala[i]

    sort(sala, sala+5, ordenaAluno); // qsort

    for(int i=0;i<5;i++)
        mostraAluno(sala[i]);  // &sala[i]


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
