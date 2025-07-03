#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int RONDAS = 5;

void mostrarPuertas(int correcta) {
    for (int i = 1; i <= 3; i++) {
        if (i == correcta){
            cout << "   _________\n";
            cout << " |           |\n";
            cout << "|             |\n";
            cout << "|      " << i << "    o |\n";
            cout << "|             |\n";
            cout << "|_____________|\n";
        }else{
            cout << "   _________\n";
            cout << " |           |\n";
            cout << "|             |\n";
            cout << "|      " << i << "    o |\n";
            cout << "|             |\n";
            cout << "|_____________|\n";
        }
    }
    cout << "\n";
}

int main() {
    srand(time(0));

    int patron[RONDAS];
    int eleccion;
    int vidas = 4;

    for (int i = 0; i < RONDAS; i++) {
        patron[i] = std::rand() % 3 + 1;
    }

    cout << "BIENVENIDO AL JUEGO DE LAS 3 PUERTAS\n";
    cout << "Debes elegir la puerta correcta en cada ronda para avanzar.\n";
    cout << "Tienes 4 vidas. Cruza las 5 puertas para ganar.\n";

    for (int ronda = 0; ronda < RONDAS; ronda++) {
        cout << "\nRONDA " << ronda + 1 << "\n";
        mostrarPuertas(patron[ronda]);

        cout << "Elige una puerta (1, 2 o 3): ";
        cin >> eleccion;

        if (eleccion == patron[ronda]) {
           cout << "Respuesta correcta. Has cruzado la puerta.\n";
        } else {
            vidas--;
            cout << "Puerta equivocada. " << ".\n";
            cout << "Te quedan " << vidas << " vidas.\n";

            if (vidas == 0) {
                cout << "Has perdido todas tus vidas en la ronda " << ronda + 1 << ".\n";
                return 0;
            }

            // Repetir la misma ronda si se falló
            ronda--;
        }
    }

    cout << "\nFELICIDADES. Has cruzado las 5 puertas correctamente.\n";
    return 0;
}