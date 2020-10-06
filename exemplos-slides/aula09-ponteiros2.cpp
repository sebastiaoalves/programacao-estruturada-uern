#include <iostream>

using namespace std;


int main(){
    int x=10, y=20, *ptr;
    char *ptr2;

    ptr = &x;
    *ptr = 30;  // x = 30
    ptr = &y;
    *ptr = 40;  // y = 40

    int soma = x+*ptr;
    ptr2 = (char *)&x;
    *ptr2='a';

    cout << "Valor de x: " << x << endl;
    cout << "Valor de y: " << y << endl;
    cout << "Valor de soma: " << soma << endl;
    return 0;
}