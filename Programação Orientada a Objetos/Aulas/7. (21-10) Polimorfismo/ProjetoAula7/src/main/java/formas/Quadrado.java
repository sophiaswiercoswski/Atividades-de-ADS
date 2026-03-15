/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package formas;

/**
 *
 * @author sophia
 */
public class Quadrado implements Forma {
    // Atributos
    private double lado;
    
    // Métodos
    public Quadrado(double lado) {
        this.lado = lado;
    }
    
    // Métodos da interface
    public double getArea() {
        return lado * lado;
    }
    
    public double getPerimetro() {
        return lado * 4;
    }
}