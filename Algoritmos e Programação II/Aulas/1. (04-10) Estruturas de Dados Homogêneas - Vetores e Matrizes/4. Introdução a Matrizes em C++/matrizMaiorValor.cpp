#include <iostream>
using namespace std;

int main() {
	int matriz[3][3] = {{3, 8, 7}, {5, 9, 2}, {4, 6, 1}};
    int maior_valor = matriz[0][0];
    int linha_maior, coluna_maior;

    // Percorrer a matriz para encontrar o maior valor
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(matriz[i][j] > maior_valor) {
                maior_valor = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    cout << "Maior valor: " << maior_valor << " encontrado na posição [" << linha_maior << "][" << coluna_maior << "]" << endl;

	return 0;
}