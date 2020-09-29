// Usando switch/case

#include <iostream>

using namespace std;

int leEntrada(){
	int ddd;
	cin >> ddd;
	return ddd;
}

void saida(string cidade){
	cout << cidade << endl;
}

string selecionaCidade(int ddd){
	string cidade;
	switch(ddd){
		case 61:
			cidade = "Brasilia";
			break;
		case 71:
			cidade = "Salvador";
			break;
		case 11:
			cidade = "Sao Paulo";
			break;
		case 21:
			cidade = "Rio de Janeiro";
			break;
		case 32:
			cidade = "Juiz de Fora";
			break;
		case 19:
			cidade = "Campinas";
			break;
		case 27:
			cidade = "Vitoria";
			break;
		case 31:
			cidade = "Belo Horizonte";
			break;
		default:
			cidade = "DDD nao cadastrado";
	}
	return cidade;
}

int main(){
	saida (selecionaCidade( leEntrada() ) );
	return 0;
}
