#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int valor_busca, encontrou = 0;
    
    cout << "Digite um valor para buscar na matriz: ";
    cin >> valor_busca;

    // Busca pelo valor na matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] == valor_busca) {
                cout << "Valor encontrado na posicao [" << i << "][" << j << "]" << endl;
                encontrou = 1;
            }
        }
    }

    if(!encontrou) {
        cout << "Valor nao encontrado!" << endl;
    }

    return 0;
}