// Exemplo de passagem de parâmetro por valor
#include <iostream>
using namespace std;

void modificarValor(int num) {
    cout << "Dentro da função, antes da modificação: " << num << endl;
    num = num * 2; // Modifica apenas a cópia local dentro da função
    cout << "Dentro da função, após modificação: " << num << endl;
}

int main() {
    int numero = 10;

    cout << "=== Demonstração de Passagem por Valor ===" << endl;
    cout << "Valor original: " << numero << endl;

    modificarValor(numero);

    cout << "Valor após chamar a função: " << numero << endl;
    // O valor original não é alterado, apenas a cópia local

    return 0;
}