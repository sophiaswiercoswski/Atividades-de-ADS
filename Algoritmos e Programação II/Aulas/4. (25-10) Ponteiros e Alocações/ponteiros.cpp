// Exemplo básico de ponteiros
#include <iostream>
using namespace std;

int main() {
    // Criando uma variável normal
    int numero = 10;
    
    // Criando um ponteiro e armazenando o endereço de 'numero'
    int *ptr = &numero;
    
    cout << "=== Primeiro Exemplo de Ponteiros ===" << endl;
    cout << "Valor de número: " << numero << endl;
    cout << "Endereço de número: " << &numero << endl;
    cout << "Valor armazenado no ponteiro: " << ptr << endl;
    cout << "Valor apontado pelo ponteiro: " << *ptr << endl;

    return 0;
}