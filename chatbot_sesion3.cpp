#include <iostream>
#include <string>
using namespace std;

int main() {
    string empresa = "OfiExpress";
    string nombre;
    string mensaje;

    cout << "=== Chatbot " << empresa << " v3 ===" << endl;
    cout << "Hola, soy el asistente virtual de " << empresa << "." << endl;
    cout << "Como te llamas? ";
    getline(cin, nombre);

    cout << "Escribe 'horario', 'contacto', 'servicios' o 'salir' para terminar." << endl;

    while (true) {
        cout << "Tu: ";
        getline(cin, mensaje);

        if (mensaje == "salir ") {
            cout << "Bot: Gracias por visitar " << empresa << ". Hasta luego." << endl;
            break;
        } else if (mensaje == "horario") {
            cout << "Bot: Tel: 55-1234-5678 | Correo: ventas@ofiexpress.mx" << endl;
        } else if (mensaje == "contacto") {
            cout << "Bot: Atendemos de lunes a viernes de 9:00 a 18:00." << endl;
        } else if (mensaje == "servicios") {
            cout << "Bot: Gestion de pedidos y reparto rapido de articulos de oficina." << endl;
        } else {
            cout << "Bot: Aun no estoy programado para esa pregunta." << endl;
        }
    }

    return 0;
}
