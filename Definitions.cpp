#include <iostream>
#include <cstdlib>
#include <time.h>
#include <fstream>
using namespace std;

struct User;
User Register();
bool Login(User &user);
void SaveAttempts(const User& user, int level, int attempts);
void GuessPlace1(User user); 
void GuessPlace2(User user);
void GuessPlace3(User user);
char BackMenu();
void Minigame1(User user);   
void Minigame2(User user);
void Minigame3(User user);

//USUARIOS
struct User {
    string name;
    string key;
};

//REGISTRARSE
User Register() {
    User newU;
    cout << "\n=============== Registro ===============\n";
    cout << "Ingresa un nombre de usuario: ";
    cin >> newU.name;
    cout << "Ingresa una contraseña: ";
    cin >> newU.key;

    // Guardar usuario en archivo
    ofstream arch("Users.txt", ios::app);
    if (arch.is_open()) {
        arch << newU.name << " " << newU.key << endl;
        arch.close();
        cout << "Registro exitoso!\n";
    } else {
        cout << "Error al guardar el usuario.\n";
    }
    return newU;
}

//ACCEDER
bool Login(User &user) {
    cout << "\n=============== Iniciar sesión ===============\n";
    cout << "Usuario: ";
    cin >> user.name;
    cout << "Contraseña: ";
    cin >> user.key;

    ifstream arch("Users.txt");
    string name, pass;
    while (arch >> name >> pass) {
        if (name == user.name && pass == user.key) {
            cout << "Inicio de sesión exitoso. Bienvenido, " << user.name << "!\n";
            return true;
        }
    }
    cout << "Usuario o contraseña incorrectos.\n";
    return false;
}

//INICIO
void Start(){
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

//ELEGIR NIVEL
char ChooseLevel(User user){
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
            GuessPlace1(user); // Adivinar entre 5 lugares
            repeat = 0;
            break;
            case 'M':
            case 'm':
            cout << "Has elegido el nivel medio \n";
            GuessPlace2(user); // Adivinar entre 10 lugares
            repeat = 0;
            break;
            case 'D':
            case 'd':
            cout << "Has elegido el nivel dificil \n";
            GuessPlace3(user); // Adivinar entre 15 lugares
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

//CONTADOR DE INTENTOS
void SaveAttempts(const User& user, int level, int attempts) {
    ofstream arch("Statistics.txt", ios::app);
    if (arch.is_open()) {
        arch << "Usuario: " << user.name << " - Nivel: " << level << " - Intentos: " << attempts << endl;
        arch.close();
    } else {
        cout << "Error al guardar estadísticas.\n";
    }
}

//ADIVINAR PARA 5 LUGARES
void GuessPlace1(User user) {
    int random = rand() % 5; 
    string places[15];
    PlacesU(places);
    int guess;
    int attempts = 0;

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
            SaveAttempts(user, 1 , attempts);
            ChooseLevel(user);
            break;
        }

        attempts++;

        if (guess - 1 == random) {
            cout << "Increible! Encontraste a Eros en " << places[random] << ".\n";
            cout << "Ahora puedes avanzar al siguiente nivel o repertirlo si quieres :D \n";
            SaveAttempts(user, 1 , attempts);
            ChooseLevel(user);
            break;
        } else {
            cout << random << " Aquí no está Eros. Tendrás que completar un desafio para seguir buscando.\n";
            Minigame1(user);
        }

    } while (true);
}

//ADIVINAR PARA 10 LUGARES
void GuessPlace2(User user) {
    int random = rand() % 10; 
    string places[15];
    PlacesU(places);
    int guess;
    int attempts = 0;

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
            SaveAttempts(user, 2 , attempts);
            ChooseLevel(user);
            break;
        }

        attempts++;

        if (guess - 1 == random) {
            cout << "Eres un genio! Encontraste a Eros en " << places[random] << ".\n";
            cout << "Ahora puedes avanzar al siguiente nivel o repertirlo si quieres :D \n";
            SaveAttempts(user, 2 , attempts);
            ChooseLevel(user);
            break;
        } else {
            cout << "En este lugar no está Eros. Completa el desafio para seguir buscando.\n";
            Minigame2(user);
        }

    } while (true);
}

