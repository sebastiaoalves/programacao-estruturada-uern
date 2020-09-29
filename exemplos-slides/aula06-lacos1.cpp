#include <iostream>

using namespace std;

int main(){
    int numero=5, fatorial=1;
 //   while(fatorial*=numero-- & numero);
    while(numero!=0){
        fatorial = fatorial * numero;
        numero --;
    }
    cout << fatorial << endl;
    return 0;
}