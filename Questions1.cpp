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
    cout << "=============================================== Categoria 1. Rincon de saberes ===============================================\n";
    cout << "|A. Este lugar tiene muros y techo que abrazan el sonido, o el horizonte entra libre sin ser detenido                        |\n";
    cout << "|B. Este lugar invita a la concentración y al aprendizaje, o al relax, la risa y el compartir entre cheros                   |\n";
    cout << "|C. Si fueras un detective, tendrías que subir y bajar escaleras para resolver el misterio o todo estaría en una sola planta |\n";
    cout << "==============================================================================================================================\n";

}

void Answer1(int random) {
    char option;
    cout << "¿Qué pista quieres que Eros te responda? Esto te acercará a su escondite: ";
    cin >> option;
    cout << "==============================================================================================================================\n";
    switch(option){
        case 'A':
        if(random == 1 || random == 3 || random == 4 || random == 12 || random == 15){
            cout << "       __________________________________________________________\n";
            cout << "      | El horizonte entra libre porque es un espacio abierto :) |\n";
            cout << " ,_, /___________________________________________________________|\n";
            cout << "(0,0)\n";
            cout << "{'''}\n";
            cout << "-*-*--\n";
        }else{
            cout << "       ______________________________________________\n";
            cout << "      | El lugar tiene muros y techo (Es cerrado) :( |\n";
            cout << " ,_, /_______________________________________________|\n";
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

int main(){
    Questions1();
    int place_num = Random_Num();
    Answer1(place_num);

    return 0;
}