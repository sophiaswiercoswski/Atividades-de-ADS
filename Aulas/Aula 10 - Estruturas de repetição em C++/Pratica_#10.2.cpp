#include <iostream>
using namespace std;

// Contar de 1 até 101
int main() {
    int cont = 1;

    while(cont <= 100) {
        printf("O contador vale: %d\n", ++cont);
    }

    return 0;
}