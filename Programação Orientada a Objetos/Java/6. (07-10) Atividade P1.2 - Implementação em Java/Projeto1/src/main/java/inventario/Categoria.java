/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inventario;

/**
 *
 * @author Reginaldo Marcos Gonçalves Júnior e Sophia Swiercoswski
 */
public class Categoria {
    // Atributos privatos
    private String nome;
    
    // Métodos de encapsulamento
    public String getNome() {
        return nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    // Método para exibir as informações da categoria
    public void imprimir() {
        System.out.println("Nome: " + this.nome);
    }
}
