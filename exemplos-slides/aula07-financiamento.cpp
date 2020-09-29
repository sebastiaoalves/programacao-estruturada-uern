#include<iostream>

using namespace std;

const int MAX_PARCELAS=48;
const double PERCENTUAL_ENTRADA=0.2;
double valorDoVeiculo, valorDeEntrada;

// Verifica se o valor da entrada é de pelo menos 20% do valor do veículo
// Entrada: valor de entrada do veículo, valor do veículo, percentual mínimo da entrada
// Saída: se o valor mínimo foi dado
bool valorEntradaValido(double entrada, double valorVeiculo, double percentualEntrada){
    bool resultado = true; // Sentinela ou flag
    if(entrada < valorVeiculo*percentualEntrada || entrada>valorVeiculo){
        resultado = false;
        cerr << "Valor de entrada inválido!" << endl;
    }
    return resultado;
}

// Função que lê o valor da entrada até que ele seja válido
// Entrada: valor do veículo
// Saída: valor válido para a entrada
double leEntrada(double valorVeiculo){
    double valor;
    do{
        cout << "Digite o valor de entrada do veículo(em reais): ";
        cin >> valor;
        if(valorEntradaValido(valor,valorVeiculo,PERCENTUAL_ENTRADA)){
            cout << "Valor de entrada ok!" << endl;
            break;
        }
    }while(true);
    return valor;
}

void exibeMenu(){
    //TODO
}

int main(){
    valorDoVeiculo=100000;
    exibeMenu();
    cout << leEntrada(valorDoVeiculo);
    return 0;
}