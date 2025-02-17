// Exemplo de endereço da memória
#include <iostream>
using namespace std;

int main() {
    int numero = 42; // A variável 'numero' está armazenada em algum lugar da memória

    cout << "=== Demonstração de Endereço de Memória ===" << endl;
    cout << "Valor da variável: " << numero << endl;
    cout << "Endereço da variável na memória: " << &numero << endl;

    return 0;
}