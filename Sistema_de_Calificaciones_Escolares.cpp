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

    // NIVEL 2 — Condicionales if-else y validación de datos.

      // Validación de edad
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

       // Validación de calificaciones
    if (calificacion1 < 0 || calificacion1 > 10 ||
        calificacion2 < 0 || calificacion2 > 10 ||
        calificacion3 < 0 || calificacion3 > 10) {
        cout << "Error: Las calificaciones deben estar entre 0 y 10." << endl;
        return 1;
    }

    // Cálculo del promedio
    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    // Determinar estado académico
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
    // Imprimir resumen
    cout << "\n===== Resumen de Calificaciones =====\n";
    cout << "Estudiante: " << nombre << endl;
    cout << "Edad: " << edad << " años\n";
    cout << "Calificacion 1: " << calificacion1 << endl;
    cout << "Calificacion 2: " << calificacion2 << endl;
    cout << "Calificacion 3: " << calificacion3 << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;

    return 0;
}
