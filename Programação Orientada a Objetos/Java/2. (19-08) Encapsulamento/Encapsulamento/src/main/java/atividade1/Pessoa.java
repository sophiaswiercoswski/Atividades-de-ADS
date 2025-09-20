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

public class Pessoa {
    // Definição dos atributos
    private String nome;
    private double peso;
    private double altura;
    
    // Métodos getters e setters
    public String getNome() {
        return nome;
    }
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public double getPeso() {
        return peso;
    }
    
    public void setPeso(double peso) {
        this.peso = peso;
    }
    
    public double getAltura() {
        return altura;
    }
    
    public void setAltura(double altura) {
        this.altura = altura;
    }
    
    // Exibir atributos da pessoa
    public void imprimir() {    
        // Cria uma variável para armazenar a escolha do usuário
        int escolha;
        
        // Cria objeto para usar na entrada do usuário
        Scanner entrada = new Scanner(System.in); 
        
        // Exibe o menu para o usuário
        System.out.println("---------------------------------");
        System.out.println("Digite a opcao que deseja exibir:");
        System.out.println("1 - Nome");
        System.out.println("2 - Peso");
        System.out.println("3 - Altura");
        System.out.println("4 - Todas");
        System.out.println("---------------------------------");
        
        // Lê escolha do usuário e armazena na variável escolha
        escolha = entrada.nextInt();

        // Exibe as informações de acordo com a escolha do usuário
        switch(escolha) {
            case 1:
                System.out.println(nome);
                break;
            case 2:
                System.out.println(peso);
                break;
            case 3:
                System.out.println(altura);
                break;
            case 4:
                System.out.println("Nome: " + nome);
                System.out.println("Peso: " + peso);
                System.out.println("Altura: " + altura);
                break;
            default:
                System.out.println("Opcao invalida. Encerrando programa...");
        }
    }
}