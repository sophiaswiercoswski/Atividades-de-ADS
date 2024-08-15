/*
Beecrowd: Problema 1036
12/08/2024
Sophia Swiercoswski
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Ler 3 números decimais
    double A, B, C, delta, R1, R2;
    cin >> A >> B >> C;

    // Calcular o delta e as duas raízes
    delta = (B * B) - (4 * A * C);
    R1 = (-B + sqrt(delta)) / (2 * A);
    R2 = (-B - sqrt(delta)) / (2 * A);

    // Exibir R1 e R2 apenas se delta for maior que 0 ou os números diferentes de 0
    if((A == 0) || (B == 0) || (C == 0)  || (delta < 0)) {
        printf("Impossivel calcular\n");
    }
    else {
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }

    return 0;
}