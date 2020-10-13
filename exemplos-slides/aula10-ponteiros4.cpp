#include <iostream>

using namespace std;

int main(){

    char str[21];
    cout << "Digite uma string de até 10 caracteres: ";
    fgets(str, 20, stdin);
    
    // String terminam com \0
    char *ptr_str = str;
    size_t contador=0;
    while(*ptr_str!='\0' && *ptr_str!='\n'){ // prt_str!=0  ou ptr_str
        contador++;
        ptr_str++;
    }

    cout << "A string tem " << contador << " caractres." << endl;

    //Palindromo    ovo ana "everton notreve"   casa abba 
    bool ehPalindrome=true;

    char *ptr_frente = str, *ptr_tras = str + contador - 1 ;

    while (ptr_frente < ptr_tras){
        if(*ptr_frente != *ptr_tras){
            ehPalindrome = false;
            break;
        }
        ptr_frente++;
        ptr_tras--;
    }

    if(ehPalindrome)
        cout << "A palavra é um palíndromo!" << endl;
    else
        cout << "A palavra não é um palíndromo!" << endl;

    return 0;
}