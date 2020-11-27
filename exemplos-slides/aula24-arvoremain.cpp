#include <iostream>
#include "aula24-arvore.cpp"

using namespace std;

int main(){
    NohArvore<int> raiz1;
    raiz1.dado = new int {10};
    raiz1.insere(20);
    raiz1.insere(30);
    raiz1.insere(5);
    raiz1.insere(2);
    if(raiz1.contem(50))
        cout << "A árvore contém o valor 50." << endl;
    
    if(raiz1.contem(5))
        cout << "A árvore contém o valor 5." << endl;

    NohArvore<string> raiz2;
    raiz2.dado = new string {"estruturada"};
    raiz2.insere("programação");
    raiz2.insere("é");
    raiz2.insere("muito");
    raiz2.insere("legal");

    if(raiz2.contem("ruim"))
        cout << "Programação estruturada é ruim." << endl;
    
    if(raiz2.contem("legal"))
        cout << "Programação estruturada é legal." << endl;
    return 0;
}