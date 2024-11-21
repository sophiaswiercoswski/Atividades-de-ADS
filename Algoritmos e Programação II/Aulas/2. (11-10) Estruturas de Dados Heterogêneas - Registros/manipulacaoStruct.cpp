/*
Título: Manipulação de Struct
Autor: Sophia Swiercoswski
Data: 11.10.2024
*/

// Espaço reservado para declaração de bibliotecas
#include <iostream>
#include <limits>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

// Espaço reservado para construção da Struct
struct Pessoa {
    int codigo;
    string nome;
    float altura;
};

// Espaço reservado para prototipação de funções
int menu();
int lerCodigoValido(const string &mensagem);
void limparBuffer();
void exibirMsgErro(const string &mensagem);
void mostrarArray(Pessoa array[], int tamanho);
void esperarEnter();
void zerarArray(Pessoa array[], int tamanho);
void preencherArray(Pessoa array[], int tamanho);
string lerStringValida(const string &mensagem);
float lerAlturaValida(const string &mensagem);
void editarArray(Pessoa array[], int tamanho);
void verificarArray(Pessoa array[], int tamanho);
void ordenarArray(Pessoa array[], int tamanho);

// Função principal
int main() {
    const int TAMANHO = 5; // Define o tamanho do array de pessoas
    Pessoa array[TAMANHO]; // Declara o array para armazenar TAMANHO registros de pessoas
    int opcao = 0; // Declara a variável para armazenar a opção do usuário

    do {
        opcao = menu();
        switch(opcao) {
        case 1: mostrarArray(array, TAMANHO);
            break;
        case 2: zerarArray(array, TAMANHO);
            break;
        case 3: preencherArray(array, TAMANHO);
            break;
        case 4: editarArray(array, TAMANHO);
            break;
        case 5: verificarArray(array, TAMANHO);
            break;
        case 6: ordenarArray(array, TAMANHO);
            break;
        case 0: cout << "Encerrando programa...\n";
            break;
        default:
            exibirMsgErro("Opcao Invalida! Escolha uma Opcao Valida.");
            break;
        }
    } while(opcao != 0);

    return 0;
}

// Função que exibe o menu e retorna a escolha do usuário
int menu() {
    cout << "\nEscolha uma opcao:\n";
    cout << "1 = Mostrar array de pessoas\n";
    cout << "2 = Zerar array de pessoas\n";
    cout << "3 = Preencher array de pessoas\n";
    cout << "4 = Editar pessoa no array\n";
    cout << "5 = Verificar pessoa no array\n";
    cout << "6 = Ordenar array de pessoas por codigo\n";
    cout << "0 = Sair\n";

    return lerCodigoValido("Opcao: ");
}

// Função para ler um número inteiro válido
int lerCodigoValido(const string &mensagem) {
    int numero;
    while(true) {
        cout << mensagem;
        cin >> numero;
        if(cin.fail()) {
            limparBuffer();
            exibirMsgErro("Entrada Invalida! Por favor, insira um numero inteiro.");
        }
        else {
            limparBuffer();
            return numero;
        }
    }
}

// Função para limpar o buffer de entrada
void limparBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora entradas inválidas no buffer
}

// Função para exibir mensagem de erro
void exibirMsgErro(const string &mensagem) {
    cout << mensagem << endl;
}

// Função para mostrar o array de Pessoas
void mostrarArray(Pessoa array[], int tamanho) {
    cout << left << setw(10) << "Codigo" << "\t"
        << left << setw(20) << "Nome" << "\t"
        << left << setw(10) << "Altura" << endl;
    cout << string(50, '-') << endl;
    for(int i = 0; i < tamanho; i++) {
        cout << left << setw(10) << array[i].codigo << "\t"
            << left << setw(20) << array[i].nome << "\t"
            << left << setw(10) << array[i].altura << endl;
    }
    esperarEnter();
}

// Função para esperar o usuário pressionar Enter
void esperarEnter() {
    cout << "\nPressione Enter para continuar...";
    cin.get();
}

// Função para zerar o array de Pessoas
void zerarArray(Pessoa array[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        array[i].codigo = 0;
        array[i].nome = "";
        array[i].altura = 0.0;
    }
    cout << "Array de pessoas zerado!";
    esperarEnter();
}

// Função para preencher o array de pessoas
void preencherArray(Pessoa array[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        array[i].codigo = lerCodigoValido("Digite o Codigo da Pessoa ["+to_string(i)+"]: ");
        array[i].nome = lerStringValida("Digite o Nome da Pessoa ["+to_string(i)+"]: ");
        array[i].altura = lerAlturaValida("Digite a Altura da Pessoa ["+to_string(i)+"]: ");
        cout << "Array de pessoas preenchido com Sucesso!\n";
    }
    esperarEnter();
}

// Função para ler uma String Válida
string lerStringValida(const string &mensagem) {
    string entrada;
    cout << mensagem;
    getline(cin, entrada);

    return entrada;
}

// Função para ler Altura Válida
float lerAlturaValida(const string &mensagem) {
    float altura;
    while(true) {
        cout << mensagem;
        cin >> altura;
        if(cin.fail() || altura <= 0) {
            limparBuffer();
            exibirMsgErro("Entrada invalida! Por favor, insira uma altura valida.\n");
        }
        else {
            limparBuffer();

            return altura;
        }
    }
}

// Função para editar pessoa específica no array
void editarArray(Pessoa array[], int tamanho) {
    int posicao = lerCodigoValido("Digite a posicao que deseja editar: (0 a "+to_string(tamanho-1)+"): ");
    while(posicao < 0 || posicao > tamanho) {
        exibirMsgErro("Posicao Invalida! Tente Novamente.\n");
        posicao = lerCodigoValido("Digite uma posicao valida: ");
    }
    limparBuffer();
    array[posicao].codigo = lerCodigoValido("Digite o novo Codigo para a posicao["+to_string(posicao)+"]: ");
    array[posicao].nome = lerStringValida("Digite o novo Nome da Pessoa ["+to_string(posicao)+"]: ");
    array[posicao].altura = lerAlturaValida("Digite a nova Altura da Pessoa ["+to_string(posicao)+"]: ");
    cout << "Pessoa Editada com Sucesso";
    esperarEnter();
}

// Função para verificar pessoa no array
void verificarArray(Pessoa array[], int tamanho) {
    int codigo = lerCodigoValido("Digite o codigo da pessoa que deseja verificar: ");
    bool encontrado = false;
    for(int i = 0; i < tamanho; i++) {
        if(array[i].codigo == codigo) {
            cout << "Pessoa com o Codigo " << codigo << endl;
            cout << "Nome: " << array[i].nome << endl;
            cout << "Altura: " << array[i].altura << endl;
            encontrado = true;
            break;
        }
        if(!encontrado) {
            cout << "Pessoa com o código " << codigo << " nao encontrado!" << endl;
        }
    }
    esperarEnter();
}

// Função para ordenar o array por código
void ordenarArray(Pessoa array[], int tamanho) {
    sort(array, array + tamanho, [](Pessoa a, Pessoa b) {
        return a.codigo < b.codigo;
    });
    cout << "Array de pessoas ordenado por codigo!";
    esperarEnter();
}