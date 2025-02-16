// Sistema de gerenciamente de array com múltiplas funcionalidades
#include <iostream>
using namespace std;

// Função para encontrar o maior valor
int encontrarMaior(const int arr[], int tamanho) {
    int maior = arr[0];
    for(int i = 1; i < tamanho; i++) {
        if(arr[i] > maior) {
            maior = arr[i];
        }
    }
    return maior;
}

// Procedimento para ordenar (Bubble Sort)
void ordenarArray(int arr[], int tamanho) {
    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = 0; j < tamanho - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                // Troca de elmentos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Função para buscar um valor
bool buscarValor(const int arr[], int tamanho, int valor, int &posicao) {
    for(int i = 0; i < tamanho; i++) {
        if(arr[i] == valor) {
            posicao = 1;
            return true;
        }
    }
    return false;
}

// Procedimento para exibir o array
void exibirArray(const int arr[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int TAMANHO = 5;
    int numeros[TAMANHO];

    cout << "=== Manipulação de Array ===" << endl;

    // Entrada de dados
    cout << "Digite " << TAMANHO << " números:" << endl;
    for(int i = 0; i < TAMANHO; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Exibindo array original
    cout << "\n Array original: ";
    exibirArray(numeros, TAMANHO);

    // Encontrando maior valor
    cout << "Maior valor: " << encontrarMaior(numeros, TAMANHO) << endl;

    // Ordenando e exibindo array ordenado
    ordenarArray(numeros, TAMANHO);
    cout << "Aray ordenado: ";
    exibirArray(numeros, TAMANHO);

    // Buscando um valor
    int valorBusca;
    cout << "\n Digite um valor para buscar: ";
    cin >> valorBusca;

    int posicao;
    if(buscarValor(numeros, TAMANHO, valorBusca, posicao)) {
        cout << "Valor encontrado na posição " << posicao << endl;
    }
    else {
        cout << "Valor não encontrado!" << endl;
    }

    return 0;
}