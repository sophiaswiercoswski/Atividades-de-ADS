/*
Beecrowd: Problema 1065
12/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
    // Ler 5 números inteiros e armazenar valores pares
    int pares = 0, n;
    for(int i = 0; i < 5; i++) {
        cin >> n;
        if(n / 2 == 0) {
            pares++;
        }
    }

    // Exibir quantidade de pares
    printf("%d valores pares\n", pares);

    return 0;
}
