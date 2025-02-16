#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Criar array para armazenar 3 lados double e ordernar crescentemente
    double A, B, C, lados[3];
    for(int i = 0; i < 3; i++) {
        cin >> lados[i];
    }
    sort(lados, lados + 3);

    // Definir os lados, sendo A o maior
    A = lados[2];
    B = lados[1];
    C = lados[0];

    // Determinar o tipo de triângulo
    if(A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if((A * A) == (B * B) + (C * C)) {
        printf("TRIANGULO RETANGULO\n");
    }
    else {
        if((A * A) > (B * B) + (C * C)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if((A == B) && (B == C)) {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if((A == B) || (B == C) || (C == A)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}