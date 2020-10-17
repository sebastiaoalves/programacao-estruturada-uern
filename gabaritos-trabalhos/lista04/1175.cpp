#include <iostream>

using namespace std;

const int NUM_ELEMENTOS=20;

void leVetor(int *vetor){
	for(int i=0; i<NUM_ELEMENTOS; i++)
		cin >> vetor[i];
}

void inverteVetor(int *vetor){ 
	// Só precisa ir até a metade (i=inicio, f=fim)
	for(int i=0, f=NUM_ELEMENTOS-1; i<NUM_ELEMENTOS/2; i++, f--){ // incrementa o início e decrementa o fim
		int tmp = vetor[i];  // Fazendo a troca manualmente usando uma variável temporária auxiliar
		vetor[i] = vetor[f];
		vetor[f] = tmp;
	}
}

void exibeVetor(int *vetor){
	for(int i=0; i<NUM_ELEMENTOS; i++)
		cout << "N[" << i << "] = " << vetor[i] << endl;

}

int main(){
	int N[20];
	leVetor(N);
	inverteVetor(N);
	exibeVetor(N);
	return 0;
}
