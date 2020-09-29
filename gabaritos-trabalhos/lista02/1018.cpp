#include <iostream>
#include <cstdlib>

using namespace std;

int leValor(){
	int N;
	cin >> N;
	return N;
}

void exibeNotas(int notas, int valor){
	cout << notas << " nota(s) de R$ " << valor << ",00" << endl;
}

void processaPagamentos(int N){
	cout << N << endl;
	div_t notas;
       	notas = div(N,100); // Notas de 100
	exibeNotas(notas.quot, 100);
       	notas = div(notas.rem,50); // Notas de 50
	exibeNotas(notas.quot, 50);
       	notas = div(notas.rem,20); // Notas de 20
	exibeNotas(notas.quot, 20);
       	notas = div(notas.rem,10); // Notas de 10
	exibeNotas(notas.quot, 10);
       	notas = div(notas.rem,5); // Notas de 5
	exibeNotas(notas.quot, 5);
       	notas = div(notas.rem,2); // Notas de 2
	exibeNotas(notas.quot, 2);
	exibeNotas(notas.rem, 1); // Notas de 1
}

int main(){
	processaPagamentos( leValor() );
	return 0;
}
