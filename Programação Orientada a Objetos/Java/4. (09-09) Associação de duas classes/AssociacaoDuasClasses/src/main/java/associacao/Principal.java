/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package associacao;

/**
 *
 * @author sophia
 */
public class Principal {
    public static void main(String[] args) {    
        // Instancia um objeto da classe Autor
        Autor autor1 = new Autor("Cecília Meireles", "Brasileira");

        // Instancia um objeto da classe Livro
        Livro livro1 = new Livro("Romanceiro da Inconfidência", 1953, autor1);

        livro1.descricao();
    }
}