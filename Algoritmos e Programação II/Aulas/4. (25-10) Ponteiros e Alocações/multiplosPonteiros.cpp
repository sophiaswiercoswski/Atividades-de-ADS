// Demonstração de múltiplos níveis de ponteiros
#include <iostream>
using namespace std;

int main() {
    // Variável normal
    int valor = 42;

    // Ponteiro simples
    int *ptr1 = &valor;

    // Ponteiro para ponteiro
    int **ptr2 = &ptr1;

    cout << "=== Múltiplos Níveis de Ponteiros ===" << endl;

    // Acessando valor através de diferentes níveis
    cout << "Valor original: " << valor << endl;
    cout << "Através de ptr1: " << *ptr1 << endl;
    cout << "Através de ptr2: " << *ptr2 << endl;

    // Modificando o valor através de diferentes níveis
    **ptr2 = 100; // Modifica 'valor' através de ptr2

    cout << "\nApós modificação através de ptr2:" << endl;
    cout << "Novo valor: " << valor << endl;
    cout << "Através de ptr1: " << *ptr1 << endl;
    cout << "Através de ptr2: " << **ptr2 << endl;

    return 0;
}