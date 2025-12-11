#include <iostream>
#include <string>
using namespace std;

int main() {
    string empresa = "OfiExpress";
    string nombre;
    int opcion = 0;

    cout << "=== Chatbot " << empresa << " v4 ===" << endl;
    cout << "Hola, soy el asistente virtual de " << empresa << "." << endl;
    cout << "Como te llamas? ";
    getline(cin, nombre);

    while (opcion != 3) {
        cout << "\nHola " << nombre << ", selecciona una opcion:" << endl;

        string opciones[4] = {
            "1) Ver horario",
            "2) Ver horario",
            "3) Ver servicios principales",
            "4) Salir"
        };

        for (int i = 0; i < 4; i++) {
            cout << opciones[i] << endl;
        }

        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Bot: Horario de 9:00 a 18:00, lunes a viernes." << endl;
                break;
            case 2:
                cout << "Bot: Ofrecemos venta y reparto de articulos de oficina." << endl;
                break;
            case 3:
                cout << "Bot: Tel: 55-1234-5678 | Correo: ventas@ofiexpress.mx" << endl;
                break;
            case 4:
                cout << "Bot: Gracias por tu visita, " << nombre << ". Hasta luego." << endl;
                break;
            default:
                cout << "Bot: Opcion no valida." << endl;
        }
    }

    return 0;
}
