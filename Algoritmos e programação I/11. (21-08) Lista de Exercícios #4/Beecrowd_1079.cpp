/*
Beecrowd: Problema 1079
14/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
    // Ler número inteiro de testes
    int teste;
    float n1, n2, n3;
    cin >> teste;

    // Calcular média, onde n1 * 2, n2 * 3, n3 * 5 divididos por 10
    for(int i = 1; i <= teste; i++) {
        cin >> n1 >> n2 >> n3;
        printf("%.1f\n", ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10);
    }

    return 0;
}