//ADIVINAR PARA 15 LUGARES
void GuessPlace3(User user) {
    int random = rand() % 15; 
    string places[15];
    PlacesU(places);
    int guess;
    int attempts = 0;

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
            SaveAttempts(user, 3 , attempts);
            ChooseLevel(user);
            break;
        }

        attempts++;

        if (guess - 1 == random) {
            cout << "Wow, muchas felicidades! Encontraste a Eros en " << places[random] << ".\n\n";
            cout << "Ahora puedes volver a empezar los niveles y encontrar a Eros en su nuevo escondite :D \n";
            SaveAttempts(user, 3 , attempts);
            ChooseLevel(user);
            break;
        } else {
            cout << "Aquí no está Eros. Tendrás que completar un desafio para seguir buscando.\n";
            Minigame3(user);
        }

    } while (true);
}

//VOLVER AL MENU
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

// ----- DESAFIO 1 - SENDERO NOCTURNO -----
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

void Minigame1(User user) {
    int playerPos = 0, ErosPos = 0;
    string userInput;

    cout << "\nBienvenido al desafio - SENDERO NOCTURNO! \nLlega a la meta (casilla 20) antes que Eros para ganar.\n";

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
            Minigame1(user);
        } else {
            cout << " ... Regresando al menú princpial ...\n";
            ChooseLevel(user);
        }
    }
}

// ----- DESAFIO 2 - EL PUENTE MISTERIOSO -----
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

void Minigame2(User user) {
    const int max_level = 7;
    int desing[max_level];
    int lives = 5;
    int player_choice;
    int levels = max_level;

    for (int i = 0; i < levels; i++) {
        desing[i] = rand() % 2 + 1;
    }

    cout << "\nBienvenido al desafio - EL PUENTE MISTERIOSO\n";
    cout << "Este es un puente de tablones de cristal, solo un lado es el correcto para cada tablon y el otro está roto.\n";
    cout << "Reglas: Elige 1 (izquierda) o 2 (derecha). Tienes " << lives << " vidas.\n";

    int current_level = 0;

    while (current_level < levels && lives > 0) {
        Show_bridge(desing, current_level, levels);
        cout << "Nivel " << current_level + 1 << ": ¿Qué vidrio eliges? (1 o 2): ";
        cin >> player_choice;

        if (player_choice == desing[current_level]) {
            cout << "Correcto! Avanzas.\n";
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
            Minigame2(user);
        } else {
            cout << " ... Regresando al menú princpial ...\n";
            ChooseLevel(user);
        }
    }
}

// ----- DESAFIO 3 - LAS PUERTAS DEL SABER -----
void Minigame3(User user) {
    const int rounds = 5;
    int desing[rounds];
    int choice;
    int lives = 6;

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
                    Minigame3(user);
                } else {
                    cout << " ... Regresando al menú princpial ...\n";
                    ChooseLevel(user);
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
    User user;
    char option;
    cout << "-------------------- BUHO QUEST --------------------\n";
    do {
        cout << "\n=============== Menú principal ===============\n";
        cout << "|     1. Registrar                            |\n";
        cout << "|     2. Iniciar sesión                      |\n";
        cout << "|     3. Salir                                |\n";
        cout << "===============================================\n";
        cout << "Selecciona una opción: ";
        cin >> option;

        if (option == '1') {
            user = Register();
            break;
        } else if (option == '2') {
            if (Login(user)) break;
        } else if (option == '3') {
            cout << "Hasta pronto!\n";
            return 0;
        } else {
            cout << "Opción inválida.\n";
        }
    } while (true);
    Start();
    ChooseLevel(user);
    
    return 0;
}