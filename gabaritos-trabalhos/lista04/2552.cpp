#include <iostream>

using namespace std;

int tabuleiro[100][100];
int saida[100][100];
int linhas, colunas;

void processamento();
void exibe();

void leTabuleiro(){
	for (int i=0; i<linhas; i++)
		for (int j=0; j<colunas; j++)
			cin >> tabuleiro[i][j];
	
}

void leitura(){
	while(cin >> linhas >> colunas){
		leTabuleiro();
		processamento();
		exibe();
	}
}

void processamento(){
	int direcoes[4][2] = {
			/*Cima */    {-1, 0},
			/*Baixo*/    {1, 0},
			/*Esquerda*/ {0, -1},
		       /* Direita */ {0, 1} };
	for (int i=0; i<linhas; i++)
		for (int j=0; j<colunas; j++){
			if(tabuleiro[i][j]==1){
				saida[i][j]=9;
				continue;
			}
			int cont=0;
			for(int d=0; d<4; d++){ // Soma a posição atual com a direção desejada
				int l = i+direcoes[d][0], c = j+direcoes[d][1];
				if(l>=0 && l<linhas && c>=0 && c<colunas)
					cont +=tabuleiro[l][c];
			}
			saida[i][j]=cont;
		}
}

void exibe(){
	for (int i=0; i<linhas; i++){
		for (int j=0; j<colunas; j++)
			cout << saida[i][j];
		cout << endl;
	}

}


int main(){
	leitura();
	return 0;
}
