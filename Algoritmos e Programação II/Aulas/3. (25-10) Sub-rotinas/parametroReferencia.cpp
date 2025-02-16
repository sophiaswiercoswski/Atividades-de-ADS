// Exemplo de passagem por referência
#include <iostream>
using namespace std;

void trocarValores(int &a, int &b) {
    cout << "Dentro da função, antes da troca: " << endl;
	cout << "a = " << ", b = " << b << endl;
	
	int temp = a;
	a = b;
	b = temp;
	
	cout << "Dentro da função, após a troca: " << endl;
	cout << "a = " << a << ", b " << b << endl;
}

int main() {
	int num1 = 5, num2 = 10;
	
	cout << "=== Demonstração de Passagem por Referência por Referência ===" << endl;
	cout << "Valores originais:" << endl;
	cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
	
	trocarValores(num1, num2);
	
	cout << "Valores após a troca:" << endl;
	cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
	
	return 0;
}