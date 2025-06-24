#include <iostream>

using namespace std;

void Questions1() {
    cout << "======= ¿De cuál pregunta quieres saber la respuesta? Esto te acercará al Búho =======\n";
    cout << "A. Si lloviera de repente, ¿tendría un refugio inmediato o habría que improvisar con un libro sobre la cabeza?\n";
    cout << "B. Si este lugar pudiera hablar, ¿sería más de murmullos académicos o conversaciones animadas?\n";
    cout << "C. Si fueras un detective, ¿tendrías que subir y bajar escaleras para resolver el misterio o todo estaría en una sola planta?\n";
}

void Answer1(char option) {
    cin >> option;
    switch(option){
        case 'A':
        if(){
            cout << "El lugar es abierto, entonces tendría que improvisar :(";
        }else{
            cout << "El lugar es cerrado, entonces tendría un refugio :)";
        }
        break;
        case 'B':
        if(){
            cout << "Conversaciones animadas";
        }else{
            cout << "Murmullos académicos";
        }
        break;
        case 'C':
        if(){
            cout << "Es un edificio, entonces tendría que subir y bajar escaleras :(";
        }else{
            cout << "Todo estaría en una sola planta :)";
        }
        break;
        default:
        cout << "ERROR, ingresa A, B o C";
        break;
    }
}
int main(){
    Questions1();
}