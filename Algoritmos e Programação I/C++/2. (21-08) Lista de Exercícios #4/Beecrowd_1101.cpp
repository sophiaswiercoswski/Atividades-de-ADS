#include <iostream>
using namespace std;

int main() {
    // Ler dois valores até um deles ser menor ou igual a zero
    int M, N, menor, maior, soma;

    do {
        cin >> M >> N;
        // Descobrir o menor e o maior valor
        if(M > N) {
            maior = M;
            menor = N;
        }
        else if(N > M) {
            maior = N;
            menor = M;
        }
        
        if((M < 0) || (M == 0) || (N < 0) || (N == 0)) {
            break;
        }

        // Percorrer entre o menor valor até o maior e somar
        for(int i = menor; i <= maior; i++) {
            printf("%d ", i);
            soma += i;
        }
        
        // Exibir a soma dos intervalos e resetar
        printf("Sum=%d\n", soma);
        soma = 0;
    } while(M > 0 && M != 0 && N > 0 && N != 0);

    return 0;
}