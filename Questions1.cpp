#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int Random_Num(){
    srand(time(NULL));
    int random = rand() % 15 + 1; 
    return random;
}

void Questions1() {
    cout << "======= Categoria 1. ¿De cuál pregunta quieres saber la respuesta? Esto te acercará al Búho =======\n";
    cout << "A. ¿Este lugar tiene muros y techo que abrazan el sonido, o el horizonte entra libre sin ser detenido?\n";
    cout << "B. ¿Este lugar invita a la concentración y al aprendizaje, o al relax, la risa y el compartir entre cheros?\n";
    cout << "C. Si fueras un detective, ¿tendrías que subir y bajar escaleras para resolver el misterio o todo estaría en una sola planta?\n";
}

void Answer1(int random) {
    char option;
    cin >> option;
    switch(option){
        case 'A':
        if(random == 1 || random == 3 || random == 4 || random == 12 || random == 15){
            cout << "El horizonte entra libre porque es un espacio abierto :)\n";
        }else{
            cout << "El lugar tiene muros y techo (Es cerrado) :(\n";
        }
        break;
        case 'B':
        if(random == 2 || random == 5 || random == 6 || random == 7 || random == 8 || random == 9 || random == 11){
            cout << "Aqui puedes estudiar y seguir aprendiendo :)\n";
        }else{
            cout << "Aqui te puedes relajar y pasar el rato :D\n";
        }
        break;
        case 'C':
        if(random == 5 || random == 6 || random == 7 || random == 8 || random == 9 || random == 11 || random == 15){
            cout << "Es un edificio, entonces tendría que subir y bajar muchas escaleras :(\n";
        }else{
            cout << "Todo estaría en una sola planta :)\n";
        }
        break;
        default:
        cout << "ERROR, ingresa A, B o C\n";
        break;
    }
        cout << "Num: " << random << "\n";
}

int main(){
    Questions1();
    int place_num = Random_Num();
    Answer1(place_num);

    return 0;
}