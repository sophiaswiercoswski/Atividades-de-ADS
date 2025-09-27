/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade2;

/**
 *
 * @author sophia
 */
public class Pessoa {
    // Atributos da classe
    private String nome;
    private double peso;
    private double altura;
    
    // Métodos de encapsulamento
    public String getNome() {
        return nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public double getPeso() {
        return peso;
    }
    
    public void setPeso(double peso) {
        this.peso = peso;
    }
    
    public double getAltura() {
        return altura;
    }
    
    public void setAltura(double altura) {
        this.altura = altura;
    }
    
    // Método para exibir os valores dos atributos da classe
    public void imprimir() {
        System.out.println("| Características da pessoa:");
        System.out.println("  Nome: " + this.nome);
        System.out.println("  Peso: " + this.peso);
        System.out.println("  Altura: " + this.altura);
    }
}