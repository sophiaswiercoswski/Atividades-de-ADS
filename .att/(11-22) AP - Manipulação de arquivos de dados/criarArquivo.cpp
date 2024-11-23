#include <iostream>
#include <fstream> // Permite a leitura e escrita de arquivos
#include <cstring>
using namespace std;

int main() {
    ofstream file;

    try {
        file.open("TADS.txt", ios::app);

        if(!file.is_open()) {
            throw runtime_error("Erro ao abrir o arquivo");
        }

        file << "Registro de Notas - Turma ADS 2024" << endl;
        file << "=================================" << endl;

        file << "João\t\t8.5" << endl;
        file << "Maria\t\t10.0" << endl;

        file.close();
        cout << "Arquivo Criado e Escrito com Sucesso!" << endl;
    } catch(const exception &e) {
        cout << "Erro: " << e.what() << endl;
        if(file.is_open()) {
            file.close();
        }
    }

    return 0;
}