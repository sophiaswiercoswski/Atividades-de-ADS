#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[5];

    for(int i = 0; i < 5; i++) {
        cout << "Digite o valor para a posicao " << i << ": ";
        cin >> numeros[i];
    }

    // Complete o código para ordenar o vetor e exibir os valores ordenados
    for(int i = 0; i < 5; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(numeros[i] > numeros[j]) {
                int temp = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = temp;
            }
        }
    }

    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
        
    return 0;
}