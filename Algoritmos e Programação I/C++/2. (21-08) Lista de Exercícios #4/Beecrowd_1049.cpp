#include <iostream>
using namespace std;

int main() {
    // Ler 3 palavras do usuário
    string A, B, C;
    cin >> A >> B >> C;

    /*
    Definir o animal, sendo que:
    A : vertebrado
        B : ave
            C : carnivoro = aguia | onivoro = pomba
        B : mamífero
            c : onivoro = homem | herbivoro = vaca

    A : invertebrado
        B : inseto
            C : hematofago = pulga | herbivoro = lagarta
        B : anelideo
            C : hematofogo = sanguessuga | herbivoro = minhoca
    */

    if(A == "vertebrado") {
        if(B == "ave") {
            if(C == "carnivoro") {
                printf("aguia\n");
            }
            else if(C == "onivoro") {
                printf("pomba\n");
            }
        }
        else if(B == "mamifero") {
            if(C == "onivoro") {
                printf("homem\n");
            }
            else if(C == "herbivoro") {
                printf("vaca\n");
            }
        }
    }
    else if(A == "invertebrado") {
        if(B == "inseto") {
            if(C == "hematofago") {
                printf("pulga\n");
            }
            else if(C == "herbivoro") {
                printf("lagarta\n");
            }
        }
        else if(B == "anelideo") {
            if(C == "hematofago") {
                printf("sanguessuga\n");
            }
            else if(C == "onivoro") {
                printf("minhoca\n");
            }
        }
    }
    
    return 0;
}