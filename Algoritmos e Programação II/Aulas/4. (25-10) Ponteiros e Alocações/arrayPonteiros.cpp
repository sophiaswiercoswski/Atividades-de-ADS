// Demonstração de arrays de ponteiros
#include <iostream>
using namespace std;

int main() {
    // Criando variáveis para demonstração
    int a = 10, b = 20, c = 30, d = 40, e = 50;

    // Criando um array de ponteiros
    int *numeros[5];
    numeros[0] = &a;
    numeros[1] = &b;
    numeros[2] = &c;
    numeros[3] = &d;
    numeros[4] = &e;

    cout << "=== Arrays de Ponteiros ===" << endl;

    // Acessando valores através do array de ponteiros
    cout << "Valores originais:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Valor " << i + 1 << ": " << *numeros[i] << endl;
    }

    // Modificando valores através do array de ponteiros
    for(int i = 0; i < 5; i++) {
        *numeros[i] *= 2; // Dobra cada valor
    }

    cout << "\nValores após multiplicar por 2:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Valor " << i + 1 << ": " << *numeros[i] << endl;
    }

    // Exemplo com array de strings (ponteiros para char)
    const char *frutas[] = {
        "Maçã",
        "Banana",
        "Laranja",
        "Uva",
        "Pera"
    };

    cout << "\nLista de Frutas:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << frutas[i] << endl;
    }

    return 0;
}