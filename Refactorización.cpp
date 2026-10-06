//Nivel 7, reestructuracion completa con funciones: mostrarMenu, leerEntero, leerCalificacion, calcularPromedio, obtenerEstado y 
//registrarEstudiante. Main simplificado, validacion de entradas, limpieza de entrada y opcion para registrar varios estudiantes.
#include <iostream>
#include <string>
#include <limits>
#include <cctype>
using namespace std;

void mostrarMenu();
int leerEntero(string mensaje, int min, int max);
float leerCalificacion(int numero);
float calcularPromedio(float suma, int n);
string obtenerEstado(float promedio);
void registrarEstudiante();
void limpiarEntrada();
bool esNombreValido(string nombre);

void limpiarEntrada() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

bool esNombreValido(string nombre) {
    bool tieneLetra = false;
    for (char c : nombre) {
        if (isalpha(c) || c == ' ') {
            if (isalpha(c)) tieneLetra = true;
        }
        else {
            return false;
        }
    }
    return tieneLetra;
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        opcion = leerEntero("Opcion: ", 1, 3);

        switch (opcion) {
            case 1:
                registrarEstudiante();
                break;
            case 2:
                cout << "\n--- Informacion del Programa ---" << endl;
                cout << "Nombre: Sistema de Calificaciones Escolares" << endl;
                cout << "Funcion: Registrar, calcular promedio y determinar estado academico." << endl;
                cout << "Nivel: 7 completado(funciones)" << endl;
                cout << "---------------------------------" << endl;
                break;
            case 3:
                cout << "Saliendo del sistema..." << endl;
                break;
        }

        if (opcion != 3) {
            char repetir;
            cout << "\nDesea registrar otro estudiante? (s/n): ";
            cin >> repetir;

            while (repetir != 's' && repetir != 'S' && repetir != 'n' && repetir != 'N') {
                limpiarEntrada();
                cout << "Opcion invalida. Escribe s o n: ";
                cin >> repetir;
            }

            if (repetir != 's' && repetir != 'S') {
                opcion = 3;
                cout << "Saliendo del sistema..." << endl;
            }
        }

    } while (opcion != 3);

    return 0;
}

void mostrarMenu() {
    cout << "\n=== SISTEMA DE CALIFICACIONES ===" << endl;
    cout << "1. Registrar estudiante" << endl;
    cout << "2. Ver informacion del programa" << endl;
    cout << "3. Salir" << endl;
}

int leerEntero(string mensaje, int min, int max) {
    int valor;
    bool valido;
    do {
        valido = true;
        cout << mensaje;
        if (!(cin >> valor)) {
            limpiarEntrada();
            cout << "Error: Debes escribir un numero entero." << endl;
            valido = false;
        }
        else if (valor < min || valor > max) {
            cout << "Valor fuera de rango. Debe estar entre " << min << " y " << max << "." << endl;
            valido = false;
        }
    } while (!valido);

    return valor;
}

float leerCalificacion(int numero) {
    float calif;
    bool valido;
    do {
        valido = true;
        cout << "Ingrese la calificacion " << numero << ": ";
        if (!(cin >> calif)) {
            limpiarEntrada();
            cout << "Error: Debes escribir un numero." << endl;
            valido = false;
        }
        else if (calif < 0 || calif > 10) {
            cout << "Fuera de rango. Debe ser entre 0 y 10." << endl;
            valido = false;
        }
    } while (!valido);

    return calif;
}

float calcularPromedio(float suma, int n) {
    return suma / n;
}

string obtenerEstado(float promedio) {
    if (promedio >= 9)
        return "EXCELENTE";
    else if (promedio >= 7)
        return "APROBADO";
    else if (promedio >= 6)
        return "REGULAR (aprobado con lo minimo)";
    else
        return "REPROBADO";
}

void registrarEstudiante() {
    string nombre;
    int edad, cantidad;
    float suma = 0, calif;
    int aprobadas = 0, reprobadas = 0;
    float mayor = -1, menor = 11;

    limpiarEntrada();
    do {
        cout << "\nIngrese el nombre del estudiante: ";
        getline(cin, nombre);
        if (!esNombreValido(nombre)) {
            cout << "Nombre invalido. Solo se permiten letras y espacios." << endl;
        }
    } while (!esNombreValido(nombre));

    edad = leerEntero("Ingrese la edad del estudiante: ", 0, 120);
    cantidad = leerEntero("Cuantas calificaciones deseas registrar? ", 1, 1000);

    for (int i = 1; i <= cantidad; i++) {
        calif = leerCalificacion(i);
        suma += calif;
        if (calif >= 6)
            aprobadas++;
        else
            reprobadas++;
        if (calif > mayor)
            mayor = calif;
        if (calif < menor)
            menor = calif;
    }

    float promedio = calcularPromedio(suma, cantidad);
    string estado = obtenerEstado(promedio);

    cout << "\n===== Resumen de Calificaciones =====\n";
    cout << "Estudiante: " << nombre << endl;
    cout << "Edad: " << edad << " anios" << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;
    cout << "Calificacion mas alta: " << mayor << endl;
    cout << "Calificacion mas baja: " << menor << endl;
    cout << "Aprobadas: " << aprobadas << endl;
    cout << "Reprobadas: " << reprobadas << endl;
}