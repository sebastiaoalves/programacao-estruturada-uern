#include <iostream>

using namespace std;

int main(){
	int a=1, b=2, c;
	c = ++a + b;
	cout << a << ' ' << b << endl;
	c++;
	cout << c << endl;

	int d = 10, e = 7;
	// 1010
	// 0101
	//10100
	//  
	cout << (d>>1) << endl;
	cout << (d<<1) << endl;
	return 0;
}
