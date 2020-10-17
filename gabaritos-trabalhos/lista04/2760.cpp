#include <iostream>

using namespace std;

void exibe1(string s1, string s2, string s3){
    cout << s1 << s2 << s3 << endl;
}


void exibe2(string s1, string s2, string s3){
    cout << s2 << s3 << s1 << endl;
}

void exibe3(string s1, string s2, string s3){
    cout << s3 << s1 << s2 << endl;
}

void exibe4(string s1, string s2, string s3){
    if(s1.size()>10)
        s1.resize(10);
    if(s2.size()>10)
        s2.resize(10);
    if(s3.size()>10)
        s3.resize(10);
    cout << s1 << s2 << s3 << endl;
}

void leitura(){
    string s1,s2,s3;

    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);

    exibe1(s1, s2, s3);
    exibe2(s1, s2, s3);
    exibe3(s1, s2, s3);
    exibe4(s1, s2, s3);

}


int main(){
    leitura();
    return 0;
}
