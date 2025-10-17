/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package data;

/**
 *
 * @author sophia
 */

public class Data {
    private int dia;
    private int mes;
    private int ano;
    
    // Métodos getters e setter
    public int getDia() {
        return dia;
    }
    
    public void setDia(int dia) {
        if(dia > 0 && dia <= 31) {
            this.dia = dia;
        }
        else {
            System.out.println("Dia inválido. Definido como 1.");
            this.dia = 1;
        }
    }
    
    public int getMes() {
        return mes;
    }
    
    public void setMes(int mes) {
        this.mes = mes;
    }
    
    public int getAno() {
        return ano;
    }
    
    public void setAno(int ano) {
        this.ano = ano;
    } 
    
    public void imprimir() {
        System.out.printf("%02d/%02d/%d\n", dia, mes, ano);
    }
}
