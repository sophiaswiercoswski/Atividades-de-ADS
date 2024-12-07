#include <iostream>
#include <string>
using namespace std;

// Exemplo de diferentes tipos de funções
// Procedimento para separar as funções
void caractere() {
    cout << "\n\n -------------------------------------------------- \n\n";
}

// Função do tipo string sem parâmetro
string saudacao() {
    cout << "| string saudacao()" << endl;
    return "--> Salve, essa aqui é uma função do tipo string sem nenhum parâmetro.";
}

// Função do tipo string com parâmetro
string saudacaoUsuario(string nome) {
    cout << "| string saudacaoUsuario(string nome)" << endl;
    return "--> Salve " + nome + ", essa aqui é uma função do tipo string com parâmetro. Pra poder invocar funções com parâmetros, é preciso colocar o nome da função e quais são os valores passados pra eles, que nesse caso são chamados de argumentos. Ambos têm que ser do  mesmo tipo e precisam ser colocados na mesma ordem.";
}

// Função do tipo int que soma dois números
int soma(int n1, int n2) {
    cout << "| int soma(int n1, int n2)" << endl;
    cout << "--> Essa função recebe como parâmetro dois números inteiros e retorna a soma deles, que no caso é ";
    return n1 + n2;
}

// Função do tipo float que soma três números e retorna a média entre eles
float media(float f1, float f2, float f3) {
    cout << "| float media(float f1, float f2, float f3)" << endl;
    cout << "--> A função recebe três números do tipo float e retorna a seguinte média entre eles: ";
    return (f1 + f2 + f3) / 3.0;
}

// Função do tipo bool que verifica se o número é ímpar
bool numeroImpar(int n1) {
    cout << "| bool numeroImpar(int n1, int n2)" << endl;
    cout << "--> Essa função verifica se o primeiro número digitado pelo usuário é ímpar. Se for, a função retorna 1 (true), mas caso contrário é retornado 0 (false).\n";
    cout << "Valor booleano retornado: ";
    return n1 % 2 != 0;
}

// Função que altera o valor original da variável nome
string nomeNovo(string &nome) {
    cout << "| string nomeNovo(string &nome)" << endl;
    cout << "--> Todas as funções acima tinham parâmetros passados por valores, que cria apenas uma cópia local dentro da função e o valor original na main não é alterado.\n";
    cout << "--> Para mudar o valor original de uma variável em uma função, é preciso passar o seu endereço a partir do símbolo & e o nome da variável.\n";
    cout << "Antes seu nome era " << nome;
    nome = "safadinha";
    return ", mas agora sua certidão de nascimento foi mudada e você vai se chamar " + nome + " (>`o`)> \n";
}

int main() {
    string nome;
    int n1, n2;
    float f1, f2, f3;
    cout << "Seja bem-vindo(a)" << endl << "Esse é um programa simples para mostrar os diferentes tipos de funções.\n";
    
    // Pergunta pelo nome do usuário
    cout << "Para iniciar, digite o seu nome: ";
    getline(cin, nome);

    // Pergunta por dois números int
    cout << "Agora me diga dois números inteiros: ";
    cin >> n1 >> n2;

    // Pergunta por três números float
    cout << "Diz aí agora uns três números decimais: ";
    cin >> f1 >> f2 >> f3;

    // Invocação de função sem parâmetro
    caractere();
    cout << saudacao();

    // Invocação de funções com parâmetros por valores
    caractere();
    cout << saudacaoUsuario(nome);

    caractere();
    cout << soma(n1, n2);

    caractere();
    cout << media(f1, f2, f3);

    caractere();
    cout << numeroImpar(n1);

    // Invocação de função com parâmetro por referência
    caractere();
    cout << nomeNovo(nome);

    cout << "\nE esses foram os exemplos de funções, " << nome << ". Até a próxima!\n";

    return 0;
}