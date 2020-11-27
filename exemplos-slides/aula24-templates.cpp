#include <iostream>
#include <array>

using namespace std;

template <typename Num>
Num soma(Num a, Num b){
    return a+b;
}

class Aluno{
    public:
        string nome;
        double media;
        Aluno operator +(const Aluno &a){
            Aluno resp = {"Soma", 10};
            return resp;
        }
};

int main(){
    int x=10, y=20;
    int z = soma<int> (x, y);
    cout << z << endl;

    double d1=1.4, d2=3.8;
    double d3 = soma(d1, d2);
    cout << d3 << endl;

    string s1 = "Sebastião", s2 = "Alves";
    string s3 = soma(s1, s2);
    cout << s3 << endl;

    Aluno a1 = {s1, d1}, a2 = {s2, d2};
    Aluno a3 = soma(a1, a2);
    cout << a3.nome << " " << a3.media << endl;

    array<int, 10> v1;

    //int v1[10];

    return 0;
}