/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade4;

/**
 *
 * @author sophia
 */
public class TesteData {
    public static void main(String[] args) {
        Data a = new Data(23, 03, 2016);
        Data b = new Data(23, "Março", 2016);
        Data c = new Data(82, 2016);
        
        a.imprimir();
        System.out.println("===");
        b.imprimir();
        System.out.println("===");
        c.imprimir();
        System.out.println("===");
    }
}
