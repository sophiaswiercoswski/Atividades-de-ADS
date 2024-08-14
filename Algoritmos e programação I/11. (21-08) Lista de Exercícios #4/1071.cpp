/*
Beecrowd: Problema 1071
14/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
    // Ler 2 valores inteiros
    int X, Y;
    int soma = 0;
    cin >> X >> Y;

    // Descobrir os números ímpares entre esses valores
    // adicionar if apenas para saber quais numeros sao impar. se for, adicionar 1
    if(X > Y) {
        for(int i = 1; i <= X; i ++) {
            // Somar números ímpares
            if(i / 2 != 0) {
                soma++;
            }
        }
    }
    else {
        for(int i = 1; i <= Y; i++) {
            // Somar números ímpares
            if(i / 2 != 0) {
                soma++;
            }
        }
    }

    // Exibir soma dos números ímpares
    if(X == Y) {
        printf("0\n");
    }
    else {
        printf("%d\n", soma);
    }

    return 0;
}