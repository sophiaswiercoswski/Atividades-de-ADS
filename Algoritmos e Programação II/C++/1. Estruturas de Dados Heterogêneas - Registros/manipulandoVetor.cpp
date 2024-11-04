/*
Título: Manipulando Vetor
Autor: Sophia Swiercoswski
Data: 27.10.2024

Esta atividade tem como objetivo desenvolver quatro funções que exibem a quantidade de: números positivos
e negativos, pares e ímpares, menor e maior valor do vetor, e a soma e média de todos os elementos.
*/

#include <iostream>  // Biblioteca padrão para operações de entrada e saída
#include <algorithm>  // Biblioteca para funções como sort()
#include <cstdlib>    // Biblioteca para geração de números aleatórios (rand)
#include <ctime>      // Biblioteca para inicializar a semente do gerador de números aleatórios
#include <string>     // Biblioteca para usar funções como to_string
#include <limits>     // Biblioteca para usar numeric_limits
using namespace std;  // Namespace padrão para evitar o uso de std:: antes dos comandos

// Função para aguardar que o usuário pressione Enter
void esperarEnter() {
    cout << "\nPressione Enter para continuar...";
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpa o buffer de entrada - NO CASO DE DAR ERRO DURANTE A EXECUSSÃO DESCOMENTE ESSA LINHA
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

// Função para ler um número inteiro válido
int lerEntradaValida(const string &mensagem) {
    int numero;
    while (true) {
        cout << mensagem;
        cin >> numero;
        if (cin.fail()) {
            limparBuffer();  // Limpa o estado de erro e o buffer
            exibirMensagemErro("Entrada inválida! Por favor, insira um número inteiro.");
        } else {
            limparBuffer();  // Limpa o buffer após a entrada válida
            return numero;
        }
    }
}

// 1- Função para zerar o vetor
void zerarVetor(int vetor[], int tamanho) {
    fill(vetor, vetor + tamanho, 0);  // Usa a função fill para preencher o vetor com 0
    cout << "Vetor zerado!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 2- Função para mostrar o vetor
void mostrarVetor(int vetor[], int tamanho) {
    cout << "Conteúdo do vetor:\n";
    for (int i = 0; i < tamanho; i++) {
        cout << "Posição [" << i << "]: " << vetor[i] << endl;  // Exibe o índice e o valor do vetor
    }
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 3- Função para preencher o vetor com valores fornecidos pelo usuário
void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = lerEntradaValida("Digite um valor inteiro para a posição [" + to_string(i) + "]: ");
    }
    cout << "Vetor preenchido manualmente!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 4- Função para preencher o vetor com valores aleatórios dentro de um intervalo fornecido pelo usuário
void preencherVetorAleatorio(int vetor[], int tamanho) {
    int minValor = lerEntradaValida("Digite o valor mínimo para o intervalo de valores aleatórios: ");
    int maxValor;

    while (true) {
        maxValor = lerEntradaValida("Digite o valor máximo para o intervalo de valores aleatórios: ");
        if (maxValor > minValor) break;  // Verifica se o valor máximo é maior que o mínimo
        exibirMensagemErro("Entrada inválida! O valor máximo deve ser maior que o valor mínimo.");
    }

    // Preenche o vetor com valores aleatórios no intervalo
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = minValor + rand() % (maxValor - minValor + 1);
    }

    cout << "Vetor preenchido com valores aleatórios!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 5- Função para editar o valor de uma posição específica do vetor
void editarVetor(int vetor[], int tamanho) {
    int posicao = lerEntradaValida("Digite a posição que deseja editar (0 a " + to_string(tamanho - 1) + "): ");

    // Garante que a posição esteja dentro dos limites do vetor
    while (posicao < 0 || posicao >= tamanho) {
        exibirMensagemErro("Posição inválida! Tente novamente.");
        posicao = lerEntradaValida("Digite uma posição válida: ");
    }

    int valor = lerEntradaValida("Digite o novo valor para a posição [" + to_string(posicao) + "]: ");
    vetor[posicao] = valor;  // Atualiza o valor na posição escolhida
    cout << "Valor alterado com sucesso!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 6- Função para verificar se um valor está presente no vetor
void verificarValor(int vetor[], int tamanho) {
    int valor = lerEntradaValida("Digite o valor que deseja verificar: ");
    bool encontrado = false;

    // Verifica se o valor está no vetor
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            cout << "Valor " << valor << " encontrado na posição [" << i << "]" << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Valor " << valor << " não encontrado no vetor." << endl;
    }

    esperarEnter();  // Espera o usuário pressionar Enter
}

// 7- Função para ordenar o vetor
void ordenarVetor(int vetor[], int tamanho) {
    sort(vetor, vetor + tamanho);  // Usa a função sort() para ordenar o vetor
    cout << "Vetor ordenado com sucesso!";
    esperarEnter();  // Espera o usuário pressionar Enter
}

// 8- Função para mostrar a quantidade de números positivos e negativos
void quantPositivosNegativos(int vetor[], int tamanho) {
    int positivos = 0, negativos = 0; // Zera as variáveis de contagem para não ficarem com lixo da memória
    for(int i = 0; i < tamanho; i++) { // Percorre o vetor
        if(vetor[i] >= 0) {
            positivos++; // Acrescenta 1 à contagem de positivos caso o valor seja maior ou igual a 0
        }
        else {
            negativos++; // Acrescenta 1 à contagem de negativos caso a condição acima seja falsa
        }
    }
    cout << "O vetor possui " << positivos << " números positivos e " << negativos << " números negativos." << endl; // Informa a quantidade de números positivos e negativos
    
    esperarEnter(); // Espera que o usuário pressione enter
}

// 9- Função para mostrar a quantidade de números pares e ímpares
void quantParesImpares(int vetor[], int tamanho) {
    int pares = 0, impares = 0; // Zera as variáveis de contagem para não ficarem com lixo da memória
    for(int i = 0; i < tamanho; i++) { // Percorre o vetor
        if(vetor[i] % 2 == 0) {
            pares++; // Caso o resto da divisão do número seja igual a 0, é acrescentado 1 à variável de pares
        }
        else {
            impares++; // Acrescenta 1 à variável de ímpares caso o resto da divisão seja diferente de 0
        }
    }
    cout << "O vetor possui " << pares << " números pares e " << impares << " números ímpares." << endl; // Exibe quantidade de números pares e ímpares

    esperarEnter(); // Espera que o usuário pressione enter
}

// 10- Função para mostrar o menor e maior valor
void menorMaior(int vetor[], int tamanho) {
    int menor = vetor[0], maior = vetor[0]; // Define o menor e maior valor inicial
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] < menor) { // Verifica se o número atual é menor que o da primeira posição do vetor
            menor = vetor[i];
        }
        if(vetor[i] > maior) { // Verifica se o número atual é maior que o da primeira posição do vetor
            maior = vetor[i];
        }
    }
    cout << "O menor número do vetor é " << menor << " e o maior número é " << maior << endl; // Exibe o menor e maior número

    esperarEnter(); // Espera que o usuário pressione enter
}

