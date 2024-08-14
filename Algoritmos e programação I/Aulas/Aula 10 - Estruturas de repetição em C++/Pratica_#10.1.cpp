#include <iostream>
using namespace std;

// Contar de 1 até 5
int main() {
    int cont = 1;

    do {
        printf("O contador vale: %d\n", cont++);
    } while(cont <= 5);

    return 0;
}