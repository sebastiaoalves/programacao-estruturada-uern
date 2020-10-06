#include <iostream>

using namespace std;

int mostraMenu(){
    int opcaoEscolhida;
    do{
        cout << "Escolha a opção do menu" << endl;
        cout << "1 - Inserir na pilha" << endl;
        cout << "2 - Remover da pilha" << endl;
        cout << "3 - Exibir elementos da pilha" << endl;
        cout << "4 - Sair do programa" << endl;
        cout << "Digite a opção: ";
        cin >> opcaoEscolhida;
        if(opcaoEscolhida<1 || opcaoEscolhida>4){
            cout << "Opção inválida, tente novamente." << endl;
            continue;
        }
        cout << "Você escolheu a opção " << opcaoEscolhida << endl;
    }while(opcaoEscolhida<1 || opcaoEscolhida>4);
    return opcaoEscolhida;
}

int main(){
    int opcao=mostraMenu();
    return 0;
}