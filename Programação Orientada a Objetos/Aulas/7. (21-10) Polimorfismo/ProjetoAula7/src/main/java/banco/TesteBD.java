/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package banco;

/**
 *
 * @author sophia
 */
public class TesteBD {
    public static void main(String[] args) {
        // Instanciando um objeto do banco de dados
        BancoDeDados meuBD = new MySQL();
        
        meuBD.conectar();
        meuBD.inserir();
        meuBD.alterar();
    }
}