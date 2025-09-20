/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package associacao;

/**
 *
 * @author sophia
 */
public class Livro {
    private String titulo;
    private int anoPublicacao;
    private Autor autor;
    
    // Método construtor para instanciar objetos da classe
    public Livro(String titulo, int anoPublicacao, Autor autor) {
        this.titulo = titulo;
        this.anoPublicacao = anoPublicacao;
        this.autor = autor;
    }
    
    // Métodos getters e setters para encapsulamento
    public String getTitulo() {
        return titulo;
    }
    
    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }
    
    public int getAnoPublicacao() {
        return anoPublicacao;
    }
    
    public void setAnoPublicacao(int anoPublicacao) {
        this.anoPublicacao = anoPublicacao;
    }
    
    public Autor getAutor() {
        return autor;
    }
    
    public void setAutor(Autor autor) {
        this.autor = autor;
    }
    
    // Método para retornar uma descrição completa do livro
    public void descricao() {
        System.out.println("Livro:" + this.titulo);
        System.out.println("Ano de publicação: " + this.anoPublicacao);
        System.out.println("Autor: " + this.autor.getNome());
    }
}