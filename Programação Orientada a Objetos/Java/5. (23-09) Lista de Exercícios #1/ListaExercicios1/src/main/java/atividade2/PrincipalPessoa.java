/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade2;

import java.util.Scanner;

/**
 *
 * @author sophia
 */
public class PrincipalPessoa {
    public static void main(String[] args) {      
        // Variável para armazenar a opção escolhida pelo usuário
        String opcao;
        
        // Inicia uma instância da classe Pessoa
        Pessoa pessoa1 = new Pessoa();
        
        // Inicia uma instância da classe Scanner para armazenar a entrada do usuário
        Scanner entrada = new Scanner(System.in);
        
        // Exibir menu para o usuário
        System.out.println("| === MENU === |");
        System.out.println("| i - Cadastrar pessoa");
        System.out.println("| ii - Exibir dados da pessoa");
        System.out.print("| Digite uma opção: ");
        
        // Captura a opção escolhida pelo usuário
        opcao = entrada.nextLine();
        
        // Cadastra uma pessoa ou exibe seus dados dependendo da opção do usuário
        switch(opcao) {
            case "i":
                System.out.print("Digite o nome: ");
                pessoa1.setNome(entrada.nextLine());
                System.out.print("Digite o peso: ");
                pessoa1.setPeso(entrada.nextDouble());
                System.out.print("Digite a altura: ");
                pessoa1.setAltura(entrada.nextDouble());
                System.out.println("Pessoa cadastrada com sucesso!");
                break;
            case "ii":
                pessoa1.imprimir();
                break;
            default:
                System.out.print("Opção inválida! Tente novamente: ");
                break;
        }
    }
}