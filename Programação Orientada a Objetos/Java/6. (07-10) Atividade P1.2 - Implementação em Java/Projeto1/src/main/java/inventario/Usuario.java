/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inventario;

/**
 *
 * @author Reginaldo Marcos Gonçalves Júnior e Sophia Swiercoswski
 */
public class Usuario {
    // Atributos privados
    private String nome;
    private String setor;
    private Item item;
    
    // Métodos de encapsulamento
    public String getNome() {
        return nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public String getSetor() {
        return setor;
    }
    
    public void setSetor(String setor) {
        this.setor = setor;
    }
    
    // Método para exibir as informações do usuário
    public void imprimir() {
        System.out.println("Nome: " + this.nome);
        System.out.println("Setor: " + this.setor);
    }
    
    // Método para dar entrada no item
    public void darEntrada(Usuario usuario, Item item, String data) {
        // Instancia um objeto da classe Entrada
        Entrada entradaItem = new Entrada();
        
        // Define os valores da entrada a partir da entrada do usuário
        entradaItem.setUsuario(usuario);
        entradaItem.setItem(item);
        entradaItem.setData(data);
        
        // Exibe as informações da entrada
        System.out.println("Entrada registrada com sucesso!");
        entradaItem.imprimir();
    }
}
