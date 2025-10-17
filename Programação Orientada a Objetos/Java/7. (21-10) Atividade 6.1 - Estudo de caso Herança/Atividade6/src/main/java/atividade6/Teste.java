/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade6;

/**
 *
 * @author sophia
 */
public class Teste {
    public static void main(String[] args) {
        // Instancia dois objetos da super classe Jogo
        Jogo jogo1 = new Jogo("Tomb Raider", 62.49);
        Jogo jogo2 = new Jogo("Yakuza 0", 89.50);
        
        // Instancia um objeto da sub classe MidiaFisica
        Jogo jogo3 = new MidiaFisica("Silent Hill", 499.00, 65.90);
        
        // Instancia um objeto da classe Compra
        Compra compra = new Compra(1, "Cartão");
        
        // Adiciona os jogos intanciados na classe Compra
        compra.addItem(jogo1);
        compra.addItem(jogo2);
        compra.addItem(jogo3);
        
        // Exibe o carrinho de compras
        compra.mostrarCarrinho();
    }
}