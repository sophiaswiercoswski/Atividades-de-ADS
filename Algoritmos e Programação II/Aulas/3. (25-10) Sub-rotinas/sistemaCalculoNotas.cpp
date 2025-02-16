// Sistema de cálculo de notas com diferentes funcionalidade
#include <iostream>
#include <string>
using namespace std;

// Função para validar nota
bool validarNota(float nota) {
	return(nota >= 0 && nota <= 10);
}

// Função para calcular média
float calcularMedia(float notas[], int quantidade) {
	float soma = 0;
	for(int i = 0; i < quantidade; i++) {
		soma += notas[i];
	}
	return soma / quantidade;
}

// Procedimento para exibir situação do aluno
void exibirSituacao(string nome, float media) {
	cout << "\nSituação do aluno " << nome << ":" << endl;
	cout << "Média final: " << media << endl;
	
	if(media >= 7.0) {
		cout << "Situação: APROVADO" << endl;
	}
	else if(media >= 4.0) {
		cout << "Situação: RECUPERAÇÃO" << endl;
	}
	else {
		cout << "Situação: REPROVADO" << endl;
	}
}

int main() {
	const int NUM_NOTAS = 3;
	string nome;
	float notas[NUM_NOTAS];
	
	cout << "=== Sistema de Notas ===" << endl;
	cout << "Nome do aluno: ";
	getline(cin, nome);
	
	// Entrada de notas com validação
	for(int i = 0; i < NUM_NOTAS; i++) {
		do {
			cout << "Digite a nota " << (i + 1) << "; ";
			cin >> notas[i];
			
			if(!validarNota(notas[i])) {
				cout << "Nota inválida! Digite um valor entre 0 e 10." << endl;
			}
		} while(!validarNota(notas[i]));
	}
	
	// Cálculo e exibição dos reusltados
	float media = calcularMedia(notas, NUM_NOTAS);
	exibirSituacao(nome, media);

	return 0;
}