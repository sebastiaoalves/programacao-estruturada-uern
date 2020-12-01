#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 3> arr;

    array<int, 3>::iterator it = arr.begin();
    while(it!=arr.end()){
        cin >> *it;
        it++;
    }

    for(int &aux : arr){
        aux *=2;
    }
    cout << "----------" << endl;

    for(auto it2=arr.rbegin() ; it2!=arr.rend(); it2++)
        cout << *it2 << endl;

    return 0;
}


// | A | C | B | E | H | F | G | J | |