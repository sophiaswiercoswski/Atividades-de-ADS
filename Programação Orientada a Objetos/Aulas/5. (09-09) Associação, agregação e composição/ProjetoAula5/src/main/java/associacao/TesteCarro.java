/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package associacao;

/**
 *
 * @author sophia
 */
public class TesteCarro {
    public static void main(String[] args) {
        // Instanciar os Pneus
        Pneu pde = new Pneu("dianteiro esquerdo");
        Pneu pdd = new Pneu("dianteiro direito");
        Pneu pte = new Pneu("traseiro esquerdo");
        Pneu ptd = new Pneu("traseiro direito");
        
        // Instanciar um objeto do Carro
        Carro meuCarro = new Carro();
        meuCarro.setP1(pde);
        meuCarro.setP2(pdd);
        meuCarro.setP3(pte);
        meuCarro.setP4(ptd);
        
        meuCarro.ligar();
        meuCarro.andar();
    }
}