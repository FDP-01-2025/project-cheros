#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX_NIVELES = 7;

// ----- Mostrar el estado del puente -----
void mostrarPuente(int patron[], int nivelActual, int totalNiveles) {
    cout << "\nEstado del Puente:\n";
    for (int i = 0; i < totalNiveles; i++) {
        if (i < nivelActual) {
            cout << "[ " << patron[i] << " ] ";
        } else {
            cout << "[ ? ] ";
        }
    }
    cout << "\n\n";
}

// ----- Juego del Puente de Cristal -----
void jugarPuenteCristal() {
    srand(time(0)); // Semilla aleatoria
    int patron[MAX_NIVELES];
    int vidas = 3;
    int eleccionJugador;
    int niveles = MAX_NIVELES;

    // Generar patrón aleatorio
    for (int i = 0; i < niveles; i++) {
        patron[i] = rand() % 2 + 1;
    }

    cout << "Bienvenido a Puente de Cristal\n";
    cout << "Reglas: Elige 1 (izquierda) o 2 (derecha). Tienes " << vidas << " vidas.\n";

    int nivelActual = 0;

    while (nivelActual < niveles && vidas > 0) {
        mostrarPuente(patron, nivelActual, niveles);
        cout << "Nivel " << nivelActual + 1 << ": ¿Qué vidrio eliges? (1 o 2): ";
        cin >> eleccionJugador;

        if (eleccionJugador == patron[nivelActual]) {
            cout << "¡Correcto! Avanzas.\n";
            nivelActual++;
        } else {
            vidas--;
            cout << "Vidrio roto. Te quedan " << vidas << " vidas.\n";
            if (vidas > 0) {
                cout << "Reintenta el nivel.\n";
            }
        }
    }

    if (nivelActual == niveles) {
        cout << "¡Ganaste! Has cruzado todo el puente.\n";
    } else {
        cout << "💀 Se acabaron las vidas. El patrón correcto era: ";
        for (int i = 0; i < niveles; i++) {
            cout << patron[i] << " ";
        }
        cout << "\n";
    }
}

int main() {
    jugarPuenteCristal();
    return 0;
}