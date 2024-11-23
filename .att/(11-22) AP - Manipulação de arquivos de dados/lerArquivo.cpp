#include <iostream>
#include <fstream> // Permite a leitura e escrita de arquivos
#include <cstring>
using namespace std;

int main() {
    ifstream file("TADS.txt");
    string linha;

    try {
        if(!file.is_open()) {
            throw runtime_error("Erro ao abrir o arquivo");
        }

        cout << "CONTEÚDO DO ARQUIVO" << endl;
        cout << "=================================" << endl;

        while(getline(file, linha)) {
            if(file.fail()) {
                throw runtime_error("Erro durante a leitura!");
            }
            cout << linha << endl;
        }
    } catch(const exception &e) {
        cout << "Erro: " << e.what() << endl;
        if(file.is_open()) {
            file.close();
        }
    }

    return 0;
}