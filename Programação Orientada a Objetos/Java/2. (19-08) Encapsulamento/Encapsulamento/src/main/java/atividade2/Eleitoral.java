/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade2;

/**
 *
 * @author sophia
 */

public class Eleitoral {
    // Definição dos atributos privados da classe
    private String nome;
    private int idade;
    
    // Métodos getters e setters
    public String getNome() {
        return this.nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public int getIdade() {
        return this.idade;
    }
    
    public void setIdade(int idade) {
        this.idade = idade;
    }
    
    // Método da classe para verificar a idade do eleitor
    public void verificar() {
        // Verifica idade do eleitor
        if(idade < 16) {
            System.out.println("Eleitor nao pode votar.");
        }
        else if(idade >= 18 && idade <= 65) {
            System.out.println("Eleitor deve votar.");
        }
        else {
            System.out.println("Voto facultativo.");
        }
    }
    
    // Método da classe para exibir atributos e verificação do eleitor
    public void imprimir() {
        System.out.println("Nome do eleitor: " + this.nome);
        System.out.println("Idade do eleitor: " + this.idade);
        verificar();
    }
}
