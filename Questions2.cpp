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
    cout << "=============================================== Categoria 2. Rincon de saberes ================================================\n";
    cout << "| A. Este lugar tiene un espacio para llenar de formulas y dibujos, esta siempre frente a ti en clase                         |\n";
    cout << "| B. Este lugar tiene aparatos rodeado de teclas y luz brillante, donde trabaja el estudiante                                 |\n";
    cout << "| C. Este sitio tiene un lugar privado, útil y discreto, entras con urgencia y sales con transparencia                        |\n";
    cout << "===============================================================================================================================\n";

}

void Answer2(int random){
    char option;
    cout << "¿Qué pista quieres que Eros te responda? Esto te acercará a su escondite: ";
    cin >> option;
    cout << "==============================================================================================================================\n";
    switch(option){
        case 'A':
        if(random == 2 || random == 5 || random == 6 || random == 8 || random == 9 || random == 11){
            cout << "       _______________________\n";
            cout << "      | Si, hay pizarrones :) |\n";
            cout << " ,_, /________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ___________________________________\n";
            cout << "      | Este lugar no tiene pizarrones :( |\n";
            cout << " ,_, /____________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        break;
        case 'B':
        if(random == 7 || random == 9 || random == 11){
            cout << "       ___________________________________\n";
            cout << "      | Si, este sitio tiene computadoras |\n";
            cout << " ,_, /____________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       _________________________\n";
            cout << "      | No, no hay computadoras |\n";
            cout << " ,_, /__________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        break;
        case 'C':
        if(random == 3 || random == 5 || random == 6 || random == 7 || random == 8 || random == 9 || random == 11){
            cout << "       _____________________________________\n";
            cout << "      | Claro, y cuentan hasta con papel :) |\n";
            cout << " ,_, /______________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ____________________________________________________________________\n";
            cout << "      | No hay baños aqui pero puedes encontrar uno cerca en otro lugar :( |\n";
            cout << " ,_, /_____________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        break;
        default:
        cout << "       _________________________\n";
        cout << "      | ERROR, ingresa A, B o C |\n";
        cout << " ,_, /__________________________|\n";
        cout << "(0,0)\n";
        cout << "{'''}\n";
        cout << "-*-*--\n";
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