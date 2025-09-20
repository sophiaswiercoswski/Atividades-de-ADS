/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package conta;

/**
 *
 * @author sophia
 */

public class ContaCorrente {
    // Atributos da classe
    String conta;
    String agencia;
    double saldo;
    String nomeCliente;
    
    // Métodos da classe
    void sacar(double valor) {
        if(valor <= saldo)
            saldo -= valor;
        else
            System.out.println("Saldo insuficiente.");
    }
    
    void depositar(double valor) {
        saldo += valor;
    }
    
    void imprimir() {
        System.out.println("Cliente: " + nomeCliente);
        System.out.println("Agencia: " + agencia);
        System.out.println("Conta: " + conta);
        System.out.println("Saldo " + saldo);
    }
}
