/*
Beecrowd: Problema 1020
14/08/2024
*/

#include <iostream>
using namespace std;

int main() {
    // Ler a idade do usuário em dias
    int idade, resto;
    cin >> idade;

    // Exibir ano, mês e dia que a idade corresponde
    printf("%d ano(s)\n", idade / 365);
    resto = idade % 365;
    printf("%d mes(es)\n", resto / 30);
    resto = idade % 30;
    printf("%d dia(s)\n", resto / 2);

    return 0;
}