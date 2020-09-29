#include <iostream>
#include <cstdlib>

using namespace std;

int leSegundos(){
	int N;
	cin >> N;
	return N;
}

void exibeSaida(int horas, int minutos, int segundos){
	cout << horas << ":" << minutos << ":" << segundos << endl;
}

void processa(int N){
	div_t horasR = div(N, 3600);
	div_t minutosR = div(horasR.rem, 60);
	int segundos = minutosR.rem;
	exibeSaida(horasR.quot, minutosR.quot, segundos);	
}

int main(){
	int N = leSegundos();
	processa (N);
	return 0;
}
