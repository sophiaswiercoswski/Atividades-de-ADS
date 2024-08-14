#include <iostream>
using namespace std;

int main() {
    // Ler dois números inteiros
    int n1, n2;
    for(int cont = 1; cont <= 5; cont++) {
        printf("Digite dois numeros: ");
        cin >> n1 >> n2;

        // Exibir o maior dos dois numeros ou se são iguais
        if(n1 > n2) {
            printf("Maior valor: %d\n", n1);
        }
        else if(n2 > n1) {
            printf("Maior valor: %d\n", n2);
        }
        else {
            printf("%d e %d sao iguais\n", n1, n2);
        }
    }
    return 0;
}