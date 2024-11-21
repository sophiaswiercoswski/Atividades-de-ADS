#include <iostream>
using namespace std;

int main() {
    // Ler 5 valores inteiros e contar quantos são pares
    int n, cont = 0;
    for(int i = 1; i <= 5; i++) {
        cin >> n;
        if(n % 2 == 0) {
            cont++;
        }
    }

    // Exibir valores pares
    printf("%d valores pares\n", cont);

    return 0;
}