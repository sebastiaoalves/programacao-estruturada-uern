#include <iostream>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;

    set<string> lista;

    for(int i=0;i<n;i++){
        string nomeItem;
        cin >> nomeItem;
        lista.insert(nomeItem);
    }
    
    for(string item : lista){
        cout << item << " ";
    }

    cout << endl;

    return 0;
}