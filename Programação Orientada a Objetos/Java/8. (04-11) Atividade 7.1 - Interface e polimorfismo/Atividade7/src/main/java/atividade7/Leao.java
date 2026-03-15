/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade7;

/**
 *
 * @author sophia
 */
public class Leao implements AnimalInterface {
    // Atributos
    private String nome;
    private int idade;
    private String som;
    
    // Método construtor
    public Leao(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }
    
    // Método da interface
    public String getNome() {
        return this.nome;
    }
    
    public int getIdade() {
        return this.idade;
    }
    
    public String emitirSom() {
        return "Grrr";
    }
}