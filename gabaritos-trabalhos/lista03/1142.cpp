#include <iostream>

using namespace std;

int leLinhas(){
	int l;
	cin >> l;
	return l;
}

void exibeLinha(int l){
	int inicio = 4*l+1;
	for(int i=0;i<3; i++) // Exibe os próximos 3 números
		cout << inicio+i << " ";
	cout << "PUM" << endl; // E depois exibe PUM
}

void saida(int linhas){
	for(int i=0;i<linhas;i++)
		exibeLinha(i);
}

int main(){
	saida( leLinhas() );
	return 0;
}
