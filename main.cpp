#include <iostream>
#include <limits> // Para usar numeric_limits
using namespace std;

// Prototipos de funciones
void imprimirPares2a20();
void tablaMultiplicar();
void sumaParesHastaN();
void calcularFactorial();

int main() {
    int opcion;

    do {
        // Menú de opciones
        cout << "\n--- MENU DE EJERCICIOS (BUCLES FOR) ---\n";
        cout << "1. Imprimir los numeros pares del 2 al 20\n";
        cout << "2. Mostrar la tabla de multiplicar de un numero ingresado\n";
        cout << "3. Calcular la suma de todos los numeros pares desde 1 hasta n\n";
        cout << "4. Calcular el factorial de un numero\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: imprimirPares2a20(); break;
            case 2: tablaMultiplicar(); break;
            case 3: sumaParesHastaN(); break;
            case 4: calcularFactorial(); break;
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
    cout << "\nIngrese un numero para mostrar su tabla de multiplicar: ";
    while (!(cin >> num)) { // Validación de entrada
        cout << "Entrada no válida. Por favor ingrese un número entero: ";
        cin.clear(); // Limpiar el error de entrada
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar el resto de la entrada incorrecta
    }

    cout << "Tabla del " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}

// Función que calcula la suma de todos los números pares desde 1 hasta n
void sumaParesHastaN() {
    int n, suma = 0;
    cout << "\nIngrese un numero entero positivo: ";
    while (!(cin >> n) || n <= 0) { // Validación de entrada
        cout << "Entrada no válida. Por favor ingrese un número entero positivo: ";
        cin.clear(); // Limpiar el error de entrada
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar el resto de la entrada incorrecta
    }

    for (int i = 2; i <= n; i += 2) {
        suma += i;
    }

    cout << "La suma de todos los numeros pares desde 1 hasta " << n << " es: " << suma << endl;
}

// Función que calcula el factorial de un número
void calcularFactorial() {
    int num;
    long long factorial = 1;
    cout << "\nIngrese un numero para calcular su factorial: ";

    while (!(cin >> num)) { // Validación de entrada
        cout << "Entrada no válida. Por favor ingrese un número entero: ";
        cin.clear(); // Limpiar el error de entrada
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignorar el resto de la entrada incorrecta
    }

    if (num < 0) {
        cout << "El factorial no esta definido para numeros negativos.\n";
        return;
    }

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    cout << "El factorial de " << num << " es: " << factorial << endl;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.