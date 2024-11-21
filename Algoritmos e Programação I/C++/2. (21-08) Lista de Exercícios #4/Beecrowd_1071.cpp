#include <iostream>
using namespace std;

int main() {
    // Ler dois valores inteiros
    int X, Y, maior, menor, impar = 0;
    cin >> X >> Y;

    // Determinar maior e menor número
    if(X > Y) {
        maior = X;
        menor = Y;
    }
    else {
        maior = Y;
        menor = X;
    }

    // Percorrer entre os valores e somar os números
    for(int i = menor + 1; i < maior; i++) {
        if(i % 2 != 0) {
            impar += i;
        }
    }

    printf("%d\n", impar);

    return 0;
}