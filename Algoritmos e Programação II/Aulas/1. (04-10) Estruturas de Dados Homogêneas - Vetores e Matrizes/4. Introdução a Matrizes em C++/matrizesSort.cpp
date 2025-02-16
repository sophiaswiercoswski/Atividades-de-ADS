#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int matriz[3][3] = {{5, 2, 3}, {9, 6, 1}, {7, 8, 4}};

    // Usar sort() para ordenar a primeira linha
    sort(matriz[0], matriz[0] + 3);

    // Exibir a linha ordenada
    cout << "Primeira linha da matriz ordenada com sort: " << endl;
    for (int i = 0; i < 3; i++) {
        cout << matriz[0][i] << " ";
    }

	return 0;
}       