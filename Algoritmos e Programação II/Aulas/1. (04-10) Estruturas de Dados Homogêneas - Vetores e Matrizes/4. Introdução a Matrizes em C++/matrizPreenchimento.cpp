#include <iostream>
using namespace std;

int main() {
	int matriz[2][3];

    // Inserir os valores da matriz
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Digite o valor para matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Exibir os valores da matriz
    cout << "Matriz preenchida:" << endl;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        
        cout << endl;
    }

	return 0;
}       