/*
Beecrowd: Problema 1002
07/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
   // Ler um número decimal do usuário
   double R, A;
   cin >> R;

    // Calcular área do círculo
    A = 3.14159 * (R * R);

    // Exibir a área do círculo
    printf("A=%.4f\n", A);

    return 0;
}