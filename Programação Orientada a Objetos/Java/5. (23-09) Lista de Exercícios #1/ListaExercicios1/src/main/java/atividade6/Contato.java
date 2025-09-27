/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade6;

/**
 *
 * @author sophia
 */
public class Contato {
    // Atributos da classe
    private String nome;
    private String telefone;
    private String email;
    
    // Método construtor que aceita apenas o nome e inicia os outros atributos vazios
    public Contato(String nome) {
        this.nome = nome;
        this.telefone = "";
        this.email = "";
    }
    
    // Método construtor que inicia todos os atributos
    public Contato(String nome, String telefone, String email) {
        this.nome = nome;
        this.telefone = telefone;
        this.email = email;
    }
    
    // Métodos de encapsulamento
    public String getNome() {
        return nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public String getTelefone() {
        return telefone;
    }
    
    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
    
    public String getEmail() {
        return email;    
    }
    
    public void setEmail(String email) {
        this.email = email;
    }
}