#include <iostream>
#include <algorithm>

using namespace std;

struct Camiseta{
	string nomeEstudante, cor;
	char tamanho;
};

// Cabeçalhos das funções a serem usadas
void executa(); // Executa o fluxo do programa
void lePedido(Camiseta [], int); // Lê o pedido como um todo
void leCamiseta(Camiseta &); // Lê os dados de uma camiseta
bool ordenaCamisetas(const Camiseta &, const Camiseta &); // Função auxiliar para ordenar as camisetas
int comparaTamanho(char, char); // Função auxiliar que diz se uma camiseta é maior que a outra
void exibePedido(Camiseta [], int); // Exibe o pedido como um todo
void exibeCamiseta(Camiseta &); // Exibe os dados de uma camiseta

int main(){
	executa();
	return 0;
}

void executa(){
	int numCamisetas;
	bool primeiroCaso=true;
	do{
		cin >> numCamisetas;
		if(numCamisetas==0)
			break;

		if(!primeiroCaso)
			cout << endl;
		else
			primeiroCaso = false;
		Camiseta pedido[numCamisetas];
		lePedido(pedido, numCamisetas);
		sort(pedido, pedido+numCamisetas, ordenaCamisetas);
		exibePedido(pedido, numCamisetas);
	}while(true);
}

void lePedido(Camiseta pedido[], int tamanho){
	for (int i=0;i<tamanho;i++){
		leCamiseta(pedido[i]);
	}
}

void leCamiseta(Camiseta &c){
	cin.ignore();
	getline(cin, c.nomeEstudante);
	cin >> c.cor >> c.tamanho;
}

bool ordenaCamisetas(const Camiseta &c1, const Camiseta &c2){
	if(c1.cor<c2.cor)
		return true;
	else if(c1.cor == c2.cor){
		int cmp=comparaTamanho(c1.tamanho, c2.tamanho);
		if(cmp<0)
			return true;
		else if(cmp==0)
			return c1.nomeEstudante<c2.nomeEstudante;
	}else
		return false;
	return false;
}

int comparaTamanho(char t1, char t2){
	if(t1==t2)
		return 0;
	else if(t1=='P' || (t1=='M' && t2=='G'))
		return -1;
	else
		return 1;
}

void exibePedido(Camiseta pedido[], int tamanho){
	for (int i=0;i<tamanho;i++){
		exibeCamiseta(pedido[i]);
	}
}

void exibeCamiseta(Camiseta &c){
	cout << c.cor << " " << c.tamanho << " " << c.nomeEstudante << endl;
}
