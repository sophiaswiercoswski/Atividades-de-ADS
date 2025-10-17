/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inventario;

/**
 *
 * @author Reginaldo Marcos Gonçalves Júnior e Sophia Swiercoswski
 */
public class Item {
    // Atributos privatos
    private String modelo;
    private Categoria categoria;
    private int quantidade;

    // Métodos de encapsulamento
    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public Categoria getCategoria() {
        return categoria;
    }

    public void setCategoria(Categoria categoria) {
        this.categoria = categoria;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    // Método para exibir informações do item
    public void imprimir() {
        System.out.println("Modelo: " + this.modelo);
        System.out.println("Categoria: " + this.categoria.getNome());
        System.out.println("Quantidade: " + this.quantidade);
    }
}
