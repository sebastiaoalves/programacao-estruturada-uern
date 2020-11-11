#include <iostream>

// TESTE == 0 --> exibir a soma // TESTE == 1 --> Exibir a soma parcial // TESTE == 2 Exibe o valor somado
// #define TESTE 2

using namespace std;

int main(){

#if defined(DEBUG)
cout << "Debugando o arquivo " << __FILE__ << endl;
#endif

#ifdef DEBUG
    cout << "Debug foi definido" << endl;
#endif

#if TESTE == 0
    const int n=20;
#else
    const int n=3;
#endif

    int v[n];
    for(int i=0;i<n;i++){
        cout << "Digite o " << i+1 << "º valor do vetor: ";
        cin >> v[i];
    }

    int soma = 0;

    for(int i:v){
        soma+=i;
#if TESTE == 1
        cout << "Soma parcial:" << soma << endl;
#elif TESTE == 2
        cout << "Somou com " << i << "\nSoma parcial:" << soma << endl;
#endif
    }

    cout << soma << endl;

    return 0;
}