// 11- Função autoral que exibe a soma e média de todos os elementos do vetor
void somaMedia(int vetor[], int tamanho) {
    int soma = 0; // Zera a variável que armazena a soma de todos os elementos
    for(int i = 0; i < tamanho; i++) { // Percorre o vetor
        soma += vetor[i]; // Soma cada elemento do vetor com a variável de soma
    }
    float somaFloat = soma; // Cria uma cópia float da variável soma para que a média não seja o resultado de dois inteiros
    float media = somaFloat / tamanho; // Divide a soma em float pelo tamanho do vetor para encontrar a média
    cout << "A soma dos elementos do vetor é " << soma << " e a média é " << media << endl; // Exibe a soma e média dos elementos

    esperarEnter(); // Espera que o usuário pressione enter
}

// Função que exibe o menu e retorna a escolha do usuário
int menu() {
    cout << "\nEscolha uma opção:\n";
    cout << "1 - Mostrar vetor\n";
    cout << "2 - Zerar vetor\n";
    cout << "3 - Preencher vetor manualmente\n";
    cout << "4 - Preencher vetor com valores aleatórios\n";
    cout << "5 - Editar valor do vetor\n";
    cout << "6 - Verificar valor no vetor\n";
    cout << "7 - Ordenar vetor\n";
    cout << "8 - Mostrar quantidade de números positivos e negativos\n";
    cout << "9 - Mostrar quantidade de números pares e ímpares\n";
    cout << "10 - Mostrar o menor e maior número\n";
    cout << "11 - Mostrar a soma e média dos elementos do vetor\n";
    cout << "0 - Sair\n";
    return lerEntradaValida("Opção: ");
}

int main() {
    srand(time(0));  // Inicializa o gerador de números aleatórios

    const int TAMANHO = 10;  // Define o tamanho do vetor
    int vetor[TAMANHO];      // Declara o vetor de inteiros

    int opcao;

    do {
        opcao = menu();  // Mostra o menu e lê a opção do usuário

        switch (opcao) {
            case 1:
                mostrarVetor(vetor, TAMANHO);
                break;
            case 2:
                zerarVetor(vetor, TAMANHO);
                break;
            case 3:
                preencherVetor(vetor, TAMANHO);
                break;
            case 4:
                preencherVetorAleatorio(vetor, TAMANHO);
                break;
            case 5:
                editarVetor(vetor, TAMANHO);
                break;
            case 6:
                verificarValor(vetor, TAMANHO);
                break;
            case 7:
                ordenarVetor(vetor, TAMANHO);
                break;
            case 8:
                quantPositivosNegativos(vetor, TAMANHO);
                break;
            case 9:
                quantParesImpares(vetor, TAMANHO);
                break;
            case 10:
                menorMaior(vetor, TAMANHO);
                break;
            case 11:
                somaMedia(vetor, TAMANHO);
                break;
            case 0:
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                exibirMensagemErro("Opção inválida! Escolha uma opção válida.");
                break;
        }
    } while (opcao != 0);  // O programa continua executando até que o usuário escolha sair

    return 0;
}