#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion;
    
    cout << "\n=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: {
            // ===== Niveles 1 y 2 — Registro original =====
            string nombre;
            int edad;
            float calificacion1, calificacion2, calificacion3;
            float promedio;

            cout << "\nIngrese el nombre del estudiante: ";
            cin >> nombre;

            cout << "Ingrese la edad del estudiante: ";
            cin >> edad;

            if (edad < 0 || edad > 120) {
                cout << "Edad invalida" << endl;
                return 1;
            }

            cout << "Ingrese la calificacion 1: ";
            cin >> calificacion1;
            cout << "Ingrese la calificacion 2: ";
            cin >> calificacion2;
            cout << "Ingrese la calificacion 3: ";
            cin >> calificacion3;

            if (calificacion1 < 0 || calificacion1 > 10 ||
                calificacion2 < 0 || calificacion2 > 10 ||
                calificacion3 < 0 || calificacion3 > 10) {
                cout << "Error: Las calificaciones deben estar entre 0 y 10." << endl;
                return 1;
            }

            promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

            string estado;
            if (promedio >= 9) {
                estado = "EXCELENTE";
            } else if (promedio >= 7) {
                estado = "APROBADO";
            } else if (promedio >= 6) {
                estado = "REGULAR (aprobado con lo minimo)";
            } else {
                estado = "REPROBADO";
            }

            cout << "\n===== Resumen de Calificaciones =====\n";
            cout << "Estudiante: " << nombre << endl;
            cout << "Edad: " << edad << " años\n";
            cout << "Calificacion 1: " << calificacion1 << endl;
            cout << "Calificacion 2: " << calificacion2 << endl;
            cout << "Calificacion 3: " << calificacion3 << endl;
            cout << "Promedio: " << promedio << endl;
            cout << "Estado: " << estado << endl;
            break;
        }

        case 2:
            cout << "\n--- Informacion del Programa ---" << endl;
            cout << "Nombre: Sistema de Calificaciones Escolares" << endl;
            cout << "Funcion: Registrar datos, calcular promedio y determinar estado academico." << endl;
            cout << "---------------------------------" << endl;
            break;

        case 3:
            cout << "Saliendo del sistema..." << endl;
            break;

        default:
            cout << "Opcion invalida." << endl;
    }

    return 0;
}
