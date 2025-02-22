#include <iostream>
#include <limits> // Para usar numeric_limits
using namespace std;

// Prototipos de funciones
void imprimirPares2a20();
void tablaMultiplicar();

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "\n--- MENU DE EJERCICIOS (BUCLES FOR) ---\n";
        cout << "1. Imprimir los numeros pares del 2 al 20\n";
        cout << "2. Mostrar la tabla de multiplicar de un numero ingresado\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: imprimirPares2a20(); break;
            case 2: tablaMultiplicar(); break;
            case 0: cout << "Saliendo del programa...\n"; break;
            default: cout << "Opcion invalida, intente de nuevo.\n";
        }

    } while (opcion != 0);

    return 0;
}

// Función que imprime los números pares del 2 al 20
void imprimirPares2a20() {
    cout << "\nNumeros pares del 2 al 20: ";
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// Función que muestra la tabla de multiplicar de un número ingresado
void tablaMultiplicar() {
    int num;

    // Validación de entrada para asegurarse de que el usuario ingrese un número
    cout << "\nIngrese un numero para mostrar su tabla de multiplicar: ";

    // Asegurarnos de que el usuario ingrese un número válido
    while (true) {
        if (cin >> num) {
            break; // Si la entrada es un número válido, salimos del bucle
        } else {
            cout << "Por favor ingrese un numero valido: ";
            cin.clear(); // Limpiar el error de entrada
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar el resto de la entrada incorrecta
        }
    }

    cout << "Tabla del " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
    cout << endl; // Agregar un salto de línea al final para mayor claridad
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.