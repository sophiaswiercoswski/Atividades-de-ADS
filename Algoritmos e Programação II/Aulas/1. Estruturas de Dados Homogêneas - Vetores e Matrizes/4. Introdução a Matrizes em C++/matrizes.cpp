#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    // Preenchendo a matriz com valores
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Digite um valor para a posicao [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Exibindo os valores da matriz
    cout << "Matriz inserida:" << endl;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}