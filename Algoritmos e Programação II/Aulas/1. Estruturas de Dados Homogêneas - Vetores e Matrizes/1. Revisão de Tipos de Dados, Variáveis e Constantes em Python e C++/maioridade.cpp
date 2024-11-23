#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if(idade >= 18) {
        cout << "Voce e maior de idade!" << endl;
    }
    else {
        cout << "Voce e menor de idade!" << endl;
    }

    return 0;
}