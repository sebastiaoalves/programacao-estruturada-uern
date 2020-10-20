#include <iostream>

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

// Cada elemento da fila terá um ponteiro para um aluno e um ponteiro para o próximo
struct NohFila{
    Aluno *aluno; // dado
    NohFila *proximo; // ponteiro próximo
};

struct Fila{
    NohFila *inicio;
    NohFila *fim;
    int tamanho;
};

Fila *criaFila(){
    Fila *f = new Fila;
    f->inicio = nullptr;
    f->fim = nullptr;
    f->tamanho = 0;
    return f;
}

void insereNaFila(Fila *f, Aluno *a){
    // Criando um nó
    NohFila *noh = new NohFila;
    noh->aluno = a;
    noh->proximo = nullptr;

    if (f->tamanho == 0){  // fila está vazia ou f->inicio == nullptr
        f->inicio = noh;
        f->fim = noh;
    }else{  // fila não vazia
        f->fim->proximo = noh;
        f->fim = noh;
    }

    f->tamanho++;
}

void mostraFila(Fila *f){
    NohFila *aux = f->inicio;
    for(int i=0;i<f->tamanho;i++){
        mostraAluno(*(aux->aluno));
        aux=aux->proximo;
    }
}

void removeDaFila(Fila *f){
    if(f->tamanho==0){  // Fila vazia
        cout << "Erro, fila vazia!!" << endl;
        return;
    }else if(f->tamanho==1){
        NohFila *aux = f->inicio;
        apagaAlunos(aux->aluno);
        delete aux;
        f->inicio=nullptr;
        f->fim=nullptr;
    }else{
        NohFila *aux = f->inicio;
        f->inicio = f->inicio->proximo;
        apagaAlunos(aux->aluno);
        delete aux;
    }
    f->tamanho--;
}

int main(){
    Fila *fila = criaFila();
    Aluno *a1 = criaAlunos(1);
    Aluno *a2 = criaAlunos(1);
    leAluno(a1);
    leAluno(a2);
    insereNaFila(fila, a1);
    insereNaFila(fila, a2);
    mostraFila(fila);
    removeDaFila(fila);
    mostraFila(fila);

    Fila *outraFila = criaFila();
    a1 = criaAlunos(1);
    leAluno(a1);
    insereNaFila(outraFila, a1);
    mostraFila(outraFila);
    return 0;
}