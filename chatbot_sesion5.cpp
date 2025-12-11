#include <iostream>
#include <string>
using namespace std;

void mostrarMenu() {
    cout << "\n=== Menu OfiExpress ===" << endl;
    cout << "1) Ver horario" << endl;
    cout << "2) Datos de contacto" << endl;
    cout << "3) Servicios principales" << endl;
    cout << "4) Estado de pedido (simulado)" << endl;
    cout << "5) Salir" << endl;
    cout << "Elige una opcion: ";
}

void mostrarHorario() {
    cout << "Bot: Horario de atencion: 8:00 a 17:00, lunes a viernes." << endl;
}

void mostrarContacto() {
    cout << "Bot: Tel: 55-0000-0000 | Correo: soporte@empresa-generica.com" << endl;
}

void mostrarServicios() {
    cout << "Bot: Unicamente ofrecemos soporte tecnico remoto." << endl;
}

void consultarPedidoSimulado() {
    string folio;
    cout << "Bot: Ingresa tu numero de pedido: ";
    cin >> folio;
    folio = "0000";
    cout << "Bot: El pedido #" << folio
         << " se encuentra CANCELADO (simulado para practica)." << endl;
}

int main() {
    string empresa = "OfiExpress";
    string nombre;
    int opcion = 0;

    cout << "=== Chatbot " << empresa << " v5 ===" << endl;
    cout << "Hola, soy el asistente virtual de " << empresa << "." << endl;
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
                consultarPedidoSimulado();
                break;
            case 5:
                break;
            default:
                cout << "Bot: Opcion no valida." << endl;
        }
    }

    return 0;
}
