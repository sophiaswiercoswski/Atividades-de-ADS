#include <iostream>
using namespace std;

int main() {
    // Ler um número decimal do usuário
    float n;
    cin >> n;

    // Determinar o intervalo do número
    if(n >= 0 && n <= 25) {
        printf("Intervalo [0,25]\n");
    }
    else if(n >= 25 && n <= 50) {
        printf("Intervalo (25,50]\n");
    }
    else if(n >= 50 && n <= 75) {
        printf("Intervalo (50,75]\n");
    }
    else if(n >= 75 && n <= 100) {
        printf("Intervalo (75,100]\n");
    }
    else {
        printf("Fora de intervalo\n");
    }

    return 0;
}