/*
Beecrowd: Problema 1060
07/08/2024
Sophia Swiercoswski
*/

// Ler 6 valores do usuário e informar quais são positivos
#include <iostream>
using namespace std;

int main() {
    // Declarar variáveis
    float n;
    int cont = 1, positivos = 0;

    // Ler 6 números do usuário
    while(cont <= 6) {
        cin >> n;

        // Verificar se n é positivo e contar
        if(n > 0) {
            positivos++;
        }
        cont++;
    }

    // Exibir quantidade de números positivos
    printf("%d valores positivos\n", positivos);

    return 0;
}