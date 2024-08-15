/*
Beecrowd: Problema 1041
08/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
    // Ler dois números decimais do usuário
    float x, y;
    cin >> x >> y;

    // Determinar qual quadrante os números pertencem
    if(x > 0 && y > 0) {
        printf("Q1\n");
    }
    else if(x < 0 && y > 0) {
        printf("Q2\n");
    }
    else if(x < 0 && y < 0) {
        printf("Q3\n");
    }
    else if(x > 0 && y < 0) {
        printf("Q4\n");
    }
    else if(y == 0 && x != 0) {
        printf("Eixo X\n");
    }
    else if(x == 0 && y != 0) {
        printf("Eixo Y\n");
    }
    else {
        printf("Origem\n");
    }

    return 0;
}