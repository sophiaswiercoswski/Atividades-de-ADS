#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Criar array para armazenar os 3 números
    int numeros[3], numerosOrder[3], n;
    for(n = 0; n < 3; n++) {
        cin >> numeros[n];
    }

    // Fazer cópia do array
    copy(numeros, numeros + 3, numerosOrder);

    // Exibir o array em ordem crescente
    for(int i = 0; i < 3; i++) {
        sort(begin(numeros), end(numeros));
        printf("%d\n", numeros[i]);
    }

    // Exibir o array em ordem do input
    printf("\n");
    for(int i = 0; i < 3; i++) {
        printf("%d\n", numerosOrder[i]);
    }

    return 0;
}