#include <iostream>

using namespace std;

int **aloca(int linhas){
    int ** matriz = new int* [linhas]; // aloca as linhas

    for(size_t i = 0; i<linhas; i++) // aloca as colunas de cada linha
        matriz[i] = new int[i+1];
    
    return matriz;
}

void desaloca(int **triangulo, int linhas){

    for(size_t i = 0; i<linhas; i++) // desaloca as colunas de cada linha
        delete []triangulo[i];

    delete [] triangulo; // desaloca as linhas
}

void preenche(int **triangulo, int linhas){

    triangulo[0][0]=1;

    for(size_t i = 1; i<linhas; i++){
        triangulo[i][0] = 1;  // primeiro elemento é 1
        triangulo[i][i] = 1;  // último elemento é 1
        //(2,1) = (1,0) + (1,1)
        //(4,2) = (3,1) + (3,2)
        //(x,y) = (x-1, y-1) + (x-1, y)
        for(size_t j=1; j<i; j++)
            triangulo[i][j] = triangulo [i-1][j-1] + triangulo [i-1][j];
    }
}

void exibe(int **triangulo, int linhas){
    for(size_t i=0; i<linhas; i++){
        for(size_t j=0; j<=i; j++)
            cout << triangulo[i][j] << " ";
        cout << endl;
    }

}

int main(){
    int linhas;
    cout << "Digite o número de linhas para o triângulo de pascal: ";
    cin >> linhas;

    int **triangulo = aloca(linhas);

    preenche(triangulo, linhas);

    exibe(triangulo, linhas);

    desaloca(triangulo, linhas);

    return 0;
}