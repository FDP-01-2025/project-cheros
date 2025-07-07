#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Show_door() {
    srand(time(0));

    const int rounds = 5;
    int desing[rounds];
    int choice;
    int lives = 4;

    for (int i = 0; i < rounds; i++) {
        desing[i] = rand() % 3 + 1;
    }

    cout << "Bienvenido al desafio 2 - LAS PUERTAS DEL SABER\n";
    cout << "Debes elegir la puerta correcta en cada ronda para avanzar.\n";
    cout << "Tienes 4 vidas. Cruza las 5 puertas para ganar y obtener una pista.\n";

    for (int round = 0; round < rounds; round++) {
        cout << "\nRonda " << round + 1 << "\n";

        for (int i = 1; i <= 3; i++) {
            cout << "   _________\n";
            cout << " |           |\n";
            cout << "|             |\n";
            cout << "|      " << i << "    o |\n";
            cout << "|             |\n";
            cout << "|_____________|\n";
        }

        cout << "\nElige una puerta (1, 2 o 3): ";
        cin >> choice;

        if (choice == desing[round]) {
            cout << "Respuesta correcta. Has cruzado la puerta.\n";
        } else {
            lives--;
            cout << "Puerta equivocada.\n";
            cout << "Te quedan " << lives << " vidas.\n";

            if (lives == 0) {
                cout << "Has perdido todas tus vidas en la ronda " << round + 1 << ".\n";
                return;
            }

            round--;
        }
    }

    cout << "\nFelicidades. Has cruzado las 5 puertas correctamente y conocerás una nueva pista.\n";
}

int main() {
    Show_door();
    return 0;
}