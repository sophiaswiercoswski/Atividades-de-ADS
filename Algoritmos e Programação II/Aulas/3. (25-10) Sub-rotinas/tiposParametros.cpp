// Exemplo combinando diferentes tipos de passagem de parâmetros
#include <iostream>
using namespace std;

// Função que calcula estatísticas de um array
void calcularEstatisticas(const int arr[], int tamanho, float &media, int &maior, int &menor) {
    int soma = 0;
    maior = arr[0];
    menor = arr[0];

    for(int i = 0; i < tamanho; i++) {
        soma += arr[i];
        if(arr[i] > maior) maior = arr[i];
        if(arr[i] < menor) menor = arr[i];
    }

    media = (float)soma / tamanho;
}

int main() {
    const int TAMANHO = 5;
    int numeros[TAMANHO] = {12, 5, 8, 15, 3};
    float media;
    int maior, menor;

    cout << "=== Análise de Dados ===" << endl;
    cout << "Números: ";
    for(int i = 0; i < TAMANHO; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    calcularEstatisticas(numeros, TAMANHO, media, maior, menor);

    cout << "\n Estatísticas: " << endl;
    cout << "Média: " << media << endl;
    cout << "Maior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
}