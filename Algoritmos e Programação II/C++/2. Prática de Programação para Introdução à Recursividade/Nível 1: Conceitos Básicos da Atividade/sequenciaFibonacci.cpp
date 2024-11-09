/*
Sequência de Fibonacci
Sophia Swiercoswski
08/11/2024
*/

#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Caso base como condição de parada da função recursiva
    if(n == 1 || n == 0) {
        cout << "Fibonacci(" << n << ") = " << n;
    }

    // Caso recursivo: sequencia = (n - 1) + (n - 2)
    int sequencia = 
    cout << "Fibonacci(" << n << ") = " << sequencia;

    return sequencia;
}

int main() {
    int numero;

    cout << "Digite um número positivo: ";
    cin >> numero;

    if(numero < 0) {
        cout << "Número negativo inválido!";
        return 1;
    }

    fibonacci(numero);

    return 0;
}