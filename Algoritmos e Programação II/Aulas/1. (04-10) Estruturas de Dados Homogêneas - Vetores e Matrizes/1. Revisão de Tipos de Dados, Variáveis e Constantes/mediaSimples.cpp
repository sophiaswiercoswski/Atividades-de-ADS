#include <iostream>
using namespace std;

int main() {
    float nota1, nota2;
    
    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "A media das duas notas e: " << (nota1 + nota2) / 2;

    return 0;
}