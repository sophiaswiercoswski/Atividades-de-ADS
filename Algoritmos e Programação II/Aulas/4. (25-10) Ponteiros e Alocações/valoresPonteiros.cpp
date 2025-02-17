// Modificando valores com ponteiros
#include <iostream>
using namespace std;

int main() {
    // Inicialização
    int numero = 10;
    int *ptr = &numero;
    
    cout << "=== Modificando Valores com Ponteiros ===" << endl;
    cout << "Valor inicial de numero: " << numero << endl;

    // Modificando o valor através do ponteiro
    *ptr = 20;
    cout << "Após modificar através do ponteiro (*ptr = 20): " << endl;
    cout << "Novo valor de numero: " << numero << endl;

    // Modificando diretamente a variável
    numero = 30;
    cout << "\nApós modificar diretamente (numero = 30): " << endl;
    cout << "Valor de numero: " << numero << endl;
    cout << "Valor apontado por *ptr: " << *ptr << endl;

    return 0;
}