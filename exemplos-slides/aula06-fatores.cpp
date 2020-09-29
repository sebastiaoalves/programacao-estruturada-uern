#include <iostream>

using namespace std;

int leNumero(){
    int n;
    cout << "Digite um número para saber seus fatores primos:";
    cin >> n;
    return n;
}

bool primeiro=true;

void exibeSaida(int fator){
    if(!primeiro)
        cout << "*" << fator;
    else{
        cout << fator;
        primeiro = false;
    }
    
}

void decompoeFatoresPrimos(int n){
    int divisor = 2;
    while(n != 1){
        if(n % divisor == 0){ // é divisível
            n /= divisor;
            exibeSaida(divisor);
        }else{
            divisor++;
        }
    }
    cout << endl;
}

int main(){
    int numero;
    numero = leNumero();
    decompoeFatoresPrimos(numero);
    return 0;
}

/*
24 | 2
12 | 2
6  | 2
3  | 3
1 
2*2*2*3

30 | 2
15 | 3
5  | 5
1
2*3*5
*/
