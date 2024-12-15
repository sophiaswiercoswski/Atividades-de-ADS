/*
Projeto Autoral
14/12/2024
Sophia Swiercoswski

Este simples projeto pretendia registrar hábitos semanais. 
A ideia era criar uma semana, os hábitos e marcar se foram concluídos ou não, e teriam relatórios que
mostrariam o percentual de conclusão para o usuário ter uma visão de seus hábitos concluídos.
Por falta de gerenciamento de tempo, não consegui fazer nada do que planejava :^/
*/

#include <iostream> // Utilização de funções de entrada e saída
#include <string> // Manipulação de strings
#include <limits> // Utilização de numeric_limits para limpar o buffer
#include <fstream> // Gravação e leitura de arquivos
using namespace std;

// Estruturas de dados
struct CadastrarHabito { // Estrutura para criar um hábito
    string titulo; // Nome do hábito
    int codigo; // Código do hábito
    bool concluido = false; // Define que o hábito criado não foi concluído
};

struct CadastrarSemana {
    int inicio;
    int fim;
};

struct CadastrarDia {
    int diaSemana;
    int habitosConcluidos = 0;
};

// Função para limpar o buffer
void limparBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Função para validação de um número inteiro positivo
int validarInteiro(string mensagem) {
    int entrada; // Cria uma variável do tipo int que será retornada ao chamar a função
    cout << mensagem; // Exibe a mensagem da chamada da função

    while(true) { // Cria um loop que só é encerrado quando a entrada é válida
        cin >> entrada; // Obtém um número do usuário
        
        if(cin.fail() || entrada < 0) { // Verifica se a entrada é válida
            limparBuffer();
            cout << "Entrada inválida! Por favor digite um número inteiro maior ou igual a 0: "; // Orienta para que o usuário insira um número inteiro
        }
        else { // É executado caso usuário insira a entrada corretamente
            return entrada; // Retorna a entrada do usuário para a chamada da função
        }
    }
}

// Função para validar uma string
string validarString(string mensagem) {
    string entrada; // Cria uma variável do tipo string que será retornada ao chamar a função
    cout << mensagem; // Imprime a mensagem da chamada da função
    getline(cin, entrada); // Obtém a entrada do usuário mesmo com espaços

    return entrada; // Retorna a entrada do usuário para a chamada da função
}

// Função que cria um cabeçalho centralizado para menus
void cabecalho(string titulo) {
    int margemDireita = ((50 - size(titulo)) - 2) / 2;
    int margemEsquerda = 50 - size(titulo) - margemDireita - 2;
    cout << string(50, '=') << endl
         << '=' << string(margemDireita, ' ') << titulo
         << string(margemEsquerda, ' ') << '=' << endl
         << string(50, '=') << endl;
}

// Escopo das funções do menu
void menu();
void criarSemana(CadastrarSemana* semana);
void criarHabito(CadastrarHabito* habito, int quantidadeHabitos);
void listarHabito(CadastrarHabito* habito, int quantidadeHabitos);
void concluirHabito(CadastrarHabito* habito, int quantidadeHabitos);
void salvarArquivo(CadastrarHabito* habito, int quantidadeHabitos);
void carregarArquivo();

int main() {
    int opcao, quantidadeHabitos;
    CadastrarSemana semana;
    CadastrarHabito* habitos;
    cout << "Quantos hábitos gostaria de registrar nessa semana? ";
    cin >> quantidadeHabitos;
    limparBuffer();
    habitos = new CadastrarHabito[quantidadeHabitos];

    do {
        menu(); // Exibe o menu
        cin >> opcao; // Recebe a opção escolhida pelo usuário
        limparBuffer();

        switch(opcao) { // Executa as funcionalidades do menu dependendo da opção do usuário
            case 1: // Cadastra nova semana
                criarSemana(&semana);
                break;
            case 2: // Cadastra um novo hábito
                criarHabito(habitos, quantidadeHabitos);
                break;
            case 3: // Lista todos os hábitos
                listarHabito(habitos, quantidadeHabitos);
                break;
            case 4: // Concluí um hábito
                concluirHabito(habitos, quantidadeHabitos);
                break;
            case 5: // Salva o arquivo de hábitos
                salvarArquivo(habitos, quantidadeHabitos);
                break;
            case 6: // Carrega o arquivo de hábitos
                carregarArquivo();
                break;
            case 0: // Encerra o programa
                cout << "Encerrando programa...";
                break;
            default: // Caso o usuário digite um número fora das opções do menu, é alertado que só pode ser escolhido entre 0 e 4
                cout << "Opção inválida! Por favor digite um número de 0 a 4: ";
                break;
        }
    } while(opcao != 0);

    // Libera a memória
    delete[] habitos;
    habitos = nullptr; 
    return 0;
}

