/*
Beecrowd: Problema 1048
14/08/2024
Sophia Swiercoswski
*/

#include <iostream>
using namespace std;

int main() {
    // Ler salário do funcionário
    float salario, novo;
    cin >> salario;

    // Calcular novo salário e exibir o reajuste e percentual
    if((salario >= 0) && (salario <= 400.00)) {
        printf("Novo salario: %.2f\n", salario += salario * 0.15);
        printf("Reajuste ganho: %.0f", 0.15 * 400);
        printf("Em percentual: 15 %");
    }
    else if((salario > 400.00) && (salario <= 800.00)) {
        printf("Novo salario: %.2f", salario += salario * 0.12);
        printf("Reajuse ganho: %.0f", 0.12 * salario);
    }
    else if((salario > 800.00) && (salario <= 1200.00)) {
        salario += salario * 0.1;
        printf("Novo salario: %.2f\n", salario);  
    }
    else if((salario > 1200.00) && (salario <= 2000.00)) {
        salario += salario * 0.07
        printf("Novo salario: %.2")
    } 

    return 0;
}