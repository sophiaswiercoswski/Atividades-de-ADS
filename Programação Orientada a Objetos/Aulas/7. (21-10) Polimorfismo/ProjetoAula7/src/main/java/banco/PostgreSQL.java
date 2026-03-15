/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package banco;

/**
 *
 * @author sophia
 */
public class PostgreSQL implements BancoDeDados {
    public void conectar() {
        System.out.println("Conexão realizada no PostgreSQL.");
    }
    
    public void inserir() {
        System.out.println("Registro cadastrado no PostgreSQL.");
    }
    
    public void alterar() {
        System.out.println("Registro editado no PostgreSQL.");
    }
}
