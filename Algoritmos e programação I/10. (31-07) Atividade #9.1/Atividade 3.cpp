#include <iostream>

using namespace std;

int main(){
    // Ler um número inteiro
    int n;
    printf("Digite um numero inteiro: ");
    cin >> n;

    // Determinar se o número é positivo ou negativo
    if(n < 0){
        printf("%i e um numero negativo", n);
    }
    else if(n > 0){
        printf("%i e um numero positivo", n);
    }
    else{
        printf("%i e um numero neutro", n);
    }

    return 0;
}