// Função que exibe o menu
void menu() {
    cout << "1 - Criar semana.\n";
    cout << "2 - Criar hábito.\n";
    cout << "3 - Listar hábitos.\n";
    cout << "4 - Concluir um hábito.\n";
    cout << "5 - Salvar arquivo de hábitos.\n";
    cout << "6 - Carregar arquivo de hábitos.\n";
    cout << "0 - Sair do programa\n";
}

void criarSemana(CadastrarSemana* semana) {
    cout << "Insira o dia de início da semana: ";
    cin >> semana->inicio;
    limparBuffer();
    cout << "Insira o último dia da semana: ";
    cin >> semana->fim;
    limparBuffer();
    cout << "Semana criada com sucesso!\n";
}

// Função que cria hábitos
void criarHabito(CadastrarHabito* habito, int quantidadeHabitos) {
    for(int i = 0; i < quantidadeHabitos; i++) {
        cout << "Insira o código do hábito: ";
        cin >> habito[i].codigo;
        limparBuffer();
        habito[i].titulo = validarString("Insira o nome do hábito: ");
        cout << "Hábito criado com sucesso!\n";
    }
}

// Função que exibe hábitos
void listarHabito(CadastrarHabito* habito, int quantidadeHabitos) {
    cabecalho("LISTA DE HÁBITOS");
    for(int i = 0; i < quantidadeHabitos; i++) {
        cout << "Hábito " << habito[i].codigo << ":" << endl;
        if(!habito[i].concluido) { // Verifica se a propriedade 'concluído' do hábito é falsa
            cout << "[ ] " << habito[i].titulo << endl;
        }
        else {
            cout << "[X] " << habito[i].titulo << endl;
        }
    cout << string(50, '-') << endl; // Cria uma linha para separar cada hábito
    }
}

// Função que concluí hábitos
void concluirHabito(CadastrarHabito* habito, int quantidadeHabitos) {
    int codigo; // Cria uma variável para armazenar o código digitado pelo usuário
    listarHabito(habito, quantidadeHabitos); // Chama a função para listar os hábitos
    cout << "Digite o código do hábito que deseja concluir: ";
    cin >> codigo;
    limparBuffer();
    for(int i = 0; i < quantidadeHabitos; i++) {
        if(codigo == habito[i].codigo) { // Concluí o hábito caso o código dele seja igual ao que o usuário digitou
            habito[i].concluido = true;
        }
    }

    cout << "Hábito concluído com sucesso!";
}

// Função que salva dados em arquivo
void salvarArquivo(CadastrarHabito* habito, int quantidadeHabitos) {
    int opcao = validarInteiro("Caso já exista um arquivo de hábitos, as informações gravadas serão apagadas ao menos o arquivo seja carregado antes.\nDigite 0 para sair ou outro número para continuar: ");
    
    if(opcao == 0) {
        cout << "Retornando ao menu..." << endl;
        return; // Retorna ao menu principal
    }

    ofstream arquivoHabitos("habitos.txt", ios::out); // Cria um novo arquivo ou sobrescreve caso já exista
    if(!arquivoHabitos.is_open()) { // Verifica se o arquivo teve um erro ao ser aberto
        cout << "Erro ao salvar o arquivo!";
        return; // Saí da função
    }

    for(int i = 0; i < quantidadeHabitos; i++) { // Percorre pela estrutura da lista de tarefas para gravar cada uma no arquivo
        arquivoHabitos << "Hábito " << habito[i].codigo << ":" << endl;
        if(!habito[i].concluido) { // Verifica se a propriedade 'concluído' do hábito é falsa
            arquivoHabitos << "[ ] " << habito[i].titulo << endl;
        }
        else {
            arquivoHabitos << "[X] " << habito[i].titulo << endl;
        }
        arquivoHabitos << string(50, '-') << endl; // Cria uma linha para separar cada hábito
    }
        
    cout << "Arquivo salvo com sucesso!" << endl;
    arquivoHabitos.close(); // Fecha o arquivo
}

// Função que carrega dados do arquivo
void carregarArquivo() {
    string linha; // Variável para exibir cada linha do arquivo
    ifstream arquivoHabitos("habitos.txt", ios::in); // Abre o arquivo para a leitura das linhas
    if(!arquivoHabitos.is_open()) { // Verifica se o arquivo teve um erro ao ser aberto
        cout << "Erro ao carregar o arquivo!";
    }

    cabecalho("CONTEÚDO DO ARQUIVO");
    while(getline(arquivoHabitos, linha)) { // Lê as linhas do arquivo
        if(arquivoHabitos.fail()) {
            throw runtime_error("Erro durante o carregamento do arquivo!");
        }
        cout << linha << endl; // Exibe as linhas lidas do arquivo
    }

    cout << "Arquivo carregado com sucesso!" << endl;
    arquivoHabitos.close(); // Fecha o arquivo
}