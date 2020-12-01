#include <iostream>
#include <list>

using namespace std;

int main(){
    int n;
    cin >> n;

    list<string> lista;

    for(int i=0;i<n;i++){
        string nomeItem;
        cin >> nomeItem;
        lista.push_back(nomeItem);
    }
    
    lista.sort();
    lista.unique();

    for(string item : lista){
        cout << item << " ";
    }

    cout << endl;

    return 0;
}