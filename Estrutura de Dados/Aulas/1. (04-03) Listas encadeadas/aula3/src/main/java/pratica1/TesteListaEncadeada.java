/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pratica1;

import java.util.LinkedList;
import java.util.Scanner;

/**
 *
 * @author sophia
 */
public class TesteListaEncadeada {
    public static void main(String[] args) {
        // INstanciar um objeto de LinkedList
        LinkedList<String> listaNomes = new LinkedList();
        Scanner entrada = new Scanner(System.in);
        
        // Variável para armazenar o nome
        String nome;
        
        while(true) {
            mostrarMenu();
            int opcao = entrada.nextInt();
            entrada.nextLine();
            
            if(opcao == 0) { // Se o usuário quiser encerrar
                break;
            }
            
            switch(opcao) {
                case 1:
                    System.out.println("Digite o nome a ser inserido na lista: ");
                    nome = entrada.nextLine();
                    
                    // Inserir o nome na lista
                    listaNomes.add(nome);
                    
                    break;
                case 2:
                    System.out.println("Digite o nome que deseja buscar: ");
                    nome = entrada.nextLine(); // Limpar o buffer
                    
                    // Buscar o nome na lista
                    if(listaNomes.indexOf(nome) == -1) {
                        System.out.println("Nome não encontrado.");
                    }
                    else {
                        System.out.println("Nome encontrado no índice: " + listaNomes.indexOf(nome));
                    }
                    
                    break;
                case 3:
                    System.out.println("Digite o nome que deseja remover: ");
                    nome = entrada.nextLine();
                    
                   if(listaNomes.indexOf(nome) == -1) {
                       System.out.println("Nome não encontrado.");
                   }
                   else {
                       listaNomes.remove(nome);
                       System.out.println("Nome removido: " + nome);
                   }
                   
                   break;
                case 4:
                    for(String item : listaNomes) {
                        System.out.println(item);
                    }
                    
                    break;
                default:
                    System.out.println("Opção inválida. Digite novamente.");
                    
                    break;
            }
        }
    }
    
    public static void mostrarMenu() {
        System.out.println("---------- MENU ----------");
        System.out.println("1 - Para inserir um nome na lista.");
        System.out.println("2 - Para buscar um nome na lista.");
        System.out.println("3 - Para remover um nome na lista.");
        System.out.println("4 - Para exibir o estado atual da lsta.");
        System.out.println("0 - Para sair");
        System.out.println("Digite sua opção: ");
    }
}
