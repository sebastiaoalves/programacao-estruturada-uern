#include <iostream>

using namespace std;

int main(){
    int contador=0;
    for(char ch1='a';ch1<='z';ch1++)
        for(char ch2='a';ch2<='z';ch2++){
            if(ch1==ch2)
                continue;
            for(char ch3='a';ch3<='z';ch3++){
                contador++;
                if(ch1==ch3 || ch2==ch3)
                    continue;
                cout << ch1 << ch2 << ch3 << endl;
            }
        }
    cout << contador << endl;
    return 0;
}