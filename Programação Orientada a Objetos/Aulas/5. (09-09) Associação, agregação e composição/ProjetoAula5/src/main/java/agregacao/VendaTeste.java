/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package agregacao;

/**
 *
 * @author sophia
 */
public class VendaTeste {
    public static void main(String[] args) {
        Comprador objComprador = new Comprador("Joaninha", 53.00);
        Vendedor objVendedor = new Vendedor("Nelson", 2);
        Produto objProduto = new Produto("Caneta", 2.00);
        
        // Concretizar uma venda
        Venda minhaVenda = new Venda(objComprador, objVendedor, objProduto);
        minhaVenda.concretizarVenda();
        
        // Alterar o nome do Vendedor
    }
}
