#include <iostream>
#include <algorithm>


using namespace std;

enum Status {APROVADO, TRANCADO, REPROVADO_MEDIA, REPROVADO_FALTA, MATRICULADO};

struct Aluno{
    string nome;
    double notas[3];
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

bool ordemDecrescente(int a, int b) {
    /*if(a>b)
        return true;
    else
        return false;*/
    return a>b;
}

bool ordenaAluno(Aluno a, Aluno b){
    if(a.media > b.media)
        return true;
    else
        if(a.media==b.media)
            if(a.faltas < b.faltas)
                return true;
            else
                if(a.faltas == b.faltas)
                    if(a.nome < b.nome)
                        return true;
                    else
                        return false;
                else
                    return false;
        else
            return false;
    // return (a.media>b.media) || 
    //        (a.media==b.media && a.faltas<b.faltas) || 
    //        (a.media==b.media && a.faltas==b.faltas && a.nome<b.nome);
}

int main(){
    Aluno *sala = criaAlunos(3);

    for(int i=0;i<3;i++)
        leAluno(sala+i);  // &sala[i]

    sort(sala, sala+3, ordenaAluno); // qsort

    for(int i=0;i<3;i++)
        mostraAluno(sala[i]);  // &sala[i]

    apagaAlunos(sala);

    /* int myints[] = {32,71,12,45,26,80,53,33};
    sort(myints, myints+8, ordemDecrescente);
    for(int num:myints)
        cout << num << " ";
    cout << endl; */
    return 0;
}
