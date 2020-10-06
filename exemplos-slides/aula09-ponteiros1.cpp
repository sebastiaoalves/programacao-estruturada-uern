#include <iostream>

using namespace std;

// x == 10
// y == 0
// ptr_x == 1000
// ptr_y == 1004
// ptr == 1000

int main(){
    int x=10, y=0, *ptr_x, *ptr_y;
    void *ptr;
    ptr_x = &x;
    ptr_y = &y;
    ptr = ptr_x;
    cout << "Valor de x: " << x << endl;
    cout << "Endereço de x:" << ptr_x << endl;
    cout << "Valor de ptr :" << ptr << endl;
    cout << "Valor de y: " << y << endl;
    cout << "Endereço de y:" << ptr_y << endl;
    ptr = ptr_y;
    cout << "Valor de ptr :" << ptr << endl;
    return 0;
}