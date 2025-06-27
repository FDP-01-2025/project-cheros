#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int Random_Num(){
    srand(time(NULL));
    int random = rand() % 15 + 1; 
    return random;
}

void Questions2() {
    cout << "======= Categoria 2. ¿De cuál pregunta quieres saber la respuesta? Esto te acercará al Búho =======\n";
    cout << "A. ¿Este lugar tiene un espacio para llenar de formulas y dibujos, esta siempre frente a ti en clase?\n";
    cout << "B. ¿Este lugar tiene aparatos rodeado de teclas y luz brillante, donde trabaja el estudiante?\n";
    cout << "C. ¿Este sitio tiene un lugar privado, útil y discreto, entras con urgencia y sales con transparencia?\n";
}

void Answer2(int random){
    char option;
    cin >> option;
    switch(option){
        case 'A':
        if(random == 2 || random == 5 || random == 6 || random == 8 || random == 9 || random == 11){
            cout << "Si, hay pizarrones :)\n";
        }else{
            cout << "Este lugar no tiene pizarrones :(\n";
        }
        break;
        case 'B':
        if(random == 7 || random == 9 || random == 11){
            cout << "Si, este sitio tiene computadoras\n";
        }else{
            cout << "No, no hay computadoras\n";
        }
        break;
        case 'C':
        if(random == 3 || random == 5 || random == 6 || random == 7 || random == 8 || random == 9 || random == 11){
            cout << "Claro, y cuentan hasta con papel :)\n";
        }else{
            cout << "No hay baños aqui pero puedes encontrar uno cerca en otro lugar :(\n";
        }
        break;
        default:
        cout << "ERROR, ingresa A, B o C\n";
        break;
    }
        cout << "Num: " << random << "\n";

}
int main(){
    Questions2();
    int place_num = Random_Num();
    Answer2(place_num);

    return 0;
}