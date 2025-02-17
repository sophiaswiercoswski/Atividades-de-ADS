// Exemplo completo de arrays dinâmicos
#include <iostream>
using namespace std;

int main() {
    int tamanho;
    cout << "Digite o tamanho do array: ";
    cin >> tamanho;
    
    // Alocando array dinâmico
    int* array = new int[tamanho];
    
    // Preenchendo o array
    cout << "\n=== Preenchendo o Array ===" << endl;
    for(int i = 0; i < tamanho; i++) {
        cout << "Digite o elemento " << i + 1 << ": ";
        cin >> array[i];
    }
    
    // Exibindo os elementos
    cout << "\n=== Elementos do Array ===" << endl;
    for(int i = 0; i < tamanho; i++) {
        cout << "Elemento " << i + 1 << ": " << array[i] << endl;
    }
    
    // Calculando a soma dos elementos
    int soma = 0;
    for(int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    cout << "\nSoma dos elementos: " << soma << endl;
    
    // Liberando a memória
    delete[] array;  // Note o uso de [] para arrays
    array = nullptr;
    
    return 0;
}