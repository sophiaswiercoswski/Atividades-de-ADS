// Exemplo de operadores de ponteiros
#include <iostream>
using namespace std;

int main() {
    // Declaração e inicialização de variável
    int valor = 42;
    
    // Declaração e inicialização de ponteiro
    int *ptr = &valor;
    
    cout << "=== Demonstração de Operadores de Ponteiros ===" << endl;
    cout << "Valor da variável: " << valor << endl;
    cout << "Endereço da variável (&): " << &valor << endl;
    cout << "Valor do ponteiro: " << ptr << endl;
    cout << "Valor apontado pelo ponteiro (*): " << *ptr << endl;

    return 0;
}