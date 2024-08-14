#include <iostream>
using namespace std;

int main() {
    // Declarar duas variáveis inteiras
    int n1, n2;
    
    // Ler dois valores inteiros
    cout << "Digite um valor inteiro: ";
    // cin >> n1 >> n2;
    cin >> n1;
    cout << "Digite outro valor inteiro: ";
    cin >> n2;

    // Calcular soma, produto e media
    int soma = n1 + n2;
    int prod = n1 * n2;
    float media = float(soma) / 2;

    // Mostrar a soma e o produto
    cout << "Soma = " << soma << endl;
    cout << "Produto = " << prod << endl;
    cout << "Media = " << media << endl;

    // Exibir soma, produto e media em outro formato
    printf("%d + %d = %d\n", n1 , n2, soma);
    printf("%d * %d = %d\n", n1 , n2, prod);
    printf("Media = %f", media);

    return 0;
}