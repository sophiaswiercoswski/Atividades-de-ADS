/*
SGT - Sistema de Gerenciamento de Tarefas
Autor: Sophia Swiercoswski
Data: 14/12/2024

Esta atividade tem como objetivo desenvolver um programa que gerencia as tarefas do usuário.
A partir de sub-rotinas e manipulação de arquivos, será possível criar listas de tarefas que
podem ser transformadas em arquivos .txt para uso posterior.
*/

// Bibliotecas
#include <iostream> // Funções de entrada e saída
#include <string> // Manipulação de strings
#include <iomanip> // Utilização da função setw para alinhar colunas
#include <limits> // Utilização de numeric_limits para limpar o buffer
#include <fstream> // Gravação e leitura de arquivos
#include <algorithm> // Manipulação de arrays
using namespace std;

// Constantes globais
const int LARGURA = 50;

// Estrutura de dados para tarefas
struct CadastrarTarefa {
    int codigo;
    string titulo;
    string descricao;
    string data;
    int status;
    int prioridade;
    bool excluida = false; // Propriedade para informar se uma tarefa foi excluída ou não
};

// Função para limpar o buffer
void limparBuffer() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// Função que espera o usuário pressionar enter para continuar executando o programa
void esperarEnter() {
    cout << "\nPressione Enter para continuar..." << endl; // Informa que o usuário deve pressionar enter
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Limpa qualquer caractere no buffer e aguarda o Enter
    cin.get(); // Aguarda o usuário pressionar enter
}

// Função para validar uma string
string validarString(string mensagem) {
    string entrada; // Cria uma variável do tipo string que será retornada ao chamar a função
    cout << mensagem; // Imprime a mensagem da chamada da função
    getline(cin, entrada); // Obtém a entrada do usuário mesmo com espaços

    return entrada; // Retorna a entrada do usuário para a chamada da função
}

// Função para validar o primeiro código inserido
int validarCodigo(string mensagem, CadastrarTarefa tarefa[], int quantidadeTarefas) {
    int entrada; // Variável para retornar ao usuário
    cout << mensagem; // Exibe a mensagem da chamada da função
    limparBuffer();

    while(true) { // Loop que termina apenas quando o usuário digitar um código válido
        cin >> entrada;

        for(int i = 0; i < quantidadeTarefas; i++) { // Percorre pela estrutura de tarefas
           if(cin.fail()) { // Verifica se a entrada não é um número
                limparBuffer();
                cout << "Entrada inválida! Por favor digite um número inteiro maior que 0: "; // Informa ao usuário da entrada correta
            }
            else if(entrada <= 0) { // Verifica se a entrada é um número menor ou igual a 0
                limparBuffer();
                cout << "Entrada inválida! Por favor digite um número inteiro maior que 0: ";
            }
            else if(entrada == tarefa[i].codigo) { // Verifica se o código inserido já existe
                limparBuffer();
                cout << "Esse código já existe! Por favor insira um diferente: "; // Informa ao usuário do código existente
            }
            else { // Caso o usuário digite um código válido, essa entrada é retornada
                limparBuffer();
                return entrada;
            }
        }
    }
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

// Função para validação de intervalos de números inteiros
int validarIntervalo(string mensagem, int n1, int n2) {
    int entrada;  // Cria uma variável do tipo int que será retornada ao chamar a função
    cout << mensagem; // Exibe a mensagem da chamada da função

    while(true) {
        cin >> entrada; // Recebe um valor do usuário

        if(cin.fail() || !(entrada >= n1) || !(entrada <= n2)) { // Verifica se a entrada é um número inteiro e se está entre o intervalo
            limparBuffer();
            cout << "Entrada inválida! Por favor digite um número inteiro entre " << n1 << " a " << n2 << ": "; // Orienta para que o usuário digite a entrada correta
        }
        else { // É executado caso usuário insira a entrada corretamente
            limparBuffer();
            return entrada; // Retorna a entrada do usuário para a chamada da função
        }
    }
}

// Função que cria um cabeçalho centralizado para menus
void cabecalho(string titulo) {
    int margemDireita = ((LARGURA - size(titulo)) - 2) / 2;
    int margemEsquerda = LARGURA - size(titulo) - margemDireita - 2;
    cout << string(LARGURA, '=') << endl
         << '=' << string(margemDireita, ' ') << titulo
         << string(margemEsquerda, ' ') << '=' << endl
         << string(LARGURA, '=') << endl;
}

// Escopo da função menu e as opções
void menu();
void novaTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas);
void verTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas);
void buscarTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas);
void editarTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas);
void excluirTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas);
void ordenarTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas);
void salvarArquivo(CadastrarTarefa* tarefa, int quantidadeTarefas);
void carregarArquivo();

