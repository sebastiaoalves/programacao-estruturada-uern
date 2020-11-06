#include <iostream>
#include <cstdlib>

using namespace std;

#define PI 3.1415
#define QUAD(x) x * x
struct NohLista{
    int dado;
    struct NohLista *prox;
};

#define NL struct NohLista
#define ALOCA_NL (struct NohLista *) malloc(sizeof(struct NohLista))

#define PRINT_VETOR(v, tam) for(int i=0;i<tam;i++) \
                                cout << v[i] << endl;

inline void printVetor(int v[], int tam){
    for(int i=0;i<tam;i++) 
      exibe(v[i]);
}

inline void exibe(int x){
    cout << x << endl;
}


int main(){
    double raio=10;
    double area = PI * QUAD((raio+10));  //double area = 3.1415 * pow(raio, 2);

    NL *ptr = ALOCA_NL;

    cout << area << endl;

    int vetor[]={1,2,3,4,5};
    PRINT_VETOR(vetor, 5)
    print_vetor(vetor, 5); // verificar o que é gerado com g++ -E
    return 0;
}