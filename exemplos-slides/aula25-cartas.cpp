#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

struct carta{
    string nome, naipe;
    int pontos;
};

int main(){

    vector<carta> baralho;

    string nomes [] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    string naipes [] = {"Ouro", "Paus", "Espadas", "Copas"};

    for(string nome : nomes)
        for(string naipe : naipes ){
            carta c = {nome, naipe};
            baralho.push_back(c);
        }

    random_shuffle (baralho.begin(), baralho.end());
    random_shuffle (baralho.begin(), baralho.end());

    stack<carta> pilha;

    for(carta c:baralho)
        pilha.push(c);
    
    while( ! pilha.empty()){
        carta c = pilha.top();
        cout << c.nome << " de " << c.naipe << endl;
        pilha.pop();
    }

    return 0;
}