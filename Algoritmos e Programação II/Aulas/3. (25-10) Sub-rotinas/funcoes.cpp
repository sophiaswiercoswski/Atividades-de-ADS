// Exemplo de função com retorno
#include <iostream>
using namespace std;

// Função que retorna a soma de dois números
int somar(int a, int b) {
    return a + b;
}

// Função que calcula e retorna a média
float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

// Função que verifica se um número é par
bool ehPar(int numero) {
    return(numero % 2 == 0);
}

int main() {
    // Testando a função de soma
    int resultado = somar(5, 3);
    cout << "Soma: " << resultado << endl;

    // Testando função de média
    float media = calcularMedia(7.5, 8.2);
    cout << "Média: " << media << endl;

    // Testando função de verificação
    int num = 4;
    if(ehPar(num)) {
        cout << num << " é par" << endl;
    }
    else {
        cout << num << " é ímpar" << endl;
    }

    return 0;
}