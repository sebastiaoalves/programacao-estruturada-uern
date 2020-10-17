#include <iostream>

using namespace std;

int X, Z;

void leitura(){
	cin >> X;
	do{
		cin >> Z;
	}while(! (Z>X)); // Lê enquanto Z não é maior que X
}

int calc(int X, int Z){
	// soma é o acumulador, próximo é o número a ser somado e sequencia é quantos números já foram somados
	int soma=0, proximo=X, sequencia=0;
	while(soma <= Z){  // Enquanto a soma não ultrapassou Z
		soma+=proximo; //  Acumula soma com o próximo
		proximo++; // Incrementa o próximo
		sequencia++; // Soma mais um na sequência
	}
	return sequencia;
}

void saida(int seq){
	cout << seq << endl;
}

int main(){
	leitura();
	saida ( calc(X,Z)) ;
	return 0;
}
