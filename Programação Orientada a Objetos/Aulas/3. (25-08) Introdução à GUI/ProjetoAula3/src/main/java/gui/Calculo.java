/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package gui;

/**
 *
 * @author grego
 */
public class Calculo {
    // Atributos
    private double numero1;
    private double numero2;
    
    // Métodos de encapsulamento
    public double getNumero1() {
        return numero1;
    }

    public void setNumero1(double numero1) {
        this.numero1 = numero1;
    }

    public double getNumero2() {
        return numero2;
    }

    public void setNumero2(double numero2) {
        this.numero2 = numero2;
    }
    
    // Método para retornar a soma dos números
    public double getSoma() {
        return numero1 + numero2;
    }
}
