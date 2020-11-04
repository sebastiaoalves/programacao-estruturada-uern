#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    // Criando uma expressão lambda
    // void mostraValor(int x){
    //      cout << x << endl;    
    // }

    // Substituída pela função lambda
    auto mostraValor = [] (int x) -> void { cout << "O valor de x é " << x << endl; };

    mostraValor(10);
    mostraValor(20);

    int vetor[] = {10, 1, 0, 8, 9, -2};

    // bool compara(int a, int b){
    //      return a>b;   
    // }
    sort(vetor, vetor+6, [] (int a, int b) -> bool {
        return a>b;
    });

    for(int i:vetor)
        cout << i << endl;

    return 0;
}

    