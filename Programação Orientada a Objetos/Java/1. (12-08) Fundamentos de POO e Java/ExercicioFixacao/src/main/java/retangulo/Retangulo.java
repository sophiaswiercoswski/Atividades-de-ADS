/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package retangulo;

/**
 *
 * @author sophia
 */

public class Retangulo {
    // Atributos da classe
    double altura;  
    double base;

    // Métodos da classe
    void imprimir(String texto) {
        System.out.println(texto);
        System.out.println("Altura: " + this.altura);
        System.out.println("Base: " + this.base);
    }

    void mostrarArea() {
        System.out.println("Area do retangulo: " + this.altura * this.base);
    }

    void mostrarPerimetro() {
        System.out.println("Perimetro do retangulo: " + 2 * (this.altura + this.base));
    }
}