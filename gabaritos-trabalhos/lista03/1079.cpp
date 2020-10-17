#include <iostream>
#include <iomanip>

using namespace std;

double n1, n2, n3;

int leCasos(){
	int c;
	cin >> c;
	return c;
}

void leNumeros(){
	cin >> n1 >> n2 >> n3;
}

const double PESO1=2, PESO2=3, PESO3=5;

double calcMediaPonderada(double n1, double n2, double n3){
	double media;
	media = (n1*PESO1 + n2*PESO2 + n3*PESO3) / (PESO1+PESO2+PESO3);
	return media;
}

void exibeMedia(double valor){
	cout << fixed << setprecision(1) << valor << endl;  // Exibir com 1 casa decimal de precisão
}


int main(){
	int casos = leCasos();
	for(int i=0;i<casos;i++){
		leNumeros();
		exibeMedia ( calcMediaPonderada(n1, n2, n3) );
	}
	return 0;
}
