/*
Título: Manipulando Array
Autor: Sophia Swiercoswski
Data: 27.10.2024

Nesta atividade foi desenvolvida quatro funções para: mostrar quantidade de nomes vazios e
preenchidos, exibir contagem de ocorrências de um nome, mostrar o nome mais curto e o mais
longo, e uma função autoral que converte todos os caracteres da array em minúsculo.
*/

#include <iostream>
#include <string>
#include <algorithm>  // Para usar a função sort()
#include <limits>     // Para usar numeric_limits
#include <climits>    // Para usar INT_MAX e INT_MIN
using namespace std;  // Namespace padrão para evitar o uso de std:: antes dos comandos

// Função para aguardar que o usuário pressione Enter
void esperarEnter() {
    cout << "\nPressione Enter para continuar...";
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpa o buffer de entrada - NO CASO DE DAR ERRO DURANTE A EXECUÇÃO DESCOMENTE ESSA LINHA
    cin.get();  // Aguarda o usuário pressionar Enter
}

// Função para limpar o buffer e resetar o estado do `cin`
void limparBuffer() {
    cin.clear();  // Limpa o estado de erro
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignora entradas inválidas no buffer
}

// Função genérica para exibir mensagens de erro
void exibirMensagemErro(const string &mensagem) {
    cout << mensagem << endl;
}

// Função para ler uma string válida
string lerEntradaValida(const string &mensagem) {
    string entrada;
    cout << mensagem;
    getline(cin, entrada);  // Usa getline para aceitar entradas com espaços
    return entrada;
}

