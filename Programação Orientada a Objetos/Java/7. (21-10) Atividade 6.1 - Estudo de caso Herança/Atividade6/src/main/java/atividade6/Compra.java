/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade6;

// Importação da classe ArrayList para implementar arrays
import java.util.ArrayList;

/**
 *
 * @author sophia
 */
public class Compra {
    private int id;
    private String pagamento;
    private ArrayList<Jogo> itens;

    // Método construtor com a lista de itens vazia
    public Compra(int id, String pagamento) {
        this.id = id;
        this.pagamento = pagamento;
        this.itens = new ArrayList<>();
    }
    
    // Métodos de encapsulamento
    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getPagamento() {
        return pagamento;
    }

    public void setPagamento(String pagamento) {
        this.pagamento = pagamento;
    }
    
    // Método para adicionar um jogo no carrinho de itens
    public void addItem(Jogo jogo) {
        // Adiciona o jogo ao array de itens
        itens.add(jogo);
    }
    
    // Método para mostrar o resumo da compra
    public void mostrarCarrinho() {
        // Cria uma variável para armazenar a soma de todos os itens
        double valorTotal = 0;
        
        System.out.println("=== CARRINHO DE COMPRAS ===");
        
        // Percorre por cada item do array de itens
        for(Jogo j : itens) {
            // Captura o valor do item percorrido e soma com a variável do valor total
            valorTotal += j.getValor();
            
            System.out.println(j.getTitulo() + " -> R$" + j.getValor());
        }
        
        // Exibe a forma de pagamento e o total da compra
        System.out.println("");
        System.out.println("Forma de pagamento: " + this.pagamento);
        System.out.println("Total da compra: R$" + valorTotal);
        System.out.println("");
    }
}
