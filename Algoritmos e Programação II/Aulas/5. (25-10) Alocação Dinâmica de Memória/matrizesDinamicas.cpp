// Exemplo de matriz dinâmica
#include <iostream>
using namespace std;

int main() {
    int linhas = 3;
    int colunas = 4;
    
    // Alocando matriz dinâmica
    int** matriz = new int*[linhas];
    for(int i = 0; i < linhas; i++) {
        matriz[i] = new int[colunas];
    }
    
    cout << "=== Preenchendo a Matriz ===" << endl;
    // Preenchendo a matriz
    for(int i = 0; i < linhas; i++) {
        for(int j = 0; j < colunas; j++) {
            matriz[i][j] = i * colunas + j + 1;  // Apenas um valor de exemplo
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Acessando elementos
    cout << "\n=== Acessando Elementos ===" << endl;
    cout << "Elemento [1][2]: " << matriz[1][2] << endl;
    
    // Liberando a memória
    for(int i = 0; i < linhas; i++) {
        delete[] matriz[i];  // Libera cada linha
    }
    delete[] matriz;        // Libera o array de ponteiros
    matriz = nullptr;
    
    return 0;
}