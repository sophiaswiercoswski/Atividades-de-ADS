/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package data;

/**
 *
 * @author sophia
 */

public class TesteData {
    public static void main(String[] args) {
        // Instanciar um objeto da classe Data
        Data minhaData = new Data();
        
        // Definir o dia, mês e ano
        minhaData.setDia(19);
        minhaData.setMes(8);
        minhaData.setAno(19);
        
        // Mostrar a data
        minhaData.imprimir();
    }
}
