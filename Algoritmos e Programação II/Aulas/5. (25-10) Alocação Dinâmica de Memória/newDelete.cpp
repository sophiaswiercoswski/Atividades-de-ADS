// Exemplo de uso básico de new e delete
#include <iostream>
using namespace std;

int main() {
    // Alocando um único inteiro
    int* ptr = new int;     // Aloca memória sem inicializar
    *ptr = 42;              // Atribui um valor
    
    // Alocando e inicializando
    int* ptr2 = new int(100);   // Aloca e inicializa
    
    cout << "=== Demonstração de new e delete ===" << endl;
    cout << "Valor de ptr: " << *ptr << endl;
    cout << "Valor de ptr2: " << *ptr2 << endl;
    
    // Liberando a memória
    delete ptr;
    delete ptr2;
    
    // Boa prática: atribuir nullptr após delete
    ptr = nullptr;
    ptr2 = nullptr;
    
    return 0;
}