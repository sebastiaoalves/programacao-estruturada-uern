#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double leRaio(){
	double R;
	cin >> R;
	return R;
}

double calcVolume(double R){
	const double pi=3.14159;
	double volume = 4.0/3.0 * pi * pow(R,3);
	return volume;
}

void exibeVolume(double volume){
	cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;	
}

int main(){
	// Mostrando a chamada de uma função como parâmetro de outra
	exibeVolume( calcVolume( leRaio() ) );
	return 0;
}
