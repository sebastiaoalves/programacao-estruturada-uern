#include <iostream>
#include <set>

using namespace std;

int main(){
        set<int> conjunto;
        conjunto.insert(20);
        conjunto.insert(10);
        conjunto.insert(25);
        conjunto.insert(5);
        conjunto.insert(15);
        for(int i:conjunto)
                cout << i << endl;
        cout << "--------------" << endl;

        conjunto.insert(10);
        conjunto.insert(20);
        for(int i:conjunto)
                cout << i << endl;

        cout << "--------------" << endl;
        
	set<int>::iterator it1 = conjunto.find(18);
	auto it2 = conjunto.find(10);

	if(it1!=conjunto.end())
		cout << "elemento 18 encontrado" << endl;
        else
                cout << "elemento 18 não encontrado" << endl;
        
	if(it2!=conjunto.end())
		cout << "elemento 10 encontrado" << endl;
        else
        	cout << "elemento 10 não encontrado" << endl;

	auto inicio = conjunto.lower_bound(7);
	auto fim = conjunto.upper_bound(22);

	for(auto it = inicio;it!=conjunto.end(); it++)
		cout << *it << endl;

        cout << "--------------" << endl;

	for(auto it = conjunto.begin(); it!=fim; it++)
		cout << *it << endl;
        
        cout << "--------------" << endl;

	conjunto.erase(inicio, fim);

        for(int i:conjunto)
                cout << i << endl;

        return 0;
}       

