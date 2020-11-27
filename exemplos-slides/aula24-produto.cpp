#include <iostream>

using namespace std;

template <class Tipo>
struct Produto{
    Tipo codigo;
    double preco;
};

int main(){

    Produto<string> p1;
    p1.codigo="abc";
    cout << p1.codigo << endl;

    Produto<int> p2;
    p2.codigo=10;
    cout << p2.codigo << endl;
    
    return 0;
}
