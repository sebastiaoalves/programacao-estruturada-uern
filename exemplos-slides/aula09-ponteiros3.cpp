#include <iostream>

using namespace std;

// vetor = 1000
// ptr = 1000

int main(){
    double vetor [3] = {3.0, 9.5, 8.2};

    double *ptr = vetor; // ptr = & vetor[0];

    ptr[1] = -0.2;

    *vetor = 8.5;

    for(int i=0;i<3;i++)
        cout << *(ptr+i) << endl;  // vetor[i]  ou ptr[i] 
    
    // vetor+0 == vetor[0]
    // vetor+1 == vetor[1]


    return 0;
}