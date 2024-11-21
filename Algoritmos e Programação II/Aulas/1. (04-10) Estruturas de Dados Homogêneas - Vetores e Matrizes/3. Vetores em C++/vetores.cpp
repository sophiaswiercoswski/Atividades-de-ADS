#include <iostream>
using namespace std;

 int main() {
    int numeros[5];
    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;

    for(int i = 0; i < 5; i++) {
        cout << "O valor na posicao 1 e: " << numeros[i] << endl;
    }

    return 0;
}