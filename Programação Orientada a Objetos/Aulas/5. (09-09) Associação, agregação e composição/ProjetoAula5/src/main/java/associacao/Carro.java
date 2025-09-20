/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package associacao;

/**
 *
 * @author sophia
 */
public class Carro {
    private Pneu p1;
    private Pneu p2;
    private Pneu p3;
    private Pneu p4;

    public Pneu getP1() {
        return p1;
    }

    public void setP1(Pneu p1) {
        this.p1 = p1;
    }

    public Pneu getP2() {
        return p2;
    }

    public void setP2(Pneu p2) {
        this.p2 = p2;
    }

    public Pneu getP3() {
        return p3;
    }

    public void setP3(Pneu p3) {
        this.p3 = p3;
    }

    public Pneu getP4() {
        return p4;
    }

    public void setP4(Pneu p4) {
        this.p4 = p4;
    }

    public void ligar() {
        System.out.println("Carro ligado!");
    }
    
    public void andar() {
        System.out.println("Carro andando...");
        p1.rodar();
        p2.rodar();
        p3.rodar();
        p4.rodar();
    }
}
