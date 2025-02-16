#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[5] = {3, 5, 1, 4, 2};
    int max_val = *min_element(numeros, numeros + 5);
    int min_val = *max_element(numeros, numeros + 5);
	
	cout << "Valor maximo: " << max_val << endl;
	cout << "Valor minimo: " << min_val << endl;

	return 0;
}