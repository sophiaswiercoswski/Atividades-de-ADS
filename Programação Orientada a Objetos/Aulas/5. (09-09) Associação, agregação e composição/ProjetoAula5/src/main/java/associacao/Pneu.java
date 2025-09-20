/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package associacao;

/**
 *
 * @author sophia
 */
public class Pneu {
    private double pressao;
    private String descricao;

    public Pneu(String descricao) {
        this.descricao = descricao;
    }
    
    public double getPressao() {
        return pressao;
    }

    public void setPressao(double pressao) {
        this.pressao = pressao;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }
    
    public void rodar() {
        System.out.println("Pneu " + descricao + " rodando.");
    }
}