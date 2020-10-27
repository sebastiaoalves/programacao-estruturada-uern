#include <iostream>

using namespace std;

// Passagem por cópia ou por valor
void trocaValor(int a, int b){ // a é uma cópia de x e b é uma cópia de y
    int tmp = a;
    a = b;
    b = tmp;
    cout << "A e B dentro da chamada da função: " << a << " " << b << endl;
}

// Passagem por endereço ou por ponteiro
void trocaEndereco(int *a, int *b){ // a é uma cópia do endereço de x e b é uma cópia do endereço de y
    int tmp = *a;
    *a = *b;
    *b = tmp;
    cout << "A e B dentro da chamada da função: " << *a << " " << *b << endl;
}

// Passagem por referência ou por alias
void trocaReferencia(int &a, int &b){ // a e x referenciam o mesmo valor e b e y referenciam o mesmo valor
    int tmp = a;
    a = b;
    b = tmp;
    cout << "A e B dentro da chamada da função: " << a << " " << b << endl;
}

struct qq{
    int a, b;
};

void modificaStruct (qq &q){
    
}

int main(){

    int x = 10, y = 20;

    trocaValor(x, y);

    cout << "X e Y após a chamada da função: " << x << " " << y << endl;


    //trocaEndereco(&x, &y);

    //cout << "X e Y após a chamada da função: " << x << " " << y << endl;

    trocaReferencia(x, y);

    cout << "X e Y após a chamada da função: " << x << " " << y << endl;


    return 0;
}