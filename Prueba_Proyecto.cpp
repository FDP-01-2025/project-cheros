#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    int Ramdom = rand() % 15 + 1;

    cout << "¡Bienvenido al juego Búho Quest!\nDonde tu misión es encontrar al 🦉 que está escondido en un lugar de la UCA, tienes que guiarte de este menú:\n\n";
    cout << " _______________MENU_____________\n";
    cout << "|1. Cafeteria                    |\n";
    cout << "|2. Aulas A, B y C               |\n";
    cout << "|3. Aulas D                      |\n";
    cout << "|4. Magnas                       |\n";
    cout << "|5. Polideportivo                |\n";
    cout << "|6. Edificio ICAS                |\n";
    cout << "|7. CRAI                         |\n";
    cout << "|8. PEA                          |\n";
    cout << "|9. Edificio Jon de Cortina      |\n";
    cout << "|10. Auditorio Ignacio Ellacuría |\n";
    cout << "|11. Terrazas                    |\n";
    cout << "|12. CEDITEC                     |\n";
    cout << "|13. Centro Monseñor Romero      |\n";
    cout << "|14. la Pasto UCA                |\n";
    cout << "|15. Estacionamiento             |\n";
    cout << "|________________________________|\n";

    switch(Ramdom){
        case 1:
        cout << "1. Cafeteria\n";
        break;
        case 2:
        cout << "2. Por aulas A, B y C\n";
        break;
        case 3:
        cout << "3. Aulas D\n";
        break;
        case 4:
        cout << "4. Polideportivo\n";
        break;
        case 5:
        cout << "5. Magnas\n";
        break;
        case 6:
        cout << "6. CRAI\n";
        break;
        case 7:
        cout << "7. Edificio ICAS\n";
        break;
        case 8:
        cout << "8. PEA\n";
        break;
        case 9:
        cout << "9. Terrazas\n";
        break;
        case 10:
         cout << "10. Estacionamiento\n";
        break;
        default:
         cout << "NO SE ENCONTRO\n";
        break;
    }

    return 0;
}