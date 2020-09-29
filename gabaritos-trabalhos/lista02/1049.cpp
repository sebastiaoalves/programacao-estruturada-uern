#include <iostream>
#include <string>

using namespace std;

string palavra1, palavra2, palavra3;

void leEntrada(){
	cin >> palavra1 >> palavra2 >> palavra3;
}

void saida(string animal){
	cout << animal << endl;
}

void verificaAnimal(){
	if(palavra2=="ave")
		if(palavra3=="carnivoro")
			saida("aguia");
		else
			saida("pomba");
	else if(palavra2=="mamifero")
		if(palavra3=="onivoro")
			saida("homem");
		else
			saida("vaca");
	else if(palavra2=="inseto")
		if(palavra3=="hematofago")
			saida("pulga");
		else
			saida("lagarta");
	else 
		if(palavra3=="hematofago")
			saida("sanguessuga");
		else
			saida("minhoca");
}

int main(){
	leEntrada();
	verificaAnimal();
	return 0;
}
