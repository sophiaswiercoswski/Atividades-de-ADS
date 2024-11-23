#include <iostream>
using namespace std;

// Definição da struct 'Estudante'
struct Estudante {
    string nome;
    int idade;
    float nota;
};


// Função para inserir os dados de um estudante
void inserirEstudante(Estudante &e) {
    cout << "Digite o nome: ";
    cin >> e.nome; // Armazena o nome inserido
    cout << "Digite a idade: ";
    cin >> e.idade; // Armazena a idade inserida
    cout << "Digite a nota: ";
    cin >> e.nota; // Aramzena a nota inserida
}

// Função para listar os estudantes de uma turma
void listarTurma(Estudante turma[], int n) {
    for(int i = 0; i < n; i++) { // Percorre o array de registros
        cout << "Estudante: " << i + 1 << ": " << turma[i].nome << endl;
    }
}

int main() {
    Estudante turma[30]; // Declara um array de 30 estudantes
    int numAlunos;
    cout << "Digite o número de alunos: ";
    cin >> numAlunos; // Lê o número de alunos a serem cadastrados
    for(int i = 0; i < numAlunos; i++) {
        inserirEstudante(turma[i]); // Insere os dados de cada estudante
    }
    listarTurma(turma, numAlunos); // Lista todos os estudantes inseridos
}