#include <iostream>
#include <cmath>

using namespace std;

int main(){
	cout << "Digite uma expressão do tipo NUMERO OPERADOR NUMERO (ex: 10 + 10)";
	int numero1, numero2;
	char operador;
	cin >> numero1 >> operador >> numero2;
	
	switch(operador){
		case '+':
			cout << numero1 + numero2 << endl;
			break;
		case '-':
			cout << numero1 - numero2 << endl;
			break;
		case '*':
			cout << numero1 * numero2 << endl;
			break;
		case '/':
			cout << numero1 / numero2 << endl;
			break;
		case '^':
			cout << int(pow(numero1,numero2)) << endl;
			break;
		default:
			cerr << "Erro: Você digitou um operador inválido." << endl;
	}

	return 0;
}
