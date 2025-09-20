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
public class TesteRetangulo {
    public static void main(String[] args) {
        // Instancia um objeto da classe Retangulo
        Retangulo retangulo1 = new Retangulo();

        // Cria o objeto para ler a entrada do usuario
        Scanner entrada = new Scanner(System.in);
        
        // Executa o método para exibir os atributos do retângulo
        retangulo1.imprimir();
        
        // Solicita ao usuário valores para atribuir ao retângulo
        System.out.println("Digite o valor da base do retângulo:");
        retangulo1.setBase(entrada.nextDouble());
        System.out.println("Digite o valor da altura do retângulo:");
        retangulo1.setAltura(entrada.nextDouble());
        
        // Executa todos os métodos do objeto com os valores definidos pelo usuário
        retangulo1.imprimir();
        retangulo1.mostrarArea();
        retangulo1.mostrarPerimetro();
    }
}
