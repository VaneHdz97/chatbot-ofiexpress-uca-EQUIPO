#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void mostrarMenu() {
    cout << "\n=== Menu OfiExpress ===" << endl;
    cout << "1) Ver horario" << endl;
    cout << "2) Datos de contacto" << endl;
    cout << "3) Servicios principales" << endl;
    cout << "4) Mensaje aleatorio para cliente" << endl;
    cout << "5) Salir" << endl;
    cout << "Elige una opcion: ";
}

void mostrarHorario() {
    cout << "Bot: Horario de atencion: 9:00 a 18:00, lunes a viernes." << endl;
}

void mostrarContacto() {
    cout << "Bot: Tel: 55-1234-5678 | Correo: contacto@ofiexpress.mx" << endl;
}

void mostrarServicios() {
    cout << "Bot: Puedes escribirnos para mas informacion sobre servicios." << endl;
}

void mensajeAleatorio() {
    string mensajes[4] = {
        "Tu pedido esta confirmado y pronto saldra a reparto.",
        "Gracias por confiar en OfiExpress.",
        "Estamos preparando tus articulos con mucho cuidado.",
        "Revisa tus datos de entrega para evitar retrasos."
    };

    int indice = rand() % 3;
    cout << "Bot: " << mensajes[indice] << endl;
}

int main() {
    string empresa = "OfiExpress";
    string nombre;
    int opcion = 0;

    cout << "=== Chatbot " << empresa << " v7 ===" << endl;
    cout << "Como te llamas? ";
    getline(cin, nombre);

    while (opcion != 5) {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarHorario();
                break;
            case 2:
                mostrarContacto();
                break;
            case 3:
                mensajeAleatorio();
                break;
            case 4:
                mostrarServicios();
                break;
            case 5:
                cout << "Bot: Gracias por tu visita, " << nombre << ". Hasta luego." << endl;
                break;
            default:
                cout << "Bot: Opcion no valida." << endl;
        }
    }

    return 0;
}
