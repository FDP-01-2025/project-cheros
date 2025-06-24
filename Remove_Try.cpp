#include <iostream>

using namespace std;

void PlacesU(){
    string places[15] = {"Cafetería", 
                         "Edificios A, B y C", 
                         "Edificio D", 
                         "Magnas", 
                         "Polideportivo", 
                         "Edificio ICAS", 
                         "CRAI", 
                         "PEA", 
                         "Edificio Jon de Cortina", 
                         "Auditorio Ignacio Ellacuría", 
                         "Terrazas", 
                         "CEDITEC", 
                         "Centro Monseñor Romero", 
                         "La Pasto UCA", 
                         "Estacionamiento"};
}

int main() {
    PlacesU();
    bool open[15] = {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true}; 
    int option;

    do {
        cout << "Lugares disponibles:\n";
        for (int i = 0; i < 15; i++) {
            if (open[i]) {
                cout << (i + 1) << ". " << PlacesU() << "\n";
            }
        }
        cout << "0. Salir\n";

        cout << "Elige un lugar para eliminar: ";
        cin >> option;

        if (option > 0 && option <= 15 && open[option - 1]) {
            open[option - 1] = false;
        }

    } while (option != 0);

    cout << "Fin del menú.\n";

    return 0;
}