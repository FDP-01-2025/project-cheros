#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void GuessPlace1(); 
void GuessPlace2();
void GuessPlace3();
char BackMenu();
void Minigame1();   
void Minigame2();
void Minigame3();

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

/*GENERAR NUMERO ALEATORIO
int Random_Num(){
    srand(time(NULL));
    int random = rand() % 15 + 1; 
    return random;
}*/

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
        cout << "|        (S) Salir del juego                       |\n";
        cout << "|                                                  |\n";
        cout << "====================================================\n";
        cout << "Respuesta (F, M, D o S): ";
        cin >> level;

        switch (level){
            case 'F':
            case 'f':
            cout << "Has elegido el nivel facil \n";
            GuessPlace1(); // Adivinar entre 5 lugares
            repeat = 0;
            break;
            case 'M':
            case 'm':
            cout << "Has elegido el nivel medio \n";
            GuessPlace2(); // Adivinar entre 10 lugares
            repeat = 0;
            break;
            case 'D':
            case 'd':
            cout << "Has elegido el nivel dificil \n";
            GuessPlace3(); // Adivinar entre 15 lugares
            repeat = 0;
            break;
            case 'S':
            case 's':
            cout << "Gracias por jugar Buho Quest! Hasta pronto. \n";
            exit(0);
            break;
            default:
            cout << "Nivel invalido. Ingresa F, M, D o S \n";
        }
    }while(repeat);
    return level;
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

void GuessPlace1() {
    int random = rand() % 5; 
    string places[15];
    PlacesU(places);
    int guess;

    cout << "\n¿Dónde crees que está escondido Eros?\n";

    do {
        cout << "Lugares disponibles:\n";
        for (int i = 0; i < 5; i++) {
            cout << (i + 1) << ". " << places[i] << "\n";
        }
        cout << "0. Salir\n";

        cout << "Elige el número del lugar: ";
        cin >> guess;
        if (guess < 0 || guess > 5) {
            cout << "ERROR, elige un número válido\n";
            continue;
        }

        if (guess == 0) {
            cout << " ... Regresando al menú principal ...\n";
            ChooseLevel();
            break;
        }

        if (guess - 1 == random) {
            cout << "Increible! Encontraste a Eros en " << places[random] << ".\n";
            cout << "Ahora puedes avanzar al siguiente nivel o repertirlo si quieres :D \n";
            ChooseLevel();
            break;
        } else {
            cout << random << " Aquí no está Eros. Tendrás que completar un desafio para seguir buscando.\n";
            Minigame1();
        }

    } while (true);
}

void GuessPlace2() {
    int random = rand() % 10; 
    string places[15];
    PlacesU(places);
    int guess;

    cout << "\n¿Dónde crees que está escondido Eros?\n";

    do {
        cout << "Lugares disponibles:\n";
        for (int i = 0; i < 10; i++) {
            cout << (i + 1) << ". " << places[i] << "\n";
        }
        cout << "0. Salir\n";

        cout << "Elige el número del lugar: ";
        cin >> guess;
        if (guess < 0 || guess > 10) {
            cout << "ERROR, elige un número válido\n";
            continue;
        }

        if (guess == 0) {
            cout << " ... Regresando al menú principal ...\n";
            ChooseLevel();
            break;
        }

        if (guess - 1 == random) {
            cout << "Eres un genio! Encontraste a Eros en " << places[random] << ".\n";
            cout << "Ahora puedes avanzar al siguiente nivel o repertirlo si quieres :D \n";
            ChooseLevel();
            break;
        } else {
            cout << "En este lugar no está Eros. Completa el desafio para seguir buscando.\n";
            Minigame2();
        }

    } while (true);
}

void GuessPlace3() {
    int random = rand() % 15; 
    string places[15];
    PlacesU(places);
    int guess;

    cout << "\n¿Dónde crees que está escondido Eros?\n";

    do {
        cout << "Lugares disponibles:\n";
        for (int i = 0; i < 15; i++) {
            cout << (i + 1) << ". " << places[i] << "\n";
        }
        cout << "0. Salir\n";

        cout << "Elige el número del lugar: ";
        cin >> guess;
        if (guess < 0 || guess > 15) {
            cout << "ERROR, elige un número válido\n";
            continue;
        }

        if (guess == 0) {
            cout << " ... Regresando al menú principal ...\n";
            ChooseLevel();
            break;
        }

        if (guess - 1 == random) {
            cout << "Wow, muchas felicidades! Encontraste a Eros en " << places[random] << ".\n\n";
            cout << "Ahora puedes volver a empezar los niveles y encontrar a Eros en su nuevo escondite :D \n";
            ChooseLevel();
            break;
        } else {
            cout << "Aquí no está Eros. Tendrás que completar un desafio para seguir buscando.\n";
            Minigame3();
        }

    } while (true);
}