// Função principal
int main() {
    string nomeUsuario;
    int opcao, quantidadeTarefas;
    
    // Solicita pelo nome do usuário
    cout << "= Digite seu nome: ";
    getline(cin, nomeUsuario);
    cout << "= Seja bem-vindo(a), " << nomeUsuario << "!\n";

    quantidadeTarefas = validarInteiro("= Para começar, digite quantas tarefas deseja adicionar: ");
    CadastrarTarefa* tarefa = new CadastrarTarefa[quantidadeTarefas]; // Aloca dinamicamente o tamanho do array de tarefas a partir da entrada do usuário

    do {
        menu(); // Exibe o menu
        cin >> opcao; // Recebe a opção escolhida pelo usuário

        switch(opcao) { // Executa as funcionalidades do menu dependendo da opção do usuário
            case 1: // Cadastra nova tarefa
                novaTarefa(tarefa, quantidadeTarefas);
                break;
            case 2: // Visualiza todas as tarefas
                verTarefa(tarefa, quantidadeTarefas);
                break;
            case 3: // Busca tarefa por código
                buscarTarefa(tarefa, quantidadeTarefas);
                break;
            case 4: // Edita tarefa existente
                editarTarefa(tarefa, quantidadeTarefas);
                break;
            case 5: // Exclui tarefa
                excluirTarefa(tarefa, quantidadeTarefas);
                break;
            case 6: // Ordena tarefas por código ou prioridade
                ordenarTarefa(tarefa, quantidadeTarefas);
                break;
            case 7: // Salva dados em arquivo
                salvarArquivo(tarefa, quantidadeTarefas);
                break;
            case 8: // Carrega dados do arquivo
                carregarArquivo();
                break;
            case 0: // Encerra o programa
                cout << "Encerrando programa...";
                break;
            default: // Caso o usuário digite um número fora das opções do menu, é alertado que só pode ser escolhido entre 0 e 8
                cout << "Opção inválida! Por favor digite um número de 0 a 8: ";
                break;
        }
    } while(opcao != 0);

    // Libera a memória
    delete[] tarefa;
    tarefa = nullptr; 
    return 0;
}

// Função que exibe o menu para o usuário
void menu() {
    cabecalho("SISTEMA DE GERENCIAMENTO DE TAREFAS");
    cout << "1 - Cadastrar nova tarefa.\n";
    cout << "2 - Visualizar todas as tarefas.\n";
    cout << "3 - Buscar tarefa por código.\n";
    cout << "4 - Editar tarefas existente.\n";
    cout << "5 - Excluir tarefa.\n";
    cout << "6 - Ordenar tarefas por código ou prioridade.\n";
    cout << "7 - Salvar dados em arquivo.\n";
    cout << "8 - Carregar dados do arquivo.\n";
    cout << "0 - Sair do programa.\n";
    cout << "Opção: ";
}

// 1 - Função que cadastra quantas tarefas o usuário solicitar
void novaTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas) {
    for(int i = 0; i < quantidadeTarefas; i++) { // Cria uma nova tarefa na estrutura a partir do número escolhido pelo usuário
        cout << "= Tarefa " << i + 1 << ":" << endl;
        tarefa[i].codigo = validarCodigo("-> Digite o código da tarefa: ", tarefa, quantidadeTarefas);
        tarefa[i].titulo = validarString("-> Digite o título: ");
        tarefa[i].descricao = validarString("-> Digite a descrição: ");
        tarefa[i].data = validarString("-> Digite a data para realizar a tarefa: ");
        tarefa[i].status = validarIntervalo("-> Digite o status da tarefa, sendo 1 concluído, 2 em andamento e 3 pendente: ", 1, 3);
        tarefa[i].prioridade = validarIntervalo("-> Digite a prioridade da tarefa, sendo 1 alta, 2 média e 3 baixa: ", 1, 3);
        cout << "Tarefa cadastrada com sucesso!";
    }

    esperarEnter();
}

