// Exemplo de procedimento básico
#include <iostream>
using namespace std;

// Procedimento simples sem parâmetros
void saudacao() {
    cout << "=== Bem-vindo ao Programa ===" << endl;
    cout << "Este é um exemplo de procedimento!" << endl;
}

// Procedimento simples com parâmetros
void imprimirInformacoes(string nome, int idade) {
    cout << "\nInformações do Usuário:" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
}

int main() {
    // Chamando procedimento com parâmetros
    saudacao();

    // Chamand procedimento com parâmetros
    string nome = "João";
    int idade = 25;
    imprimirInformacoes(nome, idade);

    return 0;
}