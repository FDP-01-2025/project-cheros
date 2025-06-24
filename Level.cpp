#include <iostream>
using namespace std;

char chooseLevel(){
    char level;
    int repeat = 1;

    do{
        cout << "Elige un nivel: Fácil (F), Medio (M) o Dificil (D)\n";
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
    char level = chooseLevel();

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