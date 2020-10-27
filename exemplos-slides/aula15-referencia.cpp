#include <iostream>

using namespace std;

int main(){

    // x=10           x -> 10 <- y
    // y=x            x-> 10     y -> 10

    int x = 10, y = 50;

    int &ref_x = x;

    cout << ref_x << endl;

    ref_x = y;

    cout << x << endl;

    return 0;
}