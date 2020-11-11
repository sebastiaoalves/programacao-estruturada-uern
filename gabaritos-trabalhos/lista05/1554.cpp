#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Posicao{
	int id;
	double x;
	double y;
	double distancia;
};

// Protótipos das funções a serem usadas

void executa(); // Executa todo o algoritmo
void processa(); // Processa cada caso de teste
void leConteudo(Posicao [], int); // Lê o conteúdo do caso de teste
double calcDistancia(const Posicao &, const Posicao &); // Calcula a distância entre dois pontos
bool ordenaPosicoes(const Posicao &, const Posicao &); // Função auxiliar para ordenar os pontos pela distância

int main(){
	executa();
	return 0;
}

void executa(){
	int casos;
	cin >> casos;
	for(int i=0;i<casos;i++){
		processa();
	}
}

void processa(){
	int numBolas;
	cin >> numBolas;
	Posicao posicoes[numBolas+1];
	leConteudo(posicoes, numBolas);
	sort(posicoes, posicoes+(numBolas+1), ordenaPosicoes);
	cout << posicoes[1].id << endl;
}

void leConteudo(Posicao bolas[], int numBolas){
	for(int i=0;i<numBolas+1;i++){
		bolas[i].id=i;
		cin >> bolas[i].x >> bolas[i].y;
		bolas[i].distancia = calcDistancia(bolas[0], bolas[i]);
	}
}

double calcDistancia(const Posicao &p1, const Posicao &p2){
	return sqrt(pow(p2.x-p1.x, 2) + pow(p2.y-p1.y, 2));
}

bool ordenaPosicoes(const Posicao &p1, const Posicao &p2){
	return (p1.distancia<p2.distancia) ||
		(p1.distancia==p2.distancia && p1.id<p2.id);
}
