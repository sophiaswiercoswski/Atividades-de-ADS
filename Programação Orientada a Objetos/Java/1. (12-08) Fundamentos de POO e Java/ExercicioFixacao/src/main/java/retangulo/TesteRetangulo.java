/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package retangulo;

import java.util.Scanner;

/**
 *
 * @author sophia
 */

public class TesteRetangulo {
    public static void main(String[] args) {
	// Inicia uma instância da classe Retangulo
        Retangulo retangulo = new Retangulo();
	
	// Inicia uma instância da classe entrada para que o usuário possa digitar valores
        Scanner entrada = new Scanner(System.in);
        
        // Exibe o valor inicial da área e da base do retângulo
	retangulo.imprimir("Os valores atuais do retangulos são: ");

	// Captura a entrada double do usuário e armazena no atributo do objeto retangulo
	System.out.println("Digite a altura do retangulo: ");
	retangulo.altura = entrada.nextDouble();
	System.out.println("Digite a base do retangulo: ");
	retangulo.base = entrada.nextDouble();

	// Exibe o valor da área e retângulo do objeto definidos pelo usuário
	retangulo.imprimir("Os valores do retangulo foram mudados para: ");
        
        // Calcula a área e perímetro do retângulo e exibe o resultado para o usuário
        System.out.println("Calculo da area e perimetro do retangulo: ");
        
	retangulo.mostrarArea();
	retangulo.mostrarPerimetro();
    }
}