// 2 - Função que visualiza todas as tarefas
void verTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas) {
    cabecalho("VISUALIZAÇÃO DAS TAREFAS");
    for(int i = 0; i < quantidadeTarefas; i++) { // Percore pela estrutura de tarefas para exibir todas elas
        if(!tarefa[i].excluida) { // Exibe apenas tarefas que não foram excluídas
            cout << "-> Tarefa " << tarefa[i].codigo << ":" << endl
                 << "\t--> Título: " << tarefa[i].titulo << endl
                 << "\t--> Descrição: " << tarefa[i].descricao << endl
                 << "\t--> Data: " << tarefa[i].data << endl;

            cout << "\t--> Status: ";
            switch(tarefa[i].status) { // Devido o status ser um número inteiro, é necessário de uma estrutura de condição para escrever um texto no arquivo
                 case 1:
                    cout << "Concluído";
                    break;
                case 2:
                    cout << "Em andamento";
                    break;
                case 3:
                    cout << "Pendente";
                    break;
            }   

            cout << endl; // Pula a linha caso o status esteja vazia
            cout << "\t--> Prioridade: ";
            switch(tarefa[i].prioridade) { // A mesma situação do status, porém para escrever a prioridade
                case 1:
                    cout << "Alta";
                    break;
                case 2:
                    cout << "Média";
                    break;
                case 3:
                    cout << "Baixa";
                    break;
            }
            
            cout << endl; // Pula a linha caso a propriedade esteja vazia
            cout << string(LARGURA, '-') << endl; // Cria uma linha que divide uma tarefa de outra
        }
    }
    
    esperarEnter();
}

// 3 - Função que busca a tarefa por código
void buscarTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas) {
    int codigo = validarInteiro("Digite o código da tarefa que deseja buscar: "); // Solicita um código válido ao usuário
    
    for(int i = 0; i < quantidadeTarefas; i++) { // Percorre pela estrutura de tarefas
        if(codigo == tarefa[i].codigo) {
            cout << "-> Tarefa " << codigo << " encontrada!\n";
            cout << "\t--> Título: " << tarefa[i].titulo << endl;
            cout << "\t--> Descrição: " << tarefa[i].descricao << endl;
            cout << "\t--> Status: " << tarefa[i].status << endl;
            cout << "\t--> Prioridade: " << tarefa[i].prioridade;
        }
        else {
            cout << "Tarefa com o código " << codigo << " não encontrada.";
        }
	}
    
    esperarEnter();
}

// 4 - Função que edita uma tarefa
void editarTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas) {
    int codigo = validarInteiro("Digite o código da tarefa que deseja editar ou então 0 para sair: "); // Solicita que o usuário digite o código da tarefa para editar

    if(codigo == 0) {
        cout << "Retornando ao menu..." << endl;
        return; // Retorna à função principal
    }
    
    for(int i = 0; i < quantidadeTarefas; i++) { // Percore a estrutura de tarefas
        if(codigo == tarefa[i].codigo) { // Verifica se o código inserido corresponde com o de alguma tarefa
            tarefa[i].codigo = validarCodigo("Digite o novo código: ", tarefa, quantidadeTarefas);
            tarefa[i].titulo = validarString("Digite o novo título: ");
            tarefa[i].descricao = validarString("Digite a nova descrição: ");
            tarefa[i].data = validarString("Digite a nova data para realizar a tarefa: ");
            tarefa[i].status = validarIntervalo("Digite o novo status: ", 1, 3);
            tarefa[i].prioridade = validarIntervalo("Digite a nova prioridade: ", 1, 3);
            cout << "Tarefa editada com sucesso!";
                
            esperarEnter();
            return; // É retornado para a função principal
        }

        cout << "Código não encontrado! ";
        esperarEnter();
        return; // Retorna ao menu
    }   
    
}

// 5 - Função que exclui uma tarefa
void excluirTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas) {
    int codigo = validarInteiro("Digite o código da tarefa que deseja excluir: "); // Solicita que o usuário digite o código da tarefa

    do { // Cria um loop que só é encerrado quando o usuário digitar 0 ou um código existente. Desse modo não há como ficar preso nessa opção
        for(int i = 0; i < quantidadeTarefas; i++) { // Percore a estrutura de tarefas
            if(codigo == tarefa[i].codigo) { // Verifica se o código inserido existe na estrutura de tarefas
                for(int j = i; j < quantidadeTarefas - 1; j++) {
                    tarefa[j] = tarefa[j + 1]; // Troca a posição das tarefas para que a selecionada fique por último
                    tarefa[i].excluida = true; // Informa que a tarefa foi excluída
                }          
                quantidadeTarefas--; // Diminui 1 tarefa
                cout << "Tarefa excluída com sucesso!";
            }
            else {
                cout << "Código não encontrado! Tente novamente ou digite 0 para sair: ";
                cin >> codigo;
                void limparBuffer();
            }
        }
        
        esperarEnter();
        break; // O loop é encerrado
    } while(codigo != 0);
}

