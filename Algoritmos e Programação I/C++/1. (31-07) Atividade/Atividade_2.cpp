#include <iostream>

using namespace std;

int main(){
    // Ler 5 números inteiros
    printf("Digite 5 numeros inteiros: ");
    int n1, n2, n3, n4, n5;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    // Calcular soma e média
    int soma = n1 + n2 + n3 + n4 + n5;
    float media = float(soma) / 5;

    // Exibir soma dos números e média
    printf("Soma = %i\n", soma);
    printf("Media = %.1f", media);

    return 0;
}