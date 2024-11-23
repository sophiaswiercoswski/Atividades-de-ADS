#include <iostream>
#include <fstream> // Permite a leitura e escrita de arquivos
#include <cstring>
using namespace std;

int main() {
    // Modo de Leitura
    // fstream arquivoRead("leitura.md", ios::in); // ios::in apenas lê o arquivo

    // Modo de Escrita
    ofstream file("TADS.txt", ios::app); // ios::out apenas escreve o arquivo

    // Verifica se o arquivo consegue ser aberto
    if(!file.is_open()) {
        cout << "Erro ao abrir o arquivo" << endl;
    }

    // Verifica se o arquivo consegue ser fechado
    file << "Teste de escrita" << endl;
    file.close();

    return 0;
}