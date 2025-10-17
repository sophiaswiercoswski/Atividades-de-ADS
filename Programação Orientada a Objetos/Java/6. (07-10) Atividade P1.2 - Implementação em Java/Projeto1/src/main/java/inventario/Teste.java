/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package inventario;

import java.util.Scanner;

/**
 *
 * @author Reginaldo Marcos Gonçalves Júnior e Sophia Swiercoswski
 */
public class Teste {
    public static void main(String[] args) {
        // Cria uma variável para armazenar a opção do usuário no menu e a quantidade da entrada
        int opcao;
        int quantidade;

        // Instancia um objeto da classe Usuario
        Usuario usuario = new Usuario();
        
        // Instancia um objeto da classe Categoria
        Categoria categoria = new Categoria();
        
        // Instancia um objeto da classe Item
        Item item = new Item();
        
        // Instancia um objeto da classe Entrada
        Entrada entradaItem = new Entrada();
        
        // Instancia um objeto da classe Scanner
        Scanner entrada = new Scanner(System.in);
        
        // Exibe o menu para o usuário até que ele decida encerrar o programa
        do {
            System.out.println("╔═══════════════════════════════════════╗");
            System.out.println("║               MENU               ║");
            System.out.println("╠═══════════════════════════════════════╣");
            System.out.println("║ 1 - Criar usuário                ║");
            System.out.println("║ 2 - Criar categoria              ║");
            System.out.println("║ 3 - Criar item                   ║");
            System.out.println("║ 4 - Dar entrada no item          ║");
            System.out.println("║ 5 - Exibir cadastro              ║");
            System.out.println("║ 0 - Encerrar programa            ║");
            System.out.println("╚═══════════════════════════════════════╝");
            
            // Lê a opção do usuário e armazena na variável de opção
            System.out.print("> ");
            opcao = entrada.nextInt();
            entrada.nextLine();
            
            switch(opcao) {
                case 1: // Cria um usuário
                    System.out.print("> Nome do usuário: ");
                    usuario.setNome(entrada.nextLine());
                    System.out.print("> Setor do usuário: ");
                    usuario.setSetor(entrada.nextLine());
                  
                    break;
                case 2: // Cria uma categoria
                    System.out.print("> Nome da categoria: ");
                    categoria.setNome(entrada.nextLine());
                    
                    break;
                case 3: // Cria um item
                    System.out.print("> Modelo do item: ");
                    item.setModelo(entrada.nextLine());
                    item.setCategoria(categoria);
                    System.out.print("> Quantidade do item: ");
                    item.setQuantidade(entrada.nextInt());
                    
                    break;
                case 4: // Cria uma entrada
                    entradaItem.setUsuario(usuario);
                    entradaItem.setItem(item);
                    System.out.print("> Data da entrada: ");
                    entradaItem.setData(entrada.nextLine());
                    break;
                case 5: // Exibe informações cadastradas
                    System.out.println("==> Usuário:");
                    usuario.imprimir();
                    
                    System.out.println("==> Categoria:");
                    categoria.imprimir();
                    
                    System.out.println("==> Item:");
                    item.imprimir();
                    
                    System.out.println("==> Entrada:");
                    entradaItem.imprimir();
                case 0: // Saí do programa
                    System.out.println("Encerrando programa...");
                    break;
                default:
                    System.out.println("Opção inválida! Tente novamente: ");
            }
        } while (opcao != 0);  
    }
}