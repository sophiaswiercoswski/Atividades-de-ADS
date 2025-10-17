/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package conta;

/**
 *
 * @author sophia
 */
public class ContaEspecial extends ContaCorrente {
    private double limite;
    
    // Método construtor
    public ContaEspecial(String agencia, String conta, String nome, double saldo) {
        super(agencia, conta, nome, saldo);
        this.limite = 1000.00;
    }

    // Get e Set do Limite
    public double getLimite() {
        return limite;
    }

    public void setLimite(double limite) {
        this.limite = limite;
    }
    
    // Método sacar sobrescrito
    @Override
    public void sacar(double valor) {
        if(valor <= saldo + limite) {
            saldo -= valor;
        }
        else {
            System.out.println("Limite insuficiente. Saque não realizado.");
        }
    }
    
    // Método imprimir sobrescrito
    @Override
    public void imprimir() {
        super.imprimir();
        double limite = (saldo >= 0) ? this.limite : this.limite + this.saldo;
        System.out.println("Limite atual: " + limite);
    }
}
