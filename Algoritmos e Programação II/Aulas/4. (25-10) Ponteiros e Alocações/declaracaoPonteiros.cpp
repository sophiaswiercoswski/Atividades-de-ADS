// Exemplo de declaração de ponteiros
#include <iostream>
using namespace std;

int main() {
    // Declaração de diferentes tipos de ponteiros
    int *ptr_int; // Ponteiro para inteiro
    double *ptr_double; // Ponteiro para double
    char *ptr_char; // Ponteiro para caractere

    // Criando variáveis para demonstração
    int num = 10;
    double dec = 3.14;
    char letra = 'A';

    // Atribuindo endereços aos ponteiros
    ptr_int = &num;
    ptr_double = &dec;
    ptr_char = &letra;

    cout << "=== Demonstração de Tipos de Ponteiros ===" << endl;
    cout << "Ponteiro para int aponta para: " << *ptr_int << endl;
    cout << "Ponteiro para double aponta para: " << *ptr_double << endl;
    cout << "Ponteiro para char aponta para: " << *ptr_char << endl;

    return 0;
}