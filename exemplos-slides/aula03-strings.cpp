#include <iostream>
#include <string>

using namespace std;
int main()
{
    char letra = 'a';
    cout << letra << ' ' << letra+3 << ' ' << char (letra-3) << ' ' << endl;
    string nome="Sebastião\n", sobrenome="\t Alves";
    cout << nome << ' ' << sobrenome << endl;
    return 0;
}
