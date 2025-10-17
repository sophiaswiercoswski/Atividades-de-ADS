/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade6;

/**
 *
 * @author sophia
 */
public class MidiaFisica extends Jogo {
    private double frete;
    
    // Método construtor
    public MidiaFisica(String titulo, double valor, double frete) {
        super(titulo, valor);
        this.frete = frete;
    }
    
    // Métodos de encapsulamento
    public double getFrete() {
        return frete;
    }

    public void setFrete(double frete) {
        this.frete = frete;
    }
    
    @Override
    public double getValor() {
        return valor + frete;
    }
}