// 6 - Função que ordena tarefas por código ou prioridade
void ordenarTarefa(CadastrarTarefa* tarefa, int quantidadeTarefas) {
    int resposta = validarIntervalo("Ordenar as tarefas por:\n1- Código.\n2 - Prioridade.", 1, 2); // Pergunta como o usuário deseja ordenar e armazena a resposta
    
    if(resposta == 1) { // Caso a resposta do usuário seja 1, as tarefas são ordenadas por código
        sort(tarefa, tarefa + quantidadeTarefas, [](CadastrarTarefa a, CadastrarTarefa b){
            return a.codigo < b.codigo; // Retorna as tarefas ordenadas por código
        }); 
    }
    else {
        sort(tarefa, tarefa + quantidadeTarefas, [](CadastrarTarefa a, CadastrarTarefa b){
            return a.prioridade < b.prioridade; // Retorna as tarefas ordenadas por prioridade
        });
    }
    
    cout << "Tarefas ordenadas com sucesso!";
    esperarEnter(); 
}

// 7 - Função que salva dados em arquivo
void salvarArquivo(CadastrarTarefa* tarefa, int quantidadeTarefas) {
    int opcao = validarInteiro("Caso já exista um arquivo da lista de tarefas, as informações gravadas serão apagadas ao menos o arquivo seja carregado antes.\nDigite 0 para sair ou outro número para continuar: ");
    
    if(opcao == 0) {
        cout << "Retornando ao menu..." << endl;
        return; // Retorna ao menu principal
    }

    ofstream arquivoTarefas("lista_tarefas.txt", ios::out); // Cria um novo arquivo ou sobrescreve caso já exista
    if(!arquivoTarefas.is_open()) { // Verifica se o arquivo teve um erro ao ser aberto
        cout << "Erro ao salvar o arquivo!";
        return; // Saí da função
    }

    for(int i = 0; i < quantidadeTarefas; i++) { // Percorre pela estrutura da lista de tarefas para gravar cada uma no arquivo
        if(!tarefa[i].excluida) { // Permite que apenas tarefas que não tenham sido excluídas sejam salvas
            arquivoTarefas << "-> Tarefa " << tarefa[i].codigo << ":" << endl
                 << "\t--> Título: " << tarefa[i].titulo << endl
                 << "\t--> Descrição: " << tarefa[i].descricao << endl
                 << "\t--> Data: " << tarefa[i].data << endl;

            arquivoTarefas << "\t--> Status: ";
            switch(tarefa[i].status) { // Devido o status ser um número inteiro, é necessário de uma estrutura de condição para escrever um texto no arquivo
                case 1:
                    arquivoTarefas << "Concluído";
                    break;
                case 2:
                    arquivoTarefas << "Em andamento";
                    break;
                case 3:
                    arquivoTarefas << "Pendente";
                    break;
            }   

            arquivoTarefas << endl; // Pula a linha caso o status esteja vazio
            arquivoTarefas << "\t--> Prioridade: ";
            switch(tarefa[i].prioridade) { // A mesma situação do status, porém para escrever a prioridade
                case 1:
                    arquivoTarefas << "Alta";
                    break;
                case 2:
                    arquivoTarefas << "Média";
                    break;
                case 3:
                    arquivoTarefas << "Baixa";
                    break;
            }
            
            arquivoTarefas << endl; // Pula a linha caso a propriedade esteja vazia
            arquivoTarefas << string(LARGURA, '-') << endl; // Cria uma linha que divide uma tarefa de outra
        }
        
        cout << "Arquivo salvo com sucesso!" << endl;
        arquivoTarefas.close(); // Fecha o arquivo
        esperarEnter();
    }  
}

// 8 - Função que carrega dados do arquivo
void carregarArquivo() {
    string linha; // Variável para exibir cada linha do arquivo
    ifstream arquivoTarefas("lista_tarefas.txt", ios::in); // Abre o arquivo para a leitura das linhas
    if(!arquivoTarefas.is_open()) { // Verifica se o arquivo teve um erro ao ser aberto
        cout << "Erro ao carregar o arquivo!";
    }

    cabecalho("CONTEÚDO DO ARQUIVO");
    while(getline(arquivoTarefas, linha)) { // Lê as linhas do arquivo
        if(arquivoTarefas.fail()) {
            throw runtime_error("Erro durante o carregamento do arquivo!");
        }
        cout << linha << endl; // Exibe as linhas lidas do arquivo
    }

    cout << "Arquivo carregado com sucesso!" << endl;
    arquivoTarefas.close(); // Fecha o arquivo
    esperarEnter();
}