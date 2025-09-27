/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade3;

/**
 *
 * @author sophia
 */
public class PrincipalEstoque {
    public static void main(String[] args) {
        Estoque notebook = new Estoque("Notebook i5 8gb ram", 2.700, 7);
        
        notebook.imprimir();
        notebook.removerProdutos(2);
        notebook.removerProdutos(7);
    }
}
