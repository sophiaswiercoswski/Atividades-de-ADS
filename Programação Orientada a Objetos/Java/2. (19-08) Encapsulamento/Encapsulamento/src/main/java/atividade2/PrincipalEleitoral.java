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

public class PrincipalEleitoral {
    public static void main(String[] args) {
        // Instancia um objeto da classe Eleitoral
        Eleitoral eleitor = new Eleitoral();
        
        // Instancia um objeto da classe Scanner para ler a entrada do usuário
        Scanner entrada = new Scanner(System.in);
        
        // Define o valor dos atributos do objeto eleitor
        System.out.println("Digite o nome do eleitor: ");
        eleitor.setNome(entrada.nextLine());
        
        System.out.println("Digite a idade do eleitor: ");
        eleitor.setIdade(entrada.nextInt());
        
        // Usa o método imprimir da classe para exibir informações do objeto
        eleitor.imprimir();
    }
}
