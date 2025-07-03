#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int Random_Num(){
    srand(time(NULL));
    int random = rand() % 15 + 1; 
    return random;
}

void Questions3() {
    cout << "=============================================== Categoria 3. Rincon de saberes =================================================\n";
    cout << "|A. ¿Aqui no hay motores encendidos pero el espacio esta ocupado y hay ruedas por todas partes?                                |\n";
    cout << "|B. ¿En este lugar aunque el día este caliente aqui se siente diferente, es la tecnología la que da este clima todo el dia?    |\n";
    cout << "|C. ¿Este sitio tiene bandejas y platos que llenan el lugar, y el aroma de comida te hace llegar?                              |\n";
    cout << "===============================================================================================================================\n";

}

void Answer3(int random) {
    char option;
    cout << "¿Qué pista quieres que Eros te responda? Esto te acercará a su escondite: ";
    cin >> option;
    cout << "==============================================================================================================================\n";
    switch(option){
        case 'A':
        if(random == 9 || random == 11 || random == 15){
            cout << "       ________________________________________________\n";
            cout << "      | Si, este sitio está lleno de carros y motos :3 |\n";
            cout << " ,_, /_________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ____________________________________________________\n";
            cout << "      | No, este sitio no esta lleno de carros y motos ._. |\n";
            cout << " ,_, /_____________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        break;
        case 'B':
        if(random == 7 || random == 9 || random == 11 || random == 14){
            cout << "       ________________________________________________\n";
            cout << "      | Si, este lugar cuenta con un ambiente frío ^o^ |\n";
            cout << " ,_, /_________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ___________________________________\n";
            cout << "      | Este lugar tiene clima natural :] |\n";
            cout << " ,_, /____________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        break;
        case 'C':
        if(random == 1 || random == 12){
            cout << "       _____________________________________\n";
            cout << "      | Si, aqui no te moriras de hambre :> |\n";
            cout << " ,_, /______________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       _______________________________\n";
            cout << "      | Aqui no encontrarás comida :[ |\n";
            cout << " ,_, /________________________________|\n";
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
    Questions3();
    int place_num = Random_Num();
    Answer3(place_num);

    return 0;
}