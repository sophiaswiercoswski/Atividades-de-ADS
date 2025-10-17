/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inventario;

/**
 *
 * @author Reginaldo Marcos Gonçalves Júnior e Sophia Swiercoswski
 */
public class Entrada {
    // Atributos privatos
    private Usuario usuario;
    private Item item;
    private String data;
    
    // Métodos de encapsulamento
    public Usuario getUsuario() {
        return usuario;
    }
    
    public void setUsuario(Usuario usuario) {
        this.usuario = usuario;
    }
    
    public Item getItem() {
        return item;
    }
    
    public void setItem(Item item) {
        this.item = item;
    }
    
    public String getData() {
        return data;
    }
    
    public void setData(String data) {
        this.data = data;
    }
    
    // Método para exibir as informações da entrada
    public void imprimir() {
        System.out.println("Usuário: " + this.usuario.getNome());
        System.out.println("Item: " + this.item.getModelo());
        System.out.println("Data: " + this.data);
    }
}
