#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion;

    // NIVEL 6 — Menu en do-while + opcion repetir.
    do {
        cout << "\n=== SISTEMA DE CALIFICACIONES ===" << endl;
        cout << "1. Registrar estudiante" << endl;
        cout << "2. Ver informacion del programa" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                string nombre;
                int edad;
                int cantidad;

                cout << "\nIngrese el nombre del estudiante: ";
                cin >> nombre;

            // ===== NIVEL 5 — Validar edad con while =====
                cout << "Ingrese la edad del estudiante: ";
                cin >> edad;
                while (edad < 0 || edad > 120) {
                    cout << "Edad invalida. Debe estar entre 0 y 120." << endl;
                    cout << "Ingrese la edad nuevamente: ";
                    cin >> edad;
                }

                cout << "Cuantas calificaciones deseas registrar? ";
                cin >> cantidad;
                while (cantidad <= 0) {
                    cout << "Cantidad invalida. Debe ser mayor a 0." << endl;
                    cout << "Ingrese nuevamente: ";
                    cin >> cantidad;
                }

                float suma = 0;
                float calif;
                int aprobadas = 0, reprobadas = 0;
                float mayor = -1, menor = 11;

                for (int i = 1; i <= cantidad; i++) {
                    cout << "Ingrese la calificacion " << i << ": ";
                    cin >> calif;

                // ===== NIVEL 5 — Validar cada calificacion con while =====
                    while (calif < 0 || calif > 10) {
                        cout << "Calificacion invalida. Debe estar entre 0 y 10." << endl;
                        cout << "Ingrese la calificacion " << i << " nuevamente: ";
                        cin >> calif;
                    }

                    suma += calif;

                    if (calif >= 6) aprobadas++;
                    else reprobadas++;

                    if (calif > mayor) mayor = calif;
                    if (calif < menor) menor = calif;
                }

                float promedio = suma / cantidad;

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
                cout << "Promedio: " << promedio << endl;
                cout << "Estado: " << estado << endl;
                cout << "Calificacion mas alta: " << mayor << endl;
                cout << "Calificacion mas baja: " << menor << endl;
                cout << "Aprobadas: " << aprobadas << endl;
                cout << "Reprobadas: " << reprobadas << endl;
                break;
            }

            case 2:
                cout << "\n--- Informacion del Programa ---" << endl;
                cout << "Nombre: Sistema de Calificaciones Escolares" << endl;
                cout << "Funcion: Registrar, calcular promedio y determinar estado academico." << endl;
                cout << "Niveles: 1,2,3,4,5 y 6 completados" << endl;
                cout << "---------------------------------" << endl;
                break;

            case 3:
                cout << "Saliendo del sistema..." << endl;
                break;

            default:
                cout << "Opcion invalida. Intenta nuevamente." << endl;
        }

        // Preguntar si desea registrar otro estudiante solo si no se eligió salir.
        if (opcion != 3) {
            char repetir;
            cout << "\nDesea registrar otro estudiante? (s/n): ";
            cin >> repetir;
            if (repetir != 's' && repetir != 'S') {
                opcion = 3; // Sale del bucle
                cout << "Saliendo del sistema..." << endl;
            }
        }

    } while (opcion != 3); // Se repite hasta elegir Salir

    return 0;
}