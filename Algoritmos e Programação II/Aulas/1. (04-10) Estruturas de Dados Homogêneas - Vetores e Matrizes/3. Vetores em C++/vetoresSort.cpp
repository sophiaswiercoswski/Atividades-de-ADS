#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int numeros[5] = {3, 5, 1, 4, 2};
    sort(numeros, numeros + 5);
    
    for (int i = 0; i < 5; i++) { 
		cout << numeros[i] << " ";
	}

	return 0;
}