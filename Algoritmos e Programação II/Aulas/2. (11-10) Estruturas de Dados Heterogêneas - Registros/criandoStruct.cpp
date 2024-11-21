#include <iostream> // Inclui a biblioteca padrão para operações de entrada e saída
using namespace std; // Usa o namespace padrão para evitar a necessidade de prefixar com std::

// Definição de uma struct chamada 'Estudante'
struct Estudante {
	string nome; // Campo para armazenar o nome do estudante
	int idade; // Campo para armazenar a idade do estudante
	float nota; // Campo para armazenar a nota do estudante
};

int main() {
	Estudante aluno1; // Declaração de uma variável do tipo Estudante (struct)
	
	// Atribuição de valores aos campos da struct
	aluno1.nome = "Maria"; // Atribuição da variável "nome" à variável aluno1 do tipo Estudante
	aluno1.idade = 20; // Atribuição da variável "idade" à variável aluno1 do tipo Estudante
	aluno1.nota = 9.5; // Atribuição da variável "nota" à variável aluno1 do tipo Estudante
	
	// Exibição dos valores atribuídos
	cout << "Nome: " << aluno1.nome << endl; // Exibe o nome
	cout << "Idade: " << aluno1.idade << endl; // Exibe a idade
	cout << "Nota: " << aluno1.nota << endl; // Exibe a nota
	
	return 0; // Finaliza o programa
}