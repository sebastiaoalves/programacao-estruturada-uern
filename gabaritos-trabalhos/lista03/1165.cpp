#include <iostream>
#include <cmath>

using namespace std;

int leCasos(){
	int c;
	cin >> c;
	return c;
}

int leNumero(){
	int n;
	cin >> n;
	return n;
}

bool ehPrimo(int num){
	// Usamos a sentinela(flag) primo. Ela inicia como verdadeiro.
	// Caso identifiquemos que ela tem divisor, além de 1 e o próprio número
	// a flag é mudada para false. Caso não haja ela continua true.

	bool primo = true;

	// Para verificar os divisores do número não precisamos ir até seu final.
	// Por exemplo, 36 é divisível por 18, mas não precisamos testar até ele porque
	// se ele é divisível por 18, também é por 2 ( 36/2=18 e 36/18=2). Assim, podemos
	// testar até a raiz do número, se ele não tiver divisor até lá, não terá mais.
	// Por exemplo 49, se não houver divisor até 7 não terá mais, porque se tivesse
	// este já teria sido detectado.

	int limite = sqrt(num); // sqrt calcula a raiz quadrada

	int divisor = 2; // O primeiro divisor a ser testado

	while (divisor <= limite){
		if (num%divisor == 0){
			primo = false;
			break;
		}
		divisor++;
	}
	return primo;
}

void saida(int num){
	if(ehPrimo(num))
		cout << num << " eh primo" << endl;
	else
		cout << num << " nao eh primo" << endl;
}

int main(){
	int casos = leCasos();
	for(int i=0;i<casos;i++)
		saida( leNumero() );
	return 0;
}
