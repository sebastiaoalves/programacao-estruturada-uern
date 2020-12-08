#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> divmod(int dividendo, int divisor){
	return make_tuple (dividendo/divisor, dividendo % divisor);
}

int main(){
	tuple<string, int, double> pessoa ("Sebastião", 174, 77.5);
	string nome;
	int altura;
	double peso;
	tie(nome, altura, peso) = pessoa;

	cout << nome << " tem altura " << altura << "cm e peso " << peso << " quilos." << endl;

	cout << "------------------------" << endl;

	auto aluno = make_tuple("João", array<double, 3>{6.3, 8.4, 9.5}, 12);
	get<1>(aluno)[2]=10;
	array<double,3> notas;
	int faltas;
	tie(ignore, notas, faltas) = aluno;
	cout << "O aluno tem notas : " << notas[0] << " " << notas[1] << " " << notas[2] << " e " << faltas << " faltas." << endl;

	int quociente, resto;
	tie(quociente, resto) = divmod(10, 3);

	cout << quociente << " " << resto << endl;

	// map<char, tuple<string, int>> dicionario;
	// dicionario['h'] = "hoje";
	// dicionario["hoje"]="h.";
	// vector<int> v(20000, 10)
	// fill(v.begin(), v.end(), 10);

	return 0;
}
