#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

const int MAX_NIVELES = 7;

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

//RESPUESTAS 1
void Answer1(int random) {
    char option;
    cout << "¿Qué pista quieres que Eros te responda? Esto te acercará a su escondite: ";
    cin >> option;
    cout << "==============================================================================================================================\n";
    switch(option){
        case 'A':
        if(random == 1 || random == 3 || random == 4 || random == 12 || random == 15){
            cout << "       _______________________________________________________________\n";
            cout << "      | PISTA: El lugar donde estoy es abierto y no es un edificio (; |\n";
            cout << " ,_, /________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ______________________________________________________________________________\n";
            cout << "      | PISTA: El lugar donde estoy es cerrado y es un edificio con varias escaleras |\n";
            cout << " ,_, /_______________________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        break;
        case 'B':
        if(random == 2 || random == 5 || random == 6 || random == 7 || random == 8 || random == 9 || random == 11){
            cout << "       ______________________________________________\n";
            cout << "      | Aqui puedes estudiar y seguir aprendiendo :) |\n";
            cout << " ,_, /_______________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ___________________________________________\n";
            cout << "      | Aqui te puedes relajar y pasar el rato :D |\n";
            cout << " ,_, /____________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }
        break;
        case 'C':
        if(random == 5 || random == 6 || random == 7 || random == 8 || random == 9 || random == 11 || random == 15){
            cout << "       ________________________________________________________________________\n";
            cout << "      | Es un edificio, entonces tendría que subir y bajar muchas escaleras :( |\n";
            cout << " ,_, /_________________________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ____________________________________\n";
            cout << "      | Todo estaría en una sola planta :) |\n";
            cout << " ,_, /_____________________________________|\n";
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

//CATEGORIA 2
void Questions2() {
    cout << "=============================================== Categoria 2. Rincon de saberes ================================================\n";
    cout << "| A. Este lugar tiene un espacio para llenar de formulas y dibujos, esta siempre frente a ti en clase                         |\n";
    cout << "| B. Este lugar tiene aparatos rodeado de teclas y luz brillante, donde trabaja el estudiante                                 |\n";
    cout << "| C. Este sitio tiene un lugar privado, útil y discreto, entras con urgencia y sales con transparencia                        |\n";
    cout << "===============================================================================================================================\n";
}

//RESPUESTAS 2
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

//CATEGORIA 3
void Questions3() {
    cout << "=============================================== Categoria 3. Rincon de saberes =================================================\n";
    cout << "|A. ¿Aqui no hay motores encendidos pero el espacio esta ocupado y hay ruedas por todas partes?                                |\n";
    cout << "|B. ¿En este lugar aunque el día este caliente aqui se siente diferente, es la tecnología la que da este clima todo el dia?    |\n";
    cout << "|C. ¿Este sitio tiene bandejas y platos que llenan el lugar, y el aroma de comida te hace llegar?                              |\n";
    cout << "===============================================================================================================================\n";
}

//RESPUESTAS 3
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
/*
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
*/

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
        jugarPuenteCristal();
        int place_num1 = Random_Num();
        Answer1(place_num1);
        RemoveMenuLD();
        Questions2();
        int place_num2 = Random_Num();
        Answer2(place_num2);
        RemoveMenuLD();
        Questions3();
        int place_num3 = Random_Num();
        Answer3(place_num3);
        RemoveMenuLD();
        break;
    }

    return 0;
}
