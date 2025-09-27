/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade5;

/**
 *
 * @author sophia
 */
public class Balanca {
    // Atributos
    private double tara;
    private double pesoTotal;
    private double valorKg;
    
    // Métodos de encapsulamento
    public double getTara() {
        return tara;
    }
    
    public void setTara(double tara) {
        this.tara = tara;
    }
    
    public double getPeso() {
        return pesoTotal;
    }
    
    public void setPeso(double pesoTotal) {
        this.pesoTotal = pesoTotal;
    }
    
    public double getValor() {
        return valorKg;
    }
    
    public void setValor(double valorKg) {
        this.valorKg = valorKg;
    }
    
    // Método para retornar o valor por quilogramas
    public double valorQuilograma() {
        return valorKg;
    }
    
    // Método para retornar o peso (g) do alimento (descontando a tara)
    public double pesoConsumido() {
        return pesoTotal - tara;
    }
    
    // Método para calcular o valor em reais do prato
    public double valorPrato() {
        return (pesoConsumido() / 1000) * valorKg;
    }
} 