#include <iostream>

using namespace std;

int main(){
    int contador=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++)
            for(int k=0;k<20;k++)
                contador++;
    }

    for(char ch1='a';ch1<='z';ch1++)
        for(char ch2='a';ch2<='z';ch2++)
            for(char ch3='a';ch3<='z';ch3++)
                cout << ch1 << ch2 << ch3 << endl;
    cout << contador << endl;
    return 0;
}