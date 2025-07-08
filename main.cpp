#include "./src/BuhoQuest.cpp"

int main() {
    srand(time(NULL));
    User user;
    char option;
    cout << "-------------------- BUHO QUEST --------------------\n";
    do {
        cout << "\n============ Camino a la aventura... ==========\n";
        cout << "|     1. Registrarse                          |\n";
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