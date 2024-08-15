/*
Beecrowd: Problema 1020
14/08/2024
*/

#include <iostream>
using namespace std;

int main() {
    // Ler a idade do usuário em dias
    int idade;
    cin >> idade;

    // Exibir ano, mês e dia que a idade corresponde
    printf("%d ano(s)\n", idade / 365);
    printf("%d mes(es)\n", (idade % 365) / 30);
    printf("%d dia(s)\n", (idade % 365) % 30);

    return 0;
}