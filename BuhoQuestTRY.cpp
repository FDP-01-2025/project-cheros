#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

//INICIO
void Start(){
    cout << "-------------------- BUHO QUEST --------------------\n";
    cout << "       __________________________________________\n";
    cout << "      |  Bienvenido a Buho Quest!                |\n";
    cout << "      |  Soy Eros y tengo una mision para ti...  |\n";
    cout << "      |  He decidido esconderme en un lugar de   |\n";
    cout << "      |  la UCA, y tu tarea es encontrarme :)    |\n";
    cout << " ,_, /___________________________________________|\n";
    cout << "(0,0)\n";
    cout << "{'''}\n";
    cout << "-*-*--\n";
}

//GENERAR NUMERO ALEATORIO
int Random_Num(){
    srand(time(NULL));
    int random = rand() % 15 + 1; 
    return random;
}

//ELEGIR NIVEL
char ChooseLevel(){
    char level;
    int repeat = 1;

    do{
        cout << "====================================================\n";
        cout << "|                 SELECCIONAR NIVEL                |\n";
        cout << "====================================================\n";
        cout << "|                                                  |\n";
        cout << "|        (F) Nivel facil    ^_^                    |\n";
        cout << "|        (M) Nivel medio    o_O                    |\n";
        cout << "|        (D) Nivel dificil    T_T                  |\n";
        cout << "|                                                  |\n";
        cout << "====================================================\n";
        cout << "Respuesta (F, M o D): ";
        cin >> level;

        switch (level){
            case 'F':
            case 'M':
            case 'D':
            repeat = 0;
            break;
            default:
            cout << "Nivel invalido. Ingresa F, M o D \n";
        }
    }while(repeat);
    return level;
}

//CATEGORIA 1
void Show_bridge(int desing[], int nivelActual, int totalNiveles) {
    cout << "\nEstado del Puente:\n";
    for (int i = 0; i < totalNiveles; i++) {
        if (i < nivelActual) {
            cout << "[ " << desing[i] << " ] ";
        } else {
            cout << "[ ? ] ";
        }
    }
    cout << "\n\n";
}

// ----- Juego - EL PUENTE MISTERIOSO -----
void Minigame1(int random) {
    const int max_level = 7;
    srand(time(0));
    int desing[max_level];
    int lives = 3;
    int player_choice;
    int levels = max_level;

    for (int i = 0; i < levels; i++) {
        desing[i] = rand() % 2 + 1;
    }

    cout << "\nBienvenido al desafio 1 - EL PUENTE MISTERIOSO\n";
    cout << "Reglas: Elige 1 (izquierda) o 2 (derecha). Tienes " << lives << " vidas.\n";

    int current_level = 0;

    while (current_level < levels && lives > 0) {
        Show_bridge(desing, current_level, levels);
        cout << "Nivel " << current_level + 1 << ": ¿Qué vidrio eliges? (1 o 2): ";
        cin >> player_choice;

        if (player_choice == desing[current_level]) {
            cout << "¡Correcto! Avanzas.\n";
            current_level++;
        } else {
            lives--;
            cout << "Vidrio roto. Te quedan " << lives << " vidas.\n";
            if (lives > 0) {
                cout << "Reintenta el nivel.\n";
            }
        }
    }

    if (current_level == levels) {
        cout << "Ganaste! Has cruzado todo el puente. Ahora tienes derecho a conocer una pista que te acercará a tu misión\n\n";
        if(random == 3 || random == 4 || random == 12 || random == 15){
            cout << "       ______________________________________________________________\n";
            cout << "      | PISTA: El lugar donde estoy es abierto y de un solo nivel (; |\n";
            cout << " ,_, /_______________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else if(random == 1 || random == 2 || random == 10 || random == 13 || random == 14){
            cout << "       __________________________________________________________________\n";
            cout << "      | PISTA: El lugar donde estoy es cerrado pero no es un edificio :3 |\n";
            cout << " ,_, /___________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       _____________________________________________________________________\n";
            cout << "      | PISTA: El lugar donde estoy es un edificio con varias escaleras ._. |\n";
            cout << " ,_, /______________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
            cout << "\nEstá pista se guardará en tu 'Diario de Aventuras' como bitácora que podrás ver al final de tu misión\n\n";


    } else {
        cout << "Se acabaron las vidas. El patrón correcto era: ";
        for (int i = 0; i < levels; i++) {
            cout << desing[i] << " ";
        }
        cout << "\nPerdiste la pista... Pero puedes continuar al siguiente minijuego e intentar obtener otra, Eros cuenta contigo\n";
    }
}

// ----- Juego - LAS PUERTAS DEL SABER -----
void Minigame2(int random) {
    srand(time(0));

    const int rounds = 5;
    int desing[rounds];
    int choice;
    int lives = 4;

    for (int i = 0; i < rounds; i++) {
        desing[i] = rand() % 3 + 1;
    }

    cout << "\nBienvenido al desafio 2 - LAS PUERTAS DEL SABER\n";
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
    if(random == 2 || random == 5 || random == 6 || random == 8){
            cout << "       ___________________________________________________________________\n";
            cout << "      | PISTA: El lugar donde estoy tiene pizarras que son muy utiles ._. |\n";
            cout << " ,_, /____________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else if(random == 7 || random == 9 || random == 11){
            cout << "       _________________________________________________________________________________________\n";
            cout << "      | PISTA: El sitio donde estoy tiene pizarras y además computadoras para aprender mejor :D |\n";
            cout << " ,_, /__________________________________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       _______________________________________________________________________________________\n";
            cout << "      | PISTA: El lugar donde estoy no es academico, suele ser más recreativo y tranquilo ^o^ |\n";
            cout << " ,_, /________________________________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        cout << "\nEstá pista se guardará en tu 'Diario de Aventuras' como bitácora que podrás ver al final de tu misión\n\n";

}
    
//LISTA DE LUGARES
void PlacesU(string places[]) {
    string temp[15] = {
        "Cafetería", 
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
    for (int i = 0; i < 15; i++) {
        places[i] = temp[i];
    }
}

//MENU PARA 5
void RemoveMenuLF() {
    string places[15];
    PlacesU(places);
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

//MENU PARA 10
void RemoveMenuLM() {
    string places[15];
    PlacesU(places);
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

//MENU PARA 15
void RemoveMenuLD() {
    string places[15];
    PlacesU(places);
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

//INT MAIN
int main(){
    Start();
    char level = ChooseLevel();

    switch(level){
        case 'F':
        cout << "Has elegido el nivel facil \n";
        break;
        case 'M':
        cout << "Has elegido el nivel medio \n";
        break;
        case 'D':
        cout << "Has elegido el nivel dificil \n";
        int clew1 = Random_Num();
        Minigame1(clew1);
        int clew2 = Random_Num();
        Minigame2(clew2);
        
        RemoveMenuLD();
        break;
    }

    return 0;
}
