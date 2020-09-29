#include<iostream>

using namespace std;

/*
Tabuada de 0
0*1=0
0*2=0
...
0*10=0

Tabuada de 1
1*1=1
1*2=2
...
1*10=10

...

*/

void tabuada(int num){
    cout << "Tabuada de " << num << endl;
    for(int i=0;i<=10;i++)
        cout << num << " * " << i << " = "  << num*i << endl;
    cout << endl;
}

int main(){
    for(int i=1;i<=10;i++)
        tabuada(i);
    return 0;
}