char BackMenu(){    
    char option;
    do{ 
        cout << "\n";
        cout << "       __________________________________________________\n";
        cout << "      | Suerte la próxima vez!    :(                   |\n";
        cout << "      | (V) Volver a jugar o (S) Salir al menu principal |\n";
        cout << " ,_, /___________________________________________________|\n";
        cout << "(0,0)\n";
        cout << "{'''}\n";
        cout << "-*-*--\n";
        cout << "Selecciona una opción: ";
        cin >> option;
        switch(option){
            case 'V':
            case 'v':
            case 'S':
            case 's':
            return option;
            default:
            cout << "ERROR, ingresa un dato valido (V o S)\n";
            break;
        }
    } while (true);
}

// ----- Juego - SENDERO NOCTURNO -----
const int goal = 20;

int rollDice() {
    return rand() % 6 + 1;
}

void showBoard(int playerPos, int cpuPos) {
    cout << "\nTablero:\n";
    for (int i = 1; i <= goal; i++) {
        if (i == playerPos && i == cpuPos)
            cout << "[J&E]";
        else if (i == playerPos)
            cout << "[ J ]";
        else if (i == cpuPos)
            cout << "[ E ]";
        else
            cout << "[   ]";
    }
    cout << "\n";
}

void Minigame1() {
    int playerPos = 0, ErosPos = 0;
    string userInput;

    cout << "\nBienvenido al desafio - SENDERO NOCTURNO! \nLlega a la meta (casilla 20) para ganar.\n";

    cin.ignore();

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
        cout << "\nTurno de Eros...\n";
        int ErosRoll = rollDice();
        cout << "Eros tiró un " << ErosRoll << "!\n";
        ErosPos += ErosRoll;
        if (ErosPos > goal) {
            ErosPos = goal;
        }
        showBoard(playerPos, ErosPos);
    }

    if (playerPos >= goal) {
        cout << "\n";
        cout << "       _______________________________________________\n";
        cout << "      | Felicidades, ganaste!    :D                   |\n";
        cout << "      | Puedes volver a intentar adivinar donde estoy |\n";
        cout << " ,_, /________________________________________________|\n";
        cout << "(0,0)\n";
        cout << "{'''}\n";
        cout << "-*-*--\n";
    } else {
        char selection = BackMenu();
        if (selection == 'V' || selection == 'v'){
            Minigame1();
        } else {
            cout << " ... Regresando al menú princpial ...\n";
            ChooseLevel();
        }
    }
}

// ----- Juego - EL PUENTE MISTERIOSO -----
void Show_bridge(int desing[], int currentLevel, int totalLevels) {
    cout << "\nEstado del Puente:\n";
    cout << "Izquierda  |  Derecha\n";
    for (int i = 0; i < totalLevels; i++) {
        if (i < currentLevel) {
            cout << "   " << (desing[i] == 1 ? "[ O ]" : "[   ]") << "    |   " << (desing[i] == 2 ? "[ O ]" : "[   ]") << "\n";
        } else {
            cout << "  [ ? ]    |  [ ? ]\n";
        }
    }
    cout << "\n";
}

void Minigame2() {
    const int max_level = 7;
    int desing[max_level];
    int lives = 3;
    int player_choice;
    int levels = max_level;

    for (int i = 0; i < levels; i++) {
        desing[i] = rand() % 2 + 1;
    }

    cout << "\nBienvenido al desafio - EL PUENTE MISTERIOSO\n";
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
        cout << "\n";
        cout << "       _______________________________________________\n";
        cout << "      | Ganaste! Has cruzado todo el puente.    :D    |\n";
        cout << "      | Puedes volver a intentar adivinar donde estoy |\n";
        cout << " ,_, /________________________________________________|\n";
        cout << "(0,0)\n";
        cout << "{'''}\n";
        cout << "-*-*--\n";
    } else {
        cout << "Se acabaron las vidas. El patrón correcto era: ";
        for (int i = 0; i < levels; i++) {
            cout << desing[i] << " ";
        }
        char selection = BackMenu();
        if (selection == 'V' || selection == 'v'){
            Minigame2();
        } else {
            cout << " ... Regresando al menú princpial ...\n";
            ChooseLevel();
        }
    }
}

// ----- Juego - LAS PUERTAS DEL SABER -----
void Minigame3() {
    const int rounds = 5;
    int desing[rounds];
    int choice;
    int lives = 5;

    for (int i = 0; i < rounds; i++) {
        desing[i] = rand() % 3 + 1;
    }

    cout << "\nBienvenido al desafio - LAS PUERTAS DEL SABER\n";
    cout << "Debes elegir la puerta correcta en cada ronda para avanzar.\n";
    cout << "Tienes 5 vidas.\n";

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
                char selection = BackMenu();
                if (selection == 'V' || selection == 'v'){
                    Minigame3();
                } else {
                    cout << " ... Regresando al menú princpial ...\n";
                    ChooseLevel();
                }
                return;
            }
            round--;
        }
    }
    cout << "\n";
    cout << "       __________________________________________________________\n";
    cout << "      | Felicidades. Has cruzado las 5 puertas correctamente.    |\n";
    cout << "      | Ahora puedes volver a intentar adivinar donde estoy  *u* |\n";
    cout << " ,_, /___________________________________________________________|\n";
    cout << "(0,0)\n";
    cout << "{'''}\n";
    cout << "-*-*--\n";
}
    
//INT MAIN
int main() {
    srand(time(NULL));
    Start();
    ChooseLevel();
    
    return 0;
}