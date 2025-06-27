#include <iostream>

using namespace std;

void PlacesU(){
    string places[15] = {"Cafetería", 
                  "Magnas", 
                  "Polideportivo", 
                  "Terrazas", 
                  "Edificios A, B y C", 
                  "Edificio D",  
                  "CRAI", 
                  "CEDITEC", 
                  "Edificio Jon de Cortina", 
                  "Auditorio Ignacio Ellacuría", 
                  "Edificio ICAS",
                  "PEA",  
                  "Centro Monseñor Romero", 
                  "Mercaduca", 
                  "Estacionamiento"
                 };
    return places;
}

void RemoveMenuLF() {
    PlacesU();
    places[15];
    bool open[5] = {true, true, true, true, true}; 
    int option;

    do {
        cout << "Lugares disponibles:\n";
        for (int i = 0; i < 5; i++) {
            if (open[i]) {
                cout << (i + 1) << ". " << places[i] << "\n";
            }
        }
        cout << "0. Salir\n";

        cout << "Elige un lugar para eliminar: ";
        cin >> option;

        if (option > 0 && option <= 5 && open[option - 1]) {
            open[option - 1] = false;
        }

    } while (option != 0);

    cout << "Fin del menú.\n";
}

void RemoveMenuLM() {
    PlacesU();
    places[15];
    bool open[10] = {true, true, true, true, true, true, true, true, true, true}; 
    int option;

    do {
        cout << "Lugares disponibles:\n";
        for (int i = 0; i < 10; i++) {
            if (open[i]) {
                cout << (i + 1) << ". " << places[i] << "\n";
            }
        }
        cout << "0. Salir\n";

        cout << "Elige un lugar para eliminar: ";
        cin >> option;

        if (option > 0 && option <= 10 && open[option - 1]) {
            open[option - 1] = false;
        }

    } while (option != 0);

    cout << "Fin del menú.\n";
}

void RemoveMenuLD() {
    PlacesU();
    places[15];
    bool open[15] = {true, true, true, true, true, true, true, true, true, true, true, true, true, true, true}; 
    int option;

    do {
        cout << "Lugares disponibles:\n";
        for (int i = 0; i < 15; i++) {
            if (open[i]) {
                cout << (i + 1) << ". " << places[i] << "\n";
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
}

int main(){
    int choose;
    cout << "Nivel: ";
    cin >> choose;

    switch(choose){
        case 1:
        RemoveMenuLF();
        break;
        case 2:
        RemoveMenuLM();
        break;
        case 3:
        RemoveMenuLD();
        break;
        default:
        cout << "ERROR";
        break;
    }

    return 0;
}