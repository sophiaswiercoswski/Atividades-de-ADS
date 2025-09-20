/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package modificadores.pacote1;

/**
 *
 * @author sophia
 */

public class TesteModificadores {
    public static void main(String[] args) {
        // Instanciar um objeto da classe Modificadores
        Modificadores objMod = new Modificadores();
        
        // Exibir os valores dos atributos
        System.out.println("Sem modificador: " + objMod.semModificador);
        //System.out.println("Privado: " + objMod.privado);
        System.out.println("Protegido: " + objMod.protegido);
        System.out.println("Publico: " + objMod.publico);
    }   
}
