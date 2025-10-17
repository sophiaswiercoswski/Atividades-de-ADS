/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade6;

/**
 *
 * @author sophia
 */
public class Jogo {
    protected String titulo;
    protected double valor;
    
    // Método construtor
    public Jogo(String titulo, double valor) {
        this.titulo = titulo;
        this.valor = valor;
    }
    
    // Métodos de encapsulamento
    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
}