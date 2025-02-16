#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[5], max, min;
    for(int i = 0; i < 5; i++) {
        cout << "Digite o valor para a posicao " << i << ": ";
        cin >> numeros[i];
    }

    // Definir menor e maior valor
    max = numeros[0];
    min = numeros[0];

    // Complete o código para encontrar o valor máximo e mínimo e exibi-los
    for(int i = 0; i < 5; i++) {
        if(numeros[i] > max) {
            max = numeros[i];
        }
        if(numeros[i] < min) {
            min = numeros[i];
        }
    }

    cout << "Maior valor: " << max << endl;
    cout << "Menor valor: " << min << endl;

    return 0;
}