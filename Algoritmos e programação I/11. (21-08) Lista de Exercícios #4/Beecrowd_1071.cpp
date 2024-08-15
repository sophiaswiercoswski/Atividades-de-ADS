/*
Beecrowd: Problema 1071
14/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
    // Ler dois valores inteiros
    int soma = 0, X, Y;
    cin >> X >> Y;

    // Percorrer sequência de números ímpares e somar
    for(int i = Y; i < X; i++) {
        if(i % 2 != 0) {
            i++;
            soma = i - 1;
        }
    }

    printf("%d\n", soma);
    return 0;
}