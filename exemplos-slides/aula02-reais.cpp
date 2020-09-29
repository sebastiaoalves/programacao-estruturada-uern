#include <iostream>

#include <iomanip>

#include <cmath>

//math.h

using namespace std;
int main(){
    double raio;
    cout << "Raio" << raio << endl;
    cout << "Digite um raio para saber a área do círculo:";
    cin >> raio;
    double area = M_PI * pow(raio, 2); //**
    cout << fixed << setprecision(2);
    cout << "Área: " << area << endl;
    return 0;
}
