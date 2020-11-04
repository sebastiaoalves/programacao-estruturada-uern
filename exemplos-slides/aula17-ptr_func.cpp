#include <iostream>
#include <algorithm>

using namespace std;

int soma (int a, int b) {
    return a+b;
}

int subtracao(int a, int b){
    return a-b;
}

int multiplicacao(int a, int b){
    return a*b;
}

int divisao (int a, int b){
    return a/b;
}

int main(){

    int (*operacao) (int, int);

    operacao = soma;
    cout << (*operacao) (10,20) << endl;

    operacao = subtracao;
    cout << (*operacao) (10,20) << endl;

    auto operacao2 = divisao;
    cout << operacao2 (8, 2) << endl;

    int (&operacao3) (int, int) = multiplicacao;
    cout << operacao3(8,2) << endl;


    return 0;

}