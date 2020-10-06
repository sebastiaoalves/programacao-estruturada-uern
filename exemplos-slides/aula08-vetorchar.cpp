#include <iostream>

using namespace std;
int main(){
    char nome[] = "Jose";
    char nome2[] = {'J', 'o', 's', 'e','\0'};
    cout << "Tamanho do vetor nome " << sizeof(nome) << endl;
    cout << "Tamanho do vetor nome2 " << sizeof(nome2) << endl;
    nome2[6]='a';
    cout << nome << endl;
    cout << nome2 << endl;
    return 0;
}
