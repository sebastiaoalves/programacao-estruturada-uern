// Sem usar operadores lógicos
//
#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if(n1<n2)
		if(n1<n3) // n1 é o menor, quem é o segundo menor ?
			if(n2<n3) // primeiro n2, depois n3
				cout << n1 << endl << n2 << endl << n3 << endl;
			else  // primeiro n3, depois n2
				cout << n1 << endl << n3 << endl << n2 << endl;
		else // n3 é o menor
			cout << n3 << endl << n1 << endl << n2 << endl;
	else // n2 é menor que n1
		if(n2<n3) // n2 é o menor, quem é o segundo menor ?
			if(n1<n3) // primeiro n1, depois n3
				cout << n2 << endl << n1 << endl << n3 << endl;
			else // primeiro n3, depois n1
				cout << n2 << endl << n3 << endl << n1 << endl;
		else // n3 é o menor
			cout << n3 << endl << n2 << endl << n1 << endl;

	// Exibindo os três na ordem original
	cout << endl << n1 << endl << n2 << endl << n3 << endl;	
	return 0;
}
