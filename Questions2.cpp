#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int goal = 20;

int rollDice() {
    return rand() % 6 + 1;
}

void showBoard(int playerPos, int cpuPos) {
    cout << "\nTablero:\n";
    for (int i = 1; i <= goal; i++) {
        if (i == playerPos && i == cpuPos)
            cout << "[J&C]";
        else if (i == playerPos)
            cout << "[ J ]";
        else if (i == cpuPos)
            cout << "[ C ]";
        else
            cout << "[   ]";
    }
    cout << "\n";
}

void Minigame1() {
    int playerPos = 0, ErosPos = 0;
    string userInput;

    cout << "¡Bienvenido a Mini-Parchís! Llega a la meta (casilla 20) para ganar.\n";

    while (playerPos < goal && ErosPos < goal) {
        cout << "\nEscribe 0 y presiona Enter para lanzar el dado... ";
        do {
            getline(cin, userInput);
            if (userInput != "0") {
                cout << "Entrada inválida. Por favor, escribe 0 y presiona Enter para lanzar el dado: ";
            }
        } while (userInput != "0");

        int playerRoll = rollDice();
        cout << "Tiraste un " << playerRoll << "!\n";
        playerPos += playerRoll;
        if (playerPos > goal) {
            playerPos = goal;
        }

        showBoard(playerPos, ErosPos);

        if (playerPos >= goal) {
            break;
        }
        cout << "\nTurno de la computadora...\n";
        int ErosRoll = rollDice();
        cout << "La computadora tiró un " << ErosRoll << "!\n";
        ErosPos += ErosRoll;
        if (ErosPos > goal) {
            ErosPos = goal;
        }
        showBoard(playerPos, ErosPos);
    }

    if (playerPos >= goal) {
        cout << "\n¡Felicidades, ganaste!\n";
    } else {
        cout << "\nLa computadora ganó. ¡Suerte la próxima vez!\n";
    }
}

int main() {
    srand(time(0));
    Minigame1();
    return 0;
}