/*
Beewcrowd: Problema 1043
08/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
    // Ler 3 números decimais
    float A, B, C;
    cin >> A >> B >> C;

    // Verificar se não é possível formar um triângulo
    if(A + B == C || B + C == A || A + C == B) {
        // Calcular área do trapézio, onde A e B são as bases e C é a altura
        printf("Area = %.1f\n", (A + B) * C / 2);
    }
    else {
        // Calcular perímetro do triângulo
        printf("Perimetro = %.1f\n", A + B + C);
    }
}