#include <iostream>

using namespace std;

// Usando variáveis globais e operadores lógicos
int n1, n2, n3;

void entrada(){
	cin >> n1 >> n2 >> n3;
}

void saida(int menor, int meio, int maior){
	cout << menor << endl << meio << endl << maior << endl;
	cout << endl;
	cout << n1 << endl << n2 << endl << n3 << endl;
}

void ordena(){
	if(n1<=n2 && n1<=n3 && n2<=n3) // n1 é o menor
		saida(n1, n2, n3);          // n2 meio, n3 maior

	else if(n1<=n2 && n1<=n3)  // n1 é o menor
		saida(n1, n3, n2);          // n3 meio, n2 maior

	else if(n2<=n3 && n1<=n3) // n2 é o menor 
		saida(n2, n1, n3); // n1 meio, n3 maior

	else if(n2<=n3) // n2 é o menor
		saida(n2, n3, n1); // n3 meio, n1 maior

	else if(n1<=n2) // n3 é o menor
		saida(n3, n1, n2); // n1 meio, n3 maior

	else // n3 é o menor
		saida(n3, n2, n1); // n2 meio, n1 maior
}


int main(){
	entrada();
	ordena();
}
