/*
* Programa: Cálculo de Fatorial Recursivo
* Descrição: Calcula o fatorial de um número usando recursão
* Entrada: Um número inteiro não negativo
* Saída: O fatorial do número e a demonstração do processo
*/

#include <iostream>
using namespace std;

/*
* Função: calcularFatorial
* Objetivo: Calcula o fatorial de um número recursivamente
* Parâmetro: n - número inteiro não negativo
* Retorno: fatorial de n
*/

int calcularFatorial(int n) {
    // Caso base: fatorial de 0 ou 1 é 1
    if (n == 0 || n == 1) {
        cout << "Fatorial(" << n << ") = 1" << endl;
        return 1;
    }

    // Caso recursivo: n! = n * (n - 1)!
    cout << "Calculando Fatorial(" << n << ") = "
         << n << " * Fatorial(" << n - 1 << ")" << endl;

    int resultado = n * calcularFatorial(n - 1);
    cout << "Fatorial(" << n << ") = " << resultado << endl;
    
    return resultado;
}

int main() {
    // Declaração de variáveis
    int numero;

    cout << "=== Cálculo de Fatorial Recursivo ===" << endl;
    cout << "Digite um número inteiro não negativo: ";
    cin >> numero;

    // Verificação de entrada válida
    if (numero < 0) {
        cout << "Erro: O número deve ser não negativo!" << endl;
        return 1;
    }

    cout << "\nProcesso de cálculo do fatorial de " << numero << ":\n" << endl;
    int resultado = calcularFatorial(numero);

    cout << "\nResultado final: " << numero << "! = " << resultado << endl;
    return 0;
}