// Demonstração da relação entre arrays e ponteiros
#include <iostream>
using namespace std;

int main() {
    // Declarando e inicializando um array
    int numeros[5] = {10, 20, 30, 40, 50};

    // Criando um ponteiro para o array
    int *ptr = numeros; // Não precisa do operador & para arrays

    cout << "=== Arrays e Ponteiros ===" << endl;

    // Método 1: Acessando elementos com notação de array
    cout << "Usando notação de array:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    // Método 2: Acessando elementos com aritmética de ponteiros
    cout <<  "\nUsando aritmética de ponteiros:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "*ptr( + " << i << ") = " << *(ptr + 1) << endl;
    }

    // Método 3: Usando incremento de ponteiro
    cout << "\nUsando incremento de ponteiro:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "*ptr = " << *ptr << endl;
        ptr++; // Move o ponteiro para o próximo elemento
    }
    return 0;
}