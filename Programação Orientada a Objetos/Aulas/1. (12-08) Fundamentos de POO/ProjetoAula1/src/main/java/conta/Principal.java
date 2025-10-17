/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package conta;

import java.util.Scanner;

/**
 *
 * @author sophia
 */

public class Principal {
    public static void main(String[] args) {
        // Instanciar um objeto da ContaCorrente
        ContaCorrente minhaConta = new ContaCorrente();

        // Instanciar um objeto de Scanner
        Scanner entrada = new Scanner(System.in);

        // Ler do usuário os valores dos atributos do objeto da conta
        System.out.println("Digite o nome do cliente: ");
        minhaConta.nomeCliente = entrada.nextLine();

        System.out.println("Digite a agência: ");
        minhaConta.agencia = entrada.nextLine();

        System.out.println("Digite a conta: ");
        minhaConta.conta = entrada.nextLine();

        System.out.println("Digite o saldo inicial: ");
        minhaConta.saldo = entrada.nextDouble();

        // Exibir as informações inicias da conta
        minhaConta.imprimir();

        // Tentar efetuar um saque de 500
        minhaConta.sacar(500);

        // Efetuar um depósito de 1000
        minhaConta.depositar(1000);

        // Mostrar as informações atualizadas da conta
        minhaConta.imprimir();
    }
}
