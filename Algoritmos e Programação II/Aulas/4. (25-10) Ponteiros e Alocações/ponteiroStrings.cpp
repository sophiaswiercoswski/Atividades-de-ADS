// Demonstração de ponteiros com strings
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // String literal
    const char* mensagem = "Hello World!";

    // Array de caracteres
    char texto[] = "Programação C++";
    char *ptr = texto;

    cout << "=== Ponteiros e Strings ===" << endl;

    // Exibindo strings completas
    cout << "String literal: " << mensagem << endl;
    cout << "Array de caracteres: " << texto << endl;

    // Percorrendo a string caractere por caractere
    cout << "\nCaracteres de 'texto' individualmente:" << endl;
    while(*ptr != '\0') {
        cout << "Caractere: '" << *ptr << "' (ASCII: " << (int)*ptr << ")" << endl;
        ptr++;
    }

    // Copiando strings
    char destino[50];
    strcpy(destino, texto);
    cout << "\nString copiada: " << destino << endl;

    return 0;
}