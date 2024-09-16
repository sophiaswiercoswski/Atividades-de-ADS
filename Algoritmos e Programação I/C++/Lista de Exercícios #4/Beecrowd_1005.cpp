#include <iostream>
using namespace std;

int main() {
    // Ler dois números decimais do usuário
    float A, B, media;
    cin >> A >> B;

    // Calcular média
    media = ((A * 3.5) + (B * 7.5)) / 11;
    printf("MEDIA = %.5f\n", media);
    }