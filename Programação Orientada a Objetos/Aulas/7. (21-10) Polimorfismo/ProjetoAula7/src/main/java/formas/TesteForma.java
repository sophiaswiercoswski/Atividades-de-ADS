/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package formas;

import java.util.ArrayList;

/**
 *
 * @author sophia
 */
public class TesteForma {
    public static void main(String[] args) {
        // Lista com várias formas e mostrar a área e perímetro de cada um
        ArrayList<Forma> listaFormas = new ArrayList();
                
        // Adicionar 4 formas à lista de formas
        listaFormas.add(new Quadrado(2));
        listaFormas.add(new Quadrado(10));
        listaFormas.add(new Retangulo(2, 3));
        listaFormas.add(new Retangulo(4.1, 3.18));
        
        // Mostrar as áreas e perímetros de cada forma da lista
        for(Forma minhaForma : listaFormas) {
            System.out.println("Área: " + minhaForma.getArea());
            System.out.println("Perímetro: " + minhaForma.getPerimetro());
            System.out.println();
        }
    }
}