#include <iostream>

using namespace std;

int main(){
	int a;
	//cout << "Digite o valor de a: ";
	cin >> a;
	string resultado = (a%2==0) ? "par" : "ímpar" ;
	cout << "o numero eh " << resultado << endl;
	return 0;
}
