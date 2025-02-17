// Exemplo de estruturas dinâmicas
#include <iostream>
#include <string>
using namespace std;

// Definindo uma estrutura para Produto
struct Produto {
    string nome;
    double preco;
    int quantidade;
};

// Função para exibir dados do produto
void exibirProduto(const Produto* prod) {
    cout << "Nome: " << prod->nome << endl;
    cout << "Preço: R$ " << prod->preco << endl;
    cout << "Quantidade: " << prod->quantidade << endl;
}

int main() {
    // Alocando um único produto
    Produto* prod = new Produto;
    
    cout << "=== Cadastro de Produto ===" << endl;
    cout << "Digite o nome do produto: ";
    getline(cin, prod->nome);
    cout << "Digite o preço: ";
    cin >> prod->preco;
    cout << "Digite a quantidade: ";
    cin >> prod->quantidade;
    
    cout << "\n=== Dados do Produto ===" << endl;
    exibirProduto(prod);
    
    // Alocando um array de produtos
    int numProdutos;
    cout << "\nQuantos produtos deseja cadastrar? ";
    cin >> numProdutos;
    cin.ignore();  // Limpa o buffer do teclado
    
    Produto* estoque = new Produto[numProdutos];
    
    // Cadastrando produtos
    cout << "\n=== Cadastro de Múltiplos Produtos ===" << endl;
    for(int i = 0; i < numProdutos; i++) {
        cout << "\nProduto " << i + 1 << endl;
        cout << "Nome: ";
        getline(cin, estoque[i].nome);
        cout << "Preço: ";
        cin >> estoque[i].preco;
        cout << "Quantidade: ";
        cin >> estoque[i].quantidade;
        cin.ignore();
    }
    
    // Exibindo todos os produtos
    cout << "\n=== Estoque Completo ===" << endl;
    for(int i = 0; i < numProdutos; i++) {
        cout << "\nProduto " << i + 1 << endl;
        exibirProduto(&estoque[i]);
    }
    
    // Liberando a memória
    delete prod;
    delete[] estoque;
    prod = nullptr;
    estoque = nullptr;
    
    return 0;
}