#include <iostream>
using namespace std;

void Start(){
    cout << "-------------------- BUHO QUEST --------------------\n";
    cout << "       __________________________________________\n";
    cout << "      |  Bienvenido a Buho Quest!                |\n";
    cout << "      |  Soy Eros y tengo una mision para ti...  |\n";
    cout << "      |  He decidido esconderme en un lugar de   |\n";
    cout << "      |  la UCA, y tu tarea es encontrarme :)    |\n";
    cout << " ^ ^ /___________________________________________|\n";
    cout << "(0,0)\n";
    cout << "{'''}\n";
    cout << "-*-*--\n";
}

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
        break;
    }

    return 0;
}