// 1- Função para zerar o array de nomes
void zerarArray(string array[], int tamanho) {
    fill(array, array + tamanho, "");  // Usa a função fill para preencher o array com strings vazias
    cout << "Array de nomes zerado!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 2- Função para mostrar o array de nomes
void mostrarArray(string array[], int tamanho) {
    cout << "Conteúdo do array de nomes:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << "Posição [" << i << "]: " << array[i] << endl;  // Exibe o índice e o nome
    }
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 3- Função para preencher o array de nomes com entradas do usuário
void preencherArray(string array[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        array[i] = lerEntradaValida("Digite um nome para a posição [" + to_string(i) + "]: ");
    }
    cout << "Array de nomes preenchido manualmente!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 4- Função para editar um nome em uma posição específica do array
void editarArray(string array[], int tamanho) {
    int posicao = stoi(lerEntradaValida("Digite a posição que deseja editar (0 a " + to_string(tamanho - 1) + "): "));

    // Garante que a posição esteja dentro dos limites do array
    while (posicao < 0 || posicao >= tamanho) {
        exibirMensagemErro("Posição inválida! Tente novamente.");
        posicao = stoi(lerEntradaValida("Digite uma posição válida: "));
    }

    string nome = lerEntradaValida("Digite o novo nome para a posição [" + to_string(posicao) + "]: ");
    array[posicao] = nome;  // Atualiza o nome na posição escolhida
    cout << "Nome alterado com sucesso!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 5- Função para verificar se um nome está presente no array
void verificarNome(string array[], int tamanho) {
    string nome = lerEntradaValida("Digite o nome que deseja verificar: ");
    bool encontrado = false;

    // Verifica se o nome está no array
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == nome) {
            cout << "Nome '" << nome << "' encontrado na posição [" << i << "]" << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Nome '" << nome << "' não encontrado no array." << endl;
    }

    esperarEnter();  // Espera o usuário pressionar Enter
}

// 6- Função para ordenar o array de nomes em ordem alfabética
void ordenarArray(string array[], int tamanho) {
    sort(array, array + tamanho);  // Usa a função sort() para ordenar o array
    cout << "Array de nomes ordenado com sucesso!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 7- Função para mostrar a quantidade de nomes vazios e preenchidos
void quantVazios(string array[], int tamanho) {
    int vazio = 0, preenchido = 0; // Zera as variáveis de contagem
    for(int i = 0; i < tamanho; i++) { // Percorre pelo aray
        if(array[i] == "") {
            vazio++; // Adiciona 1 à contagem de vazios caso o elemento seja uma string vazia
        }
        else {
            preenchido++; // Adiciona 1 à contagem de preenchidos caso o elemento seja uma string com conteúdo
        }
    }
    cout << "O array possui " << vazio << " nomes vazios e " << preenchido << " nomes preenchidos." << endl;

    esperarEnter(); // Espera que o usuário pressione enter
}

// 8- Função para contar a ocorrência de um nome
void ocorrenciaNome(string array[], int tamanho) {
    int quantNome = 0; // Cria uma variável para armazenar a quantidade de ocorrências
    string nome; // Cria uma variável do tipo string
    cout << "Digite o nome que deseja verificar a ocorrência: ";
    cin >> nome; // Armazena o nome que o usuário digitar
    limparBuffer(); // Limpa o buffer para que a função esperarEnter funcione
    for(int i = 0; i < tamanho; i++ ) { // Percorre pelo array
        if(array[i] == nome) {
            quantNome++; // Adiciona 1 à contagem de ocorrências caso o nome atual seja igual ao que o usuário digitou
        }
    }
    cout << "O nome " << nome << " aparece " << quantNome << " vezes no array." << endl;

    esperarEnter(); // Espera que o usuário pressione enter
}

// 9- Função que exibe o nome mais curto e o mais longo
void nomeTamanho(string array[], int tamanho){
    int menor = 0, maior = 0; // Armazena limites nas variáveis de menor e maior
    string menorString, maiorString; // Cria variáveis para armazenar o menor e maior número
    for(int i = 0; i < tamanho; i++) { // Percorre o array
        if(array[i].size() < menor) { // Verifica se o tamanho do elemento atual é menor que o tamanho 0
            menor = array[i].size(); // Define o tamanho do elemento atual como o menor
            menorString = array[i]; // Define o nome atual como o menor
        }
        if(array[i].size() > maior) { // Verifica se o tamanho do elemento atual é maior que o tamanho 0
            maior = array[i].size(); // Define o tamanho do elemento atual como o maior
            maiorString = array[i]; // Define o nome atual como o maior
        }
    }
    cout << "O menor nome do array é " << menorString << " que possui " << menor << " caracteres."<< endl;
    cout << "O maior nome do array é " << maiorString << " que possui " << maior << " caracteres." << endl;
    
    esperarEnter(); // Espera que o usuário pressione enter
}

// 10- Função que converte todos os nomes de array em minúsculo
void nomeMinusculo(string array[], int tamanho) {
    string arrayNome[tamanho]; // Cria um array para armazenar nomes em minúsculo
    for(int i = 0; i < tamanho; i++) { // Percorre pelo array
        for(int s = 0; s < array[i].size(); s++) { // Percorre por cada caractere da string contida no array
            arrayNome[i] += tolower(array[i][s]); // Converte os caracteres para minúsculo e soma para formar o nome
        }
    }
    cout << "Nomes do array em minúsculo: " << endl;
    for(int i = 0; i < tamanho; i++) { // Percorre pelo novo array de nomes em minúsculos
        cout << arrayNome[i] << endl; // Exibe os nomes em minúsculo
    }

    esperarEnter();  // Espera o usuário pressionar Enter
}

// Função que exibe o menu e retorna a escolha do usuário
int menu() {
    cout << "\nEscolha uma opção:\n";
    cout << "1 - Mostrar array de nomes\n";
    cout << "2 - Zerar array de nomes\n";
    cout << "3 - Preencher array de nomes\n";
    cout << "4 - Editar nome no array\n";
    cout << "5 - Verificar se o nome está no array\n";
    cout << "6 - Ordenar array de nomes\n";
    cout << "7 - Mostrar quantidade de nomes vazios e preenchidos\n";
    cout << "8 - Mostrar quantidade de ocorrências de um nome\n";
    cout << "9 - Mostrar o nome mais curto e o nome mais longo\n";
    cout << "10 - Converter todos os nomes para minúsculo e exibir\n";
    cout << "0 - Sair\n";
    return stoi(lerEntradaValida("Opção: "));
}

int main() {
    const int TAMANHO = 10;  // Define o tamanho do array de nomes
    string array[TAMANHO];   // Declara o array para armazenar 10 nomes

    int opcao;

    do {
        opcao = menu();  // Mostra o menu e lê a opção do usuário

        switch (opcao) {
            case 1:
                mostrarArray(array, TAMANHO);
                break;
            case 2:
                zerarArray(array, TAMANHO);
                break;
            case 3:
                preencherArray(array, TAMANHO);
                break;
            case 4:
                editarArray(array, TAMANHO);
                break;
            case 5:
                verificarNome(array, TAMANHO);
                break;
            case 6:
                ordenarArray(array, TAMANHO);
                break;
            case 7:
                quantVazios(array, TAMANHO);
                break;
            case 8:
                ocorrenciaNome(array, TAMANHO);
                break;
            case 9:
                nomeTamanho(array, TAMANHO);
                break;
            case 10:
                nomeMinusculo(array, TAMANHO);
                break;
            case 0:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                exibirMensagemErro("Opção inválida! Escolha uma opção válida.");
                break;
        }
    } while (opcao != 0);  // O programa continua executando até que o usuário escolha sair

    return 0;
}