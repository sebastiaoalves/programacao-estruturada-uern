#include <iostream>

using namespace std;

const int NUM=15;
int pares[5], impares[5], contPares=0, contImpares=0;

// Só os cabeçalhos das funções que serão implementadas abaixo
void exibeVetor(int *, int, string); 
void processa(int numero);

void leitura(){
	int proximo;
	for(int i=0; i<NUM; i++){
		cin >> proximo;
		processa(proximo);
	}
	// Acabou a leitura se tiver algum número nos vetores, deve-se exibir
	if(contImpares>0)
		exibeVetor(impares, contImpares, "impar");
	if(contPares>0)
		exibeVetor(pares, contPares, "par");
}

bool ehPar(int numero){
	return numero%2 == 0;
}

void exibeVetor(int *vetor, int numElementos, string nome){
	for(int i=0; i<numElementos; i++)
		cout << nome << "[" << i << "] = " << vetor[i] << endl;
}

void processa(int numero){
	if(ehPar(numero)){
		pares[contPares] = numero;
		contPares++;
		if(contPares==5){  // Encheu o vetor, exibe e reinicia o contador
			exibeVetor(pares, contPares, "par");
			contPares=0;
		}
	}else{
		impares[contImpares] = numero;
		contImpares++;
		if(contImpares==5){  // Encheu o vetor, exibe e reinicia o contador
			exibeVetor(impares, contImpares, "impar");
			contImpares=0;
		}

	}
}

int main(){
	leitura();
	return 0;
}
