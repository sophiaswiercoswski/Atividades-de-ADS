#include <iostream>
using namespace std;

int main() {
    // Ler um número inteiro do usuário
    int N;
    cin >> N;

    // Exibir tabuada de N
    for(int cont = 1; cont <= 10; cont++) {
        printf("%d x %d = %d\n", cont, N, cont * N);
    }

    return 0;
}