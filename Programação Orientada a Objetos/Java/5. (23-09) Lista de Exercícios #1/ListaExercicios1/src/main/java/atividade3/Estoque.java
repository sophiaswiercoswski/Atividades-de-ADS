/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade3;

/**
 *
 * @author sophia
 */
public class Estoque {
    // Atributos da classe
    private String nomeProduto;
    private double valor;
    private int quantidade;
    
    // Método construtor vazio
    public Estoque() {
        this.nomeProduto = "";
        this.valor = 0;
        this.quantidade = 0;
    }
    
    // Método construtor com parâmetros
    public Estoque(String nomeProduto, double valor, int quantidade) {
        this.nomeProduto = nomeProduto;
        this.valor = valor;
        this.quantidade = quantidade;
    }
    
    // Métodos de encapsulamento
    public String getNomeProduto() {
        return nomeProduto;
    }
    
    public void setNomeProduto(String nomeProduto) {
        this.nomeProduto = nomeProduto;
    }
    
    public double getValor() {
        return valor;
    }
    
    public void setValor(double valor) {
        this.valor = valor;
    }
    
    public int getQuantidade() {
        return quantidade;
    }
    
    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }
    
    // Método para imprimir valores dos atributos
    public void imprimir() {
        System.out.println("| Informações do produto: ");
        System.out.println("   -> Nome: " + this.nomeProduto);
        System.out.printf("   -> Valor: R$ %.3f\n", this.valor);
        System.out.println("   -> Quantidade: " + this.quantidade);
    }
    
    // Método para verificar a disponibilidade de um produto
    public boolean verificarDisponibilidade(int quantidade){
        // Retorna verdadeiro caso a quantidade fornecida é maior qque 0 e igual ou maior que o do produto
        if(this.quantidade > 0 && this.quantidade >= quantidade) {
            return true;
        }
        else {
            return false;
        }
    }
    
    // Método para remover produtos dependendo da disponibilidade no estoque
    public void removerProdutos(int quantidade) {
        if(verificarDisponibilidade(quantidade)) {
            this.quantidade -= quantidade;
            System.out.println(quantidade + " produto(s) foram removido(s). Agora há " + this.quantidade + " produto(s) no estoque.");
        }
        else {
            System.out.println("Não há estoque suficiente do produto a ser removido!");
        }
    }
}
