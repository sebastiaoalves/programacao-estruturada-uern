#include <iostream>

using namespace std;

int main(){
	int N;
	cin >> N;
	cout << N << endl;
	int n100, n50, n20, n10, n5, n2, n1;

	// Para todas as notas usamos o quociente e o resto, partindo das notas maiores para as menores.
	// Ex: Se o valor é 383, para as notas de 100 o quociente é 3 e o resto é 83.
	// Então temos 3 notas de 100 e 83 fica para distribuir para as demais cédulas.
	n100 = N/100; N %= 100;
	n50 = N/50; N %= 50;
	n20 = N/20; N %= 20;
	n10 = N/10; N %= 10;
	n5 = N/5; N %= 5;
	n2 = N/2; N %= 2;
	n1 = N;

	cout << n100 << " nota(s) de R$ 100,00" << endl;
	cout << n50 << " nota(s) de R$ 50,00" << endl;
	cout << n20 << " nota(s) de R$ 20,00" << endl;
	cout << n10 << " nota(s) de R$ 10,00" << endl;
	cout << n5 << " nota(s) de R$ 5,00" << endl;
	cout << n2 << " nota(s) de R$ 2,00" << endl;
	cout << n1 << " nota(s) de R$ 1,00" << endl;

	return 0;
}
