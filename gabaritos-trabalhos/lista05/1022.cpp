#include <iostream>

using namespace std;

struct Fracao{
	int num;
	int den;
};

// Protótipos das funções a serem usadas
void executa();  // Função que chama todas as outras
Fracao leFracao(); // Lê a fração no formato num / den
Fracao processa(const Fracao &, char, const Fracao &); // Dá o resultado da operação com duas frações
Fracao soma(const Fracao &, const Fracao &); // Dá o resultado da soma
Fracao subtracao(const Fracao &, const Fracao &); // Dá o resultado da subtração
Fracao multiplicacao(const Fracao &, const Fracao &); // Dá o resultado da multiplicação
Fracao divisao(const Fracao &, const Fracao &); // Dá o resultado da divisão
void mostraFracao(const Fracao &); // Mostra a fração no formato num/den
Fracao simplificaFracao(const Fracao &); // Retorna uma fração simplificada
int calculaMDC(int, int); // Retorna o resultado do máximo divisor comum

int main(){
	executa();
	return 0;
}

void executa(){
	int casos;
	cin >> casos;
	for(int i=0;i<casos;i++){
		Fracao f1 = leFracao();
		char op;
		cin >> op;
		Fracao f2 = leFracao();
		Fracao resultado = processa(f1, op, f2);
		mostraFracao(resultado);
		cout << " = ";
		Fracao simplificada = simplificaFracao(resultado);
		mostraFracao(simplificada);
		cout << endl;
	}
}

Fracao leFracao(){
	Fracao f;
	char barra;
	cin >> f.num >> barra >> f.den;
	return f;
}

Fracao processa(const Fracao &a, char operacao, const Fracao &b){
	switch(operacao){
		case '+':
			return soma(a, b);
		case '-':
			return subtracao(a,b);
		case '*':
			return multiplicacao(a,b);
		case '/':
			return divisao(a,b);
	}
	return {0,0};
}

Fracao soma(const Fracao &a, const Fracao &b){
	Fracao f={a.num*b.den + b.num*a.den, a.den*b.den};
	return f;
}

Fracao subtracao(const Fracao &a, const Fracao &b){
	Fracao f={a.num*b.den - b.num*a.den, a.den*b.den};
	return f;
}

Fracao multiplicacao(const Fracao &a, const Fracao &b){
	Fracao f={a.num*b.num, a.den*b.den};
	return f;
}

Fracao divisao(const Fracao &a, const Fracao &b){
	Fracao f={a.num*b.den, a.den*b.num};
	return f;
}

void mostraFracao(const Fracao &f){
	if(f.den>=0)
		cout << f.num << "/" << f.den;
	else
		cout << f.num*-1 << "/" << f.den*-1;
}

Fracao simplificaFracao(const Fracao &f){
	int mdc = calculaMDC(f.num, f.den);
	Fracao s = {f.num/mdc, f.den/mdc};
	return s;
}

int calculaMDC(int n1, int n2){
	int resto = n1 % n2;
	while(resto != 0){
		n1 = n2;
		n2 = resto;
		resto = n1 % n2;
	}
	return n2;
}
