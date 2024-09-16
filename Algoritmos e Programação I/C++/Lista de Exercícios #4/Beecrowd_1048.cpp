#include <iostream>
using namespace std;

 // Criar função para calcular o novo salário
void novoSalario(float salario, float percentual) {
    float novo = salario + salario * (percentual / 100);
    printf("Novo salario: %.2f\n", novo);
    printf("Reajuste ganho: %.2f\n", (percentual / 100) * salario);
    cout << "Em percentual: " << percentual << " %" << endl;
}

int main() {
    // Ler número do usuário e determinar seu novo salário
    float salario;
    cin >> salario;

    if((salario > 0) && (salario <= 400.00)) {
        novoSalario(salario, 15);
    }
    else if((salario > 400.00) && (salario <= 800.00)) {
        novoSalario(salario, 12);
    }
    else if((salario > 800.00) && (salario <= 1200.00)) {
        novoSalario(salario, 10);
    }
    else if((salario > 1200.00) && (salario <= 2000.00)) {
        novoSalario(salario, 7);
    }
    else {
        novoSalario(salario, 4);
    }

    return 0;
}