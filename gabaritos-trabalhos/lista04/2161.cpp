#include <iostream>
#include <iomanip>

using namespace std;

int leitura(){
	int N;
	cin >> N;
	return N;
}

double calcDenominador(int N){
	double den=6.0;
	for(int i=0; i<N-1; i++)
		den = 6.0+1/den;
	return den;
}

void exibe(int N){
	double plus=0.0;
	if(N>0)
		plus=1/calcDenominador(N);
	cout << fixed << setprecision(10) << 3.0+plus << endl;
}

int main(){
	int N = leitura();
	exibe(N);
	return 0;
}
