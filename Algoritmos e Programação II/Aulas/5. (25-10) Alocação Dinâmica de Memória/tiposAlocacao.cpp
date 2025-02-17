// Exemplo de diferentes tipos de alocação
#include <iostream>
using namespace std;

void demonstracaoAlocacao() {
    // Alocação na Stack (estática)
    int numeroStack = 42; // Variável local na stack
    
    // Alocação na Heap (dinâmica)
    int* numeroHeap = new int(42); // Variável alocada na heap
    
    cout << "=== Demonstração de Tipos de Alocação ===" << endl;
    cout << "Valor na Stack: " << numeroStack << endl;
    cout << "Valor na Heap: " << *numeroHeap << endl;
    
    // Importante: liberar memória alocada dinamicamente
    delete numeroHeap;
    numeroHeap = nullptr;
}

int main() {
    demonstracaoAlocacao();
    
    return 0;
}