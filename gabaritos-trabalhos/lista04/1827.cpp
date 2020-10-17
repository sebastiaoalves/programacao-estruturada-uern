#include <iostream>

using namespace std;

int matriz[102][102]; // Declarando o vetor com o tamanho máximo

void preenche(int tam);
void exibe(int tam);

int leitura(){
	int tam;
	while(cin >> tam){
		preenche(tam);
		exibe(tam);
	}
	return tam;
}

void preencheExterno(int tam){
	for (int l=0; l<tam; l++)
		for(int c=0; c<tam; c++)
			matriz[l][c] = 0;
}

void preencheDiagonalPrincipal(int tam){
	for(int i=0;i<tam;i++)
		matriz[i][i] = 2; // Diagonal principal, os índices linha = i, coluna = i
}

void preencheDiagonalSecundaria(int tam){
	for(int l=0, c=tam-1;l<tam;l++, c--)
		matriz[l][c] = 3; // Diagonal secundaria, os índices linha incrementa e coluna decrementa
}

void preencheInterno(int tam){
	for(int l=tam/3, fim=tam-tam/3; l<fim; l++)
		for(int c=tam/3; c<fim; c++){
			matriz[l][c] = 1;
		}
}

void preencheCentro(int tam){
	matriz[tam/2][tam/2]=4;
}

void preenche(int tam){
	preencheExterno(tam);
	preencheDiagonalPrincipal(tam);
	preencheDiagonalSecundaria(tam);
	preencheInterno(tam);
	preencheCentro(tam);
}

void exibe(int tam){
	for(int l=0; l<tam; l++){
		for(int c=0; c<tam; c++)
			cout << matriz[l][c];
		cout << endl;
	}
	cout << endl;
}


int main(){
	leitura();
	return 0;
}
