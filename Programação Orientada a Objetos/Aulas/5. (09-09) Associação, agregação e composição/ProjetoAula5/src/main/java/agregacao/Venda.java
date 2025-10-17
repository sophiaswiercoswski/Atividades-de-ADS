/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package agregacao;

/**
 *
 * @author sophia
 */
public class Venda {
    private Comprador c;
    private Vendedor v;
    private Produto p;

    public Venda(Comprador c, Vendedor v, Produto p) {
        this.c = c;
        this.v = v;
        this.p = p;
    }

    public Comprador getC() {
        return c;
    }

    public void setC(Comprador c) {
        this.c = c;
    }

    public Vendedor getV() {
        return v;
    }

    public void setV(Vendedor v) {
        this.v = v;
    }

    public Produto getP() {
        return p;
    }

    public void setP(Produto p) {
        this.p = p;
    }
    
    public void concretizarVenda() {
        System.out.println("Venda finalizada.");
        c.comprar();
        v.vender();
        p.vendido();
    }
}
