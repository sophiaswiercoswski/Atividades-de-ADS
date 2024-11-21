#include <iostream>
using namespace std;

int main() {
    // Ler 6 números decimais
    float decimais[6], positives, cont;
    int n;
    for(n = 0; n < 6; n++) {
        cin >> decimais[n];
    }

    // Determinar números positivos
    for(int i = 0; i < 6; i++) {
        if(decimais[i] > 0) {
            positives += decimais[i];
            cont++;
        }
    }

    // Exibir quantidade de números positivos e a média
    printf("%.0f valores positivos\n", cont);
    printf("%.1f\n", positives / cont);

    return 0;
}