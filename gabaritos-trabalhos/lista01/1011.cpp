#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	const double pi=3.14159;
	double R; // Usar double pois é um número real
	cin >> R;
	double volume = 4.0/3.0 * pi * pow(R,3); // função pow do cmath faz a exponenciação
	cout << fixed << setprecision(3) << "VOLUME = " << volume << endl;	
	return 0;
}
