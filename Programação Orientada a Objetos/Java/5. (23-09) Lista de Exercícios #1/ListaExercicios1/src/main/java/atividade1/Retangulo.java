/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade1;

/**
 *
 * @author sophia
 */
public class Retangulo {
    // Atributos privados
    private double base;
    private double altura;
    
    // Métodos de encapsulamento
    public double getBase() {
        return base;
    }
    
    public void setBase(double base) {
        this.base = base;
    }
    
    public double getAltura() {
        return altura;
    }
    
    public void setAltura(double altura) {
        this.altura = altura;
    }
    
    // Método para exibir os valores dos atributos
    public void imprimir() {
        System.out.println("| Atributos da classe:");
        System.out.println("Base: " + this.base);
        System.out.println("Altura: " + this.altura);
    }
    
    // Método para calcular a área do retângulo
    public void mostrarArea() {
        System.out.println("| Área do retângulo:");
        System.out.println(this.base * this.altura);
    }
    
    // Método para calcular o perímetro do retângulo
    public void mostrarPerimetro() {
        System.out.println("| Perímetro do retângulo: ");
        System.out.println((this.base * 2) + (this.altura * 2));
    }
}
