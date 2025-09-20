/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package cliente;

/**
 *
 * @author sophia
 */
public class ClienteTeste {
    public static void main(String[] args) {
        // Instancia um objeto de Cliente
        Cliente meuCliente = new Cliente("João da Silva", "000.111.222-33", "(00) 9911-2233");
        
        // Exibir as informações do cliente
        meuCliente.imprimir();
        
        // Modificar o telefone do cliente
        meuCliente.setTelefone("(00) 9911-2233");
        
        // Exibir novamente as informações do cliente
        meuCliente.imprimir();
    }
}
