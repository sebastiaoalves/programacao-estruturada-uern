#include <iostream>

using namespace std;

int entrada();
string parOuImpar(int);
void saida(string);
void exibeCabecalho();

int main(){
	exibeCabecalho();
	int a = entrada();
	string resultado = parOuImpar(a);
	saida(resultado);
	return 0;
}

int entrada(){
	int a;
	cout << "Digite o valor de a: ";
	cin >> a;
	return a;
}

string parOuImpar(int a){
	if(a%2==0)
		return "par";
	else
		return "impar";
}


void exibeCabecalho(){
	cout << "Universidade do Estado do Rio Grande do Norte" << endl;
	cout << "Disciplina Programação Estruturada" << endl;
	cout << "Exemplo de código para saber se um inteiro é par ou ímpar" << endl;
}

