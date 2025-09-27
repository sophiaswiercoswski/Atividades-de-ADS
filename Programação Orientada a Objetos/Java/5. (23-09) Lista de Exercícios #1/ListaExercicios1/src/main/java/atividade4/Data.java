/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package atividade4;

/**
 *
 * @author sophia
 */
public class Data {
    // Atributos da classe
    private int dia;
    private int mes;
    private int ano;
    
    // Métodosde encapsulamento
    public int getDia()  {
        return dia;
    }
    
    public void setDia(int dia) {
        if(dia > 0 && dia <= 30) {
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
        if(mes > 0 && mes <= 12) {
            this.mes = mes;
        }
        else {
            System.out.println("Mês inválido. Definido como janeiro.");
            this.mes = 1;
        }
    }
    
    public int getAno() {
        return ano;
    }
    
    public void setAno(int ano) {
        this.ano = ano;
    }
    
    // Método construtor que recebe três parâmetros inteiros
    public Data(int dia, int mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }
    
    // Método construtor que recebe o mês como String
    public Data(int dia, String mes, int ano) {
        this.dia = dia;
        // Como o mês é recebido como extenso, é preciso fazer conversão para inteiro
        switch(mes) {
            case "Janeiro":
                this.mes = 1;
                break;
            case "Fevereiro":
                this.mes = 2;
                break;
            case "Março":
                this.mes = 3;
                break;
            case "Abril":
                this.mes = 4;
                break;
            case "Maio":
                this.mes = 5;
                break;
            case "Junho":
                this.mes = 6;
                break;
            case "Julho":
                this.mes = 7;
                break;
            case "Agosto":
                this.mes = 8;
                break;
            case "Setembro":
                this.mes = 9;
                break;
            case "Outubro":
                this.mes = 10;
                break;
            case "Novembro":
                this.mes = 11;
                break;
            case "Dezembro":
                this.mes = 12;
                break;
        }
    }
    
    // Método construtor que obtém o mês a partir da quantidade de dias
    public Data(int dias, int ano) {
        this.ano = ano;
        this.mes = 1;
        
        while(dias > 30) {
            dias -= 30;
            this.mes++;
        }
        
        this.dia = dias;
    }
    
    // Método para exibir os valores dos atributos
    public void imprimir() {
        // Imprime DD/MM/AAAA
        System.out.printf("%02d/%02d/%04d\n", this.dia, this.mes, this.ano);
        
        // Imprime DD/Mês/AAAA
        switch(mes) {
            case 1:
                System.out.printf("%02d de Janeiro de %04d\n", this.dia, this.ano);
                break;
            case 2:
                System.out.printf("%02d de Fevereiro de %04d\n", this.dia, this.ano);
                break;
            case 3:
                System.out.printf("%02d de Março de %04d\n", this.dia, this.ano);
                break;
            case 4:
                System.out.printf("%02d de Abril de %04d\n", this.dia, this.ano);
                break;
            case 5:
                System.out.printf("%02d de Maio de %04d\n", this.dia, this.ano);
                break;
            case 6:
                System.out.printf("%02d de Junho de %04d\n", this.dia, this.ano);
                break;
            case 7:
                System.out.printf("%02d de Julho de %04d\n", this.dia, this.ano);
                break;
            case 8:
                System.out.printf("%02d de Agosto de %04d\n", this.dia, this.ano);
                break;
            case 9:
                System.out.printf("%02d de Setembro de %04d\n", this.dia, this.ano);
                break;
            case 10:
                System.out.printf("%02d de Outubro de %04d\n", this.dia, this.ano);
                break;
            case 11:
                System.out.printf("%02d de Novembro de %04d\n", this.dia, this.ano);
                break;
            case 12:
                System.out.printf("%02d de Dezembro de %04d\n", this.dia, this.ano);
                break;
        }
        
        // Imprime DDD AAAA
        int dias = this.dia + ((this.mes - 1) * 30);
        System.out.printf("%03d %04d\n", dias, this.ano);
    } 
}
