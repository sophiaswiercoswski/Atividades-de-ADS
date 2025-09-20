/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade1;

import java.util.Scanner;

/**
 *
 * @author sophia
 */

public class PrincipalPessoa {
    public static void main(String[] args) {
        // Instancia um objeto da classe Pessoa
        Pessoa pessoa1 = new Pessoa();
        
        // Cria objeto para usar na entrada do usuário
        Scanner entrada = new Scanner(System.in);
        
        // Solicita dados via entrada do usuário
        System.out.println("Digite o nome da pessoa: ");
        pessoa1.setNome(entrada.nextLine());
        System.out.println("Digite o peso da pessoa: ");
        pessoa1.setPeso(entrada.nextDouble());
        System.out.println("Digite a altura da pessoa: ");
        pessoa1.setAltura(entrada.nextDouble());
        
        // Exibe as informações do objeto para o usuário
        pessoa1.imprimir();
    }
}