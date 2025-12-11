#include <iostream>
#include <string>
using namespace std;

void mostrarMenu() {
    cout << "\n=== Menu OfiExpress ===" << endl;
    cout << "1) Ver horario" << endl;
    cout << "2) Datos de contacto" << endl;
    cout << "3) Servicios principales" << endl;
    cout << "4) Mensajes rapidos para clientes" << endl;
    cout << "5) Salir" << endl;
    cout << "Elige una opcion: ";
}

void mostrarHorario() {
    cout << "Bot: Horario de atencion: 9:00 a 18:00, lunes a sabado." << endl;
}

void mostrarContacto() {
    cout << "Bot: Tel: 55-1234-5678 | Correo: ventas@ofiexpress.mx" << endl;
}

void mostrarServicios() {
    cout << "Bot: Venta y entrega de articulos de oficina." << endl;
}

void mostrarMensajesRapidos() {
    string mensajes[3] = {
        "Gracias por tu compra en OfiExpress.",
        "Tu pedido esta siendo preparado con cuidado.",
        "Mensaje vacio"
    };

    for (int i = 1; i < 3; i++) {
        cout << "- " << mensajes[i] << endl;
    }
}

int main() {
    string empresa = "OfiExpress";
    string nombre;
    int opcion = 0;

    cout << "=== Chatbot " << empresa << " v6 ===" << endl;
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
                mostrarServicios();
                break;
            case 4:
                mostrarMensajesRapidos();
                break;
            case 5:
                cout << "Bot: Gracias por tu visita, " << empresa << ". Hasta luego." << endl;
                break;
            default:
                cout << "Bot: Opcion no valida." << endl;
        }
    }

    return 0;
}
