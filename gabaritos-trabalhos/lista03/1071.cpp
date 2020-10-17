#include <iostream>
#include <algorithm>

using namespace std;

int inicio, fim;


// Faz a leitura. Como a soma dos números vai pegar uma sequência, se o primeiro 
// for maior que o segundo ele inverte a ordem
void leitura(){
	cin >> inicio >> fim;
	if(inicio > fim)
		swap(inicio, fim); // a função swap troca dois valores
}

int somaImpares(int inicio, int fim){
	int soma = 0; // Inicia o acumulador da soma com zero
	if(inicio%2==0) // Se o número for par, ele decrementa para que comece de um número ímpar
		inicio--;
	// Começa de inicio+2 porque é o próximo número ímpar
	for(int i=inicio+2; i<fim; i+=2) 
		soma+=i;  // acumula na variável soma os valores até que ultrapassem o fim
	return soma;
}

void exibeSoma(int total){
	cout << total << endl;
}


int main(){
	leitura();
	int s = somaImpares(inicio, fim);
	exibeSoma(s);
	return 0;
}
