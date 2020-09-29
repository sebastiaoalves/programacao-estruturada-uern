#include <iostream>

using namespace std;

int main(){
	int N, horas, minutos, segundos;
	cin >> N;
	// Para o total em minutos divide-se por 60, o que sobrar são os segundos
	minutos = N/60;
	segundos = N%60;
	// A cada 60 minutos temos uma hora. O que sobrar são os minutos mesmo
	horas = minutos/60;
	minutos = minutos % 60;
	cout << horas << ":" << minutos << ":" << segundos << endl;
	return 0;
}
