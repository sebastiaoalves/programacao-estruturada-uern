#include <iostream>
using namespace std;

int soma(int a, int b){
    cout << "Soma de inteiros" << endl;
    return a+b;
}

double soma(double a, double b){
    cout << "Soma de reais" << endl;
    return a+b;
}

double soma(int a, double b){
    cout << "Soma mista"  << endl;
    int c=a+b;
    return c;
}

int main(){
    cout << soma(
                soma(10,20),  //30
                soma(30.0, 40.0) // 70.0
            ) << endl;
    return 0;
}