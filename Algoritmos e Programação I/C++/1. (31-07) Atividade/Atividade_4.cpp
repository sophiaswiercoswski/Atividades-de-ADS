#include <iostream>

using namespace std;

int main(){
    // Ler peso e altura
    float altura, peso, imc;
    printf("Digite sua altura (em metros): ");
    cin >> altura;
    printf("Digite seu peso: ");
    cin >> peso;

    // Calcular IMC
    imc = peso / (altura * altura);

    // Exibir situação do IMC
    if(imc < 18.5){
        printf("IMC (%.1f) = Abaixo do peso ideal", imc);
    }
    else if(imc >= 18.5 && imc <= 24.9){
        printf("IMC (%.1f) = Peso ideal", imc);
    }
    else if(imc >= 25 && imc <= 29.9){
        printf("IMC (%.1f) = Sobrepeso", imc);
    }
    else{
        printf("IMC (%.1f) = Obesidade", imc);
    }

    return 0;
}