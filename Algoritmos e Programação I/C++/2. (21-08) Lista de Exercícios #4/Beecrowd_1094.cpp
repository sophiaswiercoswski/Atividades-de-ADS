#include <iostream>
using namespace std;

int main() {
    char animal;
    int N, quantia, quantiaCoelhos = 0, quantiaRatos = 0, quantiaSapos = 0, cobaias = 0;
    float cobaiasP;

    // Ler quantidade de testes
    cin >> N;

    for(int i = 0; i < N; i++) {
        // Ler quantia e qual animal
        cin >> quantia >> animal;
        switch(animal) {
            case 'C':
                quantiaCoelhos += quantia;
                break;
            case 'R':
                quantiaRatos += quantia;
                break;
            case 'S':
                quantiaSapos += quantia;
                break;
        }
    }

    // Exibir total de cobaias e de cada animal
    cobaias = quantiaCoelhos + quantiaRatos + quantiaSapos;
    cobaiasP = cobaias;
    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", quantiaCoelhos);
    printf("Total de ratos: %d\n", quantiaRatos);
    printf("Total de sapos: %d\n", quantiaSapos);
    printf("Percentual de coelhos: %.2f %\n", (quantiaCoelhos * 100) / cobaiasP);
    printf("Percentual de ratos: %.2f %\n", (quantiaRatos * 100) / cobaiasP);
    printf("Percentual de sapos: %.2f %\n", (quantiaSapos * 100) / cobaiasP);

    return 0;
}