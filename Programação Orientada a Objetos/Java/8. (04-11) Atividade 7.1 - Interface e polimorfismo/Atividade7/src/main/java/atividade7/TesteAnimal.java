/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade7;

import java.util.ArrayList;

/**
 *
 * @author sophia
 */
public class TesteAnimal {
    public static void main(String[] args) {
        // Lista com instâncias de animais
        ArrayList<AnimalInterface> listaAnimais = new ArrayList();
        
        // Adiciona animias na lista
        listaAnimais.add(new Leao("Zé", 7));
        listaAnimais.add(new Elefante("Pedrinho", 2));
        listaAnimais.add(new Macaco("Dom", 3));
        
        // Percorrer o array para exibir nome, idade e som de cada um
        for(AnimalInterface animal : listaAnimais) {
            System.out.println("Nome: " + animal.getNome());
            System.out.println("Idade: " + animal.getIdade());
            System.out.println("Som: " + animal.emitirSom());
            System.out.println("");
        }
    }
}
