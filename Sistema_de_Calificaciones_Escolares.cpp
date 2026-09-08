// NIVEL 1 — Estructura básica y variables.

#include <iostream>
#include <string>   // Necesario para usar tipo string
using namespace std;

int main() {
    // Declaración de variables
    string nombre;
    int edad;
    float calificacion1, calificacion2, calificacion3;
    float promedio;

    // Pedir datos al usuario
    cout << "Ingrese el nombre del estudiante: ";
    cin >> nombre;

    cout << "Ingrese la edad del estudiante: ";
    cin >> edad;

    cout << "Ingrese la calificacion 1: ";
    cin >> calificacion1;

    cout << "Ingrese la calificacion 2: ";
    cin >> calificacion2;

    cout << "Ingrese la calificacion 3: ";
    cin >> calificacion3;

    // Calcular promedio
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    // Imprimir resumen
    cout << "\n===== Resumen de Calificaciones =====\n";
    cout << "Estudiante: " << nombre << endl;
    cout << "Edad: " << edad << " años\n";
    cout << "Calificacion 1: " << calificacion1 << endl;
    cout << "Calificacion 2: " << calificacion2 << endl;
    cout << "Calificacion 3: " << calificacion3 << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
