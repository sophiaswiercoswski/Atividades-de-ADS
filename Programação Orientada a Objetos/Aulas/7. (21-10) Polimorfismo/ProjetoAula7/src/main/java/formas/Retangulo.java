/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package formas;

/**
 *
 * @author sophia
 */
public class Retangulo implements Forma {
    // Atributos
    private double base;
    private double altura;
    
    // Métodos
    public Retangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }
    
    // Métodos da interface
    public double getArea() {
        return base * altura;
    }
    
    public double getPerimetro() {
        return 2 * (base + altura);
    }
}