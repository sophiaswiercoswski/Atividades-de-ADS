#include <iostream>
using namespace std;

int main() {
    // Ler do usuário um número, suas horas de trabalho no mês e a quantia que recebeu por hora
    int n, horas;
    float quantia;
    cin >> n >> horas >> quantia;
    
    // Exibir número do empregador e seu salario
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", horas * quantia);

    return 0;
}