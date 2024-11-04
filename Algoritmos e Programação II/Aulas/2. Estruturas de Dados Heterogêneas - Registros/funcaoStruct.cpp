#include <iostream>
using namespace std;

// Defini;áo da struct 'Estudante'
struct Estudante {
    string nome;
    int idade;
    float nota;
};

// Função para exibir os dados de um estudante
void exibirEstudante(Estudante e) { // Passagem por referência para modificar o registro original
    cout << "Nome: " << e.nome << endl;
    cout << "Idade: " << e.idade << endl;
    cout << "Nota: " << e.nota << endl;
}

// Função para inserir os dados de um estudante
void inserirEstudante(Estudante &e) {
    cout << "Digite o nome: ";
    cin >> e.nome; // Armazena o nome inserido
    cout << "Digite a idade: ";
    cin >> e.idade; // Armazena a idade inserida
    cout << "Digite a nota: ";
    cin >> e.nota; // Aramzena a nota inserida
}

int main() {
    Estudante aluno1;
    // Chama a função para inserir os dados do estudante
    inserirEstudante(aluno1);
    // Chama a função para exibir os dados do estudante
    exibirEstudante(aluno1);
}