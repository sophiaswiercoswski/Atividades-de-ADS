// Demontração de ponteiros com estruturas
#include <iostream>
#include <string>
using namespace std;

// Definindo uma estrutura para um Estudante
struct Estudante {
    string nome;
    int idade;
    float nota;
};

// Função que modifica dados do estudante usando ponteiro
void modificarNota(Estudante* est, float novaNota) {
    est->nota = novaNota; // Usando operador ->
}

// Função que exibe dados do estudante
void exibirEstudante(const Estudante* est) {
    cout << "Nome: " << est->nome << endl;
    cout << "Idade: " << est->idade << endl;
    cout << "Nota: " << est->nota << endl;
}

int main() {
    // Criando uma estrutura
    Estudante aluno = {"João Silva", 20, 8.5};
    Estudante *ptr_aluno = &aluno;

    cout << "=== Ponteiros e Estruturas ===" << endl;
    cout << "Dados iniciais:" << endl;
    exibirEstudante(ptr_aluno);

    // Modificando dados usando o operador ->
    ptr_aluno->idade = 21;
    modificarNota(ptr_aluno, 9.5);

    cout << "\nApós modificações:" << endl;
    exibirEstudante(ptr_aluno);

    // Modificando usando desferenciamento (*)
    (*ptr_aluno).nome = "João Silva Jr.";

    cout << "\nApós última modificação:" << endl;
    exibirEstudante(ptr_aluno);

    return 0;
}