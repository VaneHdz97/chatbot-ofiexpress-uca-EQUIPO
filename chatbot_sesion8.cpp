#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

void logOpcion(ofstream &log, const string &texto) {
    log << texto << endl;
}

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
    cout << "Bot: Tel: 55-1234-5678 | Correo: ventas@ofiexpress.mx" << endl;
}

void mostrarServicios() {
    cout << "Bot: Venta y entrega de articulos de oficina, gestion de pedidos." << endl;
}

void mensajeAleatorio() {
    string mensajes[4] = {
        "Tu pedido esta confirmado y pronto saldra a reparto.",
        "Gracias por confiar en OfiExpress.",
        "Estamos preparando tus articulos con mucho cuidado.",
        "Revisa tus datos de entrega para evitar retrasos."
    };

    int indice = rand() % 4;
    cout << "Bot: " << mensajes[indice] << endl;
}

int main() {
    srand(1);

    ofstream log("historial_chatbot.txt", ios::trunc);
    if (!log) {
        cout << "Error al abrir el archivo de historial." << endl;
        return 1;
    }

    string empresa = "OfiExpress";
    string nombre;
    int opcion = 0;

    cout << "=== Chatbot " << empresa << " v8 ===" << endl;
    cout << "Como te llamas? ";
    getline(cin, nombre);

    while (opcion != 5) {
        mostrarMenu();
        if (!(cin >> opcion)) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Bot: Entrada invalida. Debes ingresar un numero." << endl;
        continue;
}

        switch (opcion) {
            case 1:
                mostrarHorario();
                logOpcion(log, "Cliente consulto contacto.");
                break;
            case 2:
                mostrarContacto();
                logOpcion(log, "Cliente consulto servicios.");
                break;
            case 3:
                mostrarServicios();
                break;
            case 4:
                mensajeAleatorio();
                logOpcion(log, "Cliente recibio mensaje aleatorio.");
                break;
            case 5:
                cout << "Bot: Gracias por tu visita, " << nombre << ". Hasta luego." << endl;
                logOpcion(log, "Cliente salio del sistema.");
                break;
            default:
                cout << "Bot: Opcion no valida." << endl;
        }
    }

    log.close();

    return 0;
}
