/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package conta;

/**
 *
 * @author sophia
 */
public class TesteConta {
    public static void main(String[] args) {
        // Instanciar um objeto da ContaCorrente
        ContaEspecial conta = new ContaEspecial("03", "2879", "Fulaninho", 1500);
        
        System.out.println("Informações iniciais da conta: ");
        conta.imprimir();
        System.out.println("");
        
        // Efetuar um saque
        System.out.println("Tentativa de saque de R$ 1.800,00");
        conta.sacar(1800);
        System.out.println("");
        
        // Imprimir as informações da conta
        System.out.println("Informações atuais da conta: ");
        conta.imprimir();
    }
}
