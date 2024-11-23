#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int matriz[3][3] = {{5, 2, 3}, {9, 6, 1}, {7, 8, 4}};
    
    // Ordenar a primeira linha manualmente
    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 3; j++) {
            if(matriz[0][i] > matriz[0][j]) {
                swap(matriz[0][i], matriz[0][j]);
            }
        }
    }

    // Exibir a linha ordenada
    cout << "Primeira linha da matriz ordenada: " << endl;

    for(int i = 0; i < 3; i++) {
        cout << matriz[0][i] << " ";

    }

    return 0;
}