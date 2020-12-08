#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

struct Pessoa{
	string nome;
	int idade;
	double peso;
};

int main(){
	map<string, double> produtos;
	
	produtos["sabão"] = 2.3;
	produtos["carne"] = 32.90;
	produtos["arroz"] = 4.3;
	cout << "Produtos cadastrados:" << endl;
	for(auto produto:produtos)
		cout << produto.first << " - R$ " << produto.second << endl;

	cout << "--------------" << endl;

	if( produtos["feijão"] > 7.0)
		cout << "O feijão está caro!" << endl;

	if( produtos.find("feijão") != produtos.end() )
		cout << "O feijão está na lista!!" << endl;

	if( produtos.find("tomate") == produtos.end() )
		cout << "Tomate não está na lista!!" << endl;

	cout << "Produtos começando com a letra i em diante" << endl;
	for(auto it = produtos.lower_bound("f"); it!=produtos.end();it++)
		cout << it->first << " - R$ " << it->second << endl;

	produtos.erase("carne");

	cout << "--------------" << endl;

	for(auto it = produtos.begin(); it!=produtos.end(); it++)
		cout << it->first << " - R$ " << it->second << endl;

	return